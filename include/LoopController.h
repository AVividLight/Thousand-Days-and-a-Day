#ifndef LOOPCONTROLLER_H
#define LOOPCONTROLLER_H

#include <iostream>

#include "WindowManager.h"
#include "EventManager.h"


class LoopController
{
	
public:
	WindowManager windowManager;
	EventManager eventManager;
	
	int CoreLoop ();

private:
	bool m_mainLoop = true;
	
	int StartSDL ();
	int EventsLogicRendering ();
};

#endif //LOOPCONTROLLER_H