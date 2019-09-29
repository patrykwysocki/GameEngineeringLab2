#pragma once
#include "Command.h"
class QCommand : public Command
{
public:
	QCommand() {};
	~QCommand() {};
	virtual void execute() override
	{
		std::cout << "Q";
	};
	virtual void undo() override
	{
		std::cout << "Undo Q" << std::endl;
	};
	virtual void redo() override
	{
		std::cout << "Redo Q" << std::endl;
	};

private:

};