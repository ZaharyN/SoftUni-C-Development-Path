#ifndef SOLFEGE_NOTE_NAMING_H
#define SOLFEGE_NOTE_NAMING_H

#include<string>

class SolfegeNoteNaming
{
public:
	char operator()(const std::string& note) const;
};

#endif // !SOLFEGE_NOTE_NAMING_H
