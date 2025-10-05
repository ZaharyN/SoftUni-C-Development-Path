#include "Snake.h"

bool isSnakeOutOfBonds(const Point& potentialPos, const int& maxRow, const int& maxCol)
{
	if (potentialPos.row < 0
		|| potentialPos.row >= maxRow
		|| potentialPos.col < 0
		|| potentialPos.col >= maxCol)
		return true;

	return false;
}

bool isSnakeTouchingItself(const Point& potentialHeadPos, const std::deque<Point>& snakeNodes)
{
	for (const Point& node : snakeNodes)
	{
		if (node == potentialHeadPos) return true;
	}
	return false;
}

bool isSnakeHittingObstacle(const Point& potentialHeadPos, const std::vector<Point>& obstacles)
{
	for (std::size_t i = 0; i < obstacles.size(); i++)
	{
		if (potentialHeadPos.row == obstacles[i].row &&
			potentialHeadPos.col == obstacles[i].col) return true;
	}

	return false;
}

bool snakeCaughtPowerUp(const Point& potentialHeadPos, const std::vector<Point>& powerUps)
{
	for (std::size_t i = 0; i < powerUps.size(); i++)
	{
		if (potentialHeadPos.row == powerUps[i].row &&
			potentialHeadPos.col == powerUps[i].col) return true;
	}

	return false;
}

Snake::Snake(const int     fieldRows,
	const int     fieldCols,
	const Point& startPos)
	: _FIELD_ROWS(fieldRows), _FIELD_COLS(fieldCols), _currPos(startPos)
{
	// Insert the head:
	_snakeNodes.push_back(startPos);
}

Snake::~Snake(){}

StatusCode Snake::move(const Direction dir, const std::vector<Point>& obstacles, std::vector<Point>& powerUps)
{
	Point nextPos;

	switch (dir)
	{
		case Direction::UP:
			nextPos.row = --(_currPos.row);
			break;
		case Direction::RIGHT:
			nextPos.col = ++(_currPos.col);
			break;
		case Direction::LEFT:
			nextPos.col = --(_currPos.col);
			break;
		case Direction::DOWN:
			nextPos.row = ++(_currPos.row);
			break;
	}

	if (isSnakeOutOfBonds(nextPos, _FIELD_ROWS, _FIELD_COLS))
	{
		return StatusCode::SNAKE_DEAD;
	}

	if (isSnakeTouchingItself(nextPos, this->getSnakeNodes()))
	{
		return StatusCode::SNAKE_DEAD;
	}

	if (isSnakeHittingObstacle(nextPos, obstacles))
	{
		return StatusCode::SNAKE_DEAD;
	}

	// move
	_snakeNodes.push_front(nextPos);

	if (snakeCaughtPowerUp(nextPos, powerUps))
	{
		// Grow
		// remove the powerup
		for (std::size_t i = 0; i < powerUps.size(); i++)
		{
			if (nextPos.row == powerUps[i].row &&
				nextPos.col == powerUps[i].col)
			{
				powerUps.erase(powerUps.begin() + i);
				return StatusCode::SNAKE_GROWING;
			}
		}
	}
	else
	{
		_snakeNodes.pop_back();
	}

	return StatusCode::SNAKE_MOVING;
}

std::deque<Point>& Snake::getSnakeNodes()
{
	return this->_snakeNodes;
}