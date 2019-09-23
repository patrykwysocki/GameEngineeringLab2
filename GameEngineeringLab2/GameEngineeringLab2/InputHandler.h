#include "Command.h"
class InputHandler
{
public:
	InputHandler();
	~InputHandler();
	//method to bind commands
	void handleInput();

private:
	Command* keyQ;
	Command* keyW;
	Command* keyE;
	Command* keyR;
	Command* keyT;
	Command* keyY;
};

