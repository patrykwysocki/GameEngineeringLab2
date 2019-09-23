#include "MacroCommand.h"
#include <iterator>
#include <list>
MacroCommand::MacroCommand()
{
}

MacroCommand::~MacroCommand()
{
}

void MacroCommand::add(Command*c)
{
	commands->push_back(c);
}

void MacroCommand::remove(Command*c)
{
	commands->remove(c);
}

void MacroCommand::execute()
{
	std::list<Command*>::iterator commandIterator;
	for (commandIterator = commands->begin(); commandIterator !=commands->end();commandIterator++)
	{
		(*commandIterator)->execute();
	}
}
