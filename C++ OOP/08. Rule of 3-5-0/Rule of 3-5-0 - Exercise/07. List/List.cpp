#include "List.h"
#include<list>
#include<sstream>

List::Node::Node(int value, Node* prev, Node* next)
	: value(value), prev(prev), next(next)
{
}

int List::Node::getValue() const { return this->value; }
void List::Node::setValue(int value) { this->value = value; }

List::Node* List::Node::getNext() const { return this->next; }
void List::Node::setNext(Node* next)
{
	if (next != nullptr)
	{
		this->next = next;
	}
}

List::Node* List::Node::getPrev() const { return this->prev; }
void List::Node::setPrev(Node* prev)
{
	if (prev != nullptr)
	{
		this->prev = prev;
	}
}


List::List() : head(nullptr), tail(nullptr), size(0) {}

List::List(const List& other)
	:List()
{
	addAll(other);	
}

int List::first() const
{
	if (size == 0) return 0;

	return head->getValue();
}

void List::add(int value)
{
	Node* newNode = new Node(value, nullptr, nullptr);

	if (size == 0)
	{
		head = tail = newNode;
	}
	else
	{
		tail->setNext(newNode);
		newNode->setPrev(tail);
		tail = newNode;
		tail->setNext(nullptr);
	}
	size++;
}

void List::addAll(const List& other)
{
	Node* currentNode = other.head;

	while (currentNode != nullptr)
	{
		add(currentNode->getValue());
		currentNode = currentNode->getNext();
	}
}

void List::removeFirst()
{
	if (size == 0) return;

	if (size == 1)
	{
		delete head;
		head = tail = nullptr;
		size--;
		return;
	}

	Node* afterHead = head->getNext();
	afterHead->setPrev(nullptr);
	delete head;
	head = afterHead;
	size--;
}

void List::removeAll()
{
	while (size != 0)
	{
		removeFirst();
	}
}

size_t List::getSize() const
{
	return this->size;
}

bool List::isEmpty() const
{
	return size == 0;
}

static List getReversed(List l)
{
	return l;
}

std::string List::toString() const
{
	std::ostringstream output;
	Node* currentNode = head;

	if (currentNode == nullptr) return output.str();

	while (currentNode != nullptr)
	{
		output << currentNode->getValue() << " ";
		currentNode = currentNode->getNext();
	}

	return output.str();
}

List& List::operator<<(const int& value)
{
	add(value);
	return *this;
}

List& List::operator<<(const List& other)
{
	this->addAll(other);
	return *this;
}

List& List::operator=(const List& other)
{
	if (this == &other) return *this;

	removeAll();
	addAll(other);

	return *this;
}

List::~List()
{
	removeAll();
}