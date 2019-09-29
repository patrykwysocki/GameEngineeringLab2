#include "InputHandler.h"

InputHandler::InputHandler()
{
	keyQ = new QCommand();
	keyW = new WCommand();
	keyE = new ECommand();
	keyR = new RCommand();
	keyT = new TCommand();
	keyY = new YCommand();

	macro = new MacroCommand();

}

InputHandler::~InputHandler()
{
}


void InputHandler::handleInput(sf::Event & t_event)
{

	switch (t_event.key.code)
	{
		case sf::Keyboard::Q:
			keyQ->execute();
			macro->add(keyQ);
			break;
		case sf::Keyboard::W:
			keyW->execute();
			macro->add(keyW);
			break;
		case sf::Keyboard::E:
			keyE->execute();
			macro->add(keyE);
			break;
		case sf::Keyboard::R:
			keyR->execute();
			macro->add(keyR);
			break;
		case sf::Keyboard::T:
			keyT->execute();
			macro->add(keyT);
			break;
		case sf::Keyboard::Y:
			keyY->execute();
			macro->add(keyY);
			break;
		case sf::Keyboard::Tab:
			macro->redo();
			break;
		case sf::Keyboard::BackSpace:
			macro->undo();
			break;
		default:
			break;
		}
	
}
