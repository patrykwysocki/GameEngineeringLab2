#pragma once
#include "Command.h"

class YCommand : public Command
{
public:
	YCommand() {};
	~YCommand() {};
	virtual void execute() override
	{
		std::cout << "Y";
	};
	virtual void undo() override
	{
		std::cout << "Undo Y" << std::endl;
	};
	virtual void redo() override
	{
		std::cout << "Redo Y" << std::endl;
	};
private:

};