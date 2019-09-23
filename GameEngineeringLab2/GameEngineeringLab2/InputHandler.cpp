#include "InputHandler.h"

InputHandler::InputHandler()
{
}

InputHandler::~InputHandler()
{
}

void InputHandler::handleInput()
{
	if (isPressed(keyQ))
	{
		keyQ->execute();
	}
	else if (isPressed(keyW))
	{
		keyW->execute();
	}
	else if (isPressed(keyE))
	{
		keyE->execute();
	}
	else if (isPressed(keyR))
	{
		keyR->execute();
	}
	else if (isPressed(keyT))
	{
		keyT->execute();
	}
	else if (isPressed(keyY))
	{
		keyY->execute();
	}
}
