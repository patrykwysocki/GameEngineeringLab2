#pragma once
#include "Command.h"
#include "QCommand.h"
#include "WCommand.h"
#include "ECommand.h"
#include "RCommand.h"
#include "TCommand.h"
#include "YCommand.h"
#include "MacroCommand.h"

#include <SFML/Graphics.hpp>

class InputHandler
{
public:
	InputHandler();
	~InputHandler();
	//method to bind commands
	void handleInput(sf::Event & t_event);
private:
	Command * keyQ;
	Command * keyW;
	Command * keyE;
	Command * keyR;
	Command * keyT;
	Command * keyY;

	MacroCommand * macro;
	std::vector<Command*> commands;
};

