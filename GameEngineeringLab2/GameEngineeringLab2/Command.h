//command interface
class Command
{
public:
	virtual ~Command() {};
	virtual void execute() = 0;
	virtual void undo() = 0;

protected:
	Command() {}

};
class QCommand : public Command
{
public:
	QCommand();
	~QCommand();

private:

};

QCommand::QCommand()
{
}

QCommand::~QCommand()
{
}

class WCommand : public Command
{
public:
	WCommand();
	~WCommand();

private:

};

WCommand::WCommand()
{
}

WCommand::~WCommand()
{
}
class ECommand : public Command
{
public:
	ECommand();
	~ECommand();

private:

};

ECommand::ECommand()
{
}

ECommand::~ECommand()
{
}
class RCommand : public Command
{
public:
	RCommand();
	~RCommand();

private:

};

RCommand::RCommand()
{
}

RCommand::~RCommand()
{
}

class TCommand : public Command
{
public:
	TCommand();
	~TCommand();

private:

};

TCommand::TCommand()
{
}

TCommand::~TCommand()
{
}

class YCommand : public Command
{
public:
	YCommand();
	~YCommand();

private:

};

YCommand::YCommand()
{
}

YCommand::~YCommand()
{
}