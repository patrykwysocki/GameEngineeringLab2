#include "Command.h"
#include <iostream>
#include <list>

class MacroCommand : public Command
{
public:
	MacroCommand();
	virtual ~MacroCommand();
	virtual void add(Command* c);
	virtual void remove(Command* c);
	virtual void execute();

private:
	std::list<Command*>* commands;
	
};