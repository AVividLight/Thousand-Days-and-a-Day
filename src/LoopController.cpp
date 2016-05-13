#include "LoopController.h"


int LoopController::CoreLoop ()
{
	
	if (StartSDL () != 0)
	{
		
		std::cout << "Unable to start SDL! [LoopController.cpp - int StartMainLoop() : 10]" << std::endl;
		return 1;
	}
	
	while (m_mainLoop == true)
	{
		
		if (EventsLogicRendering () != 0)
		{
			
			std::cout << "Error in CoreLoop! [LoopController.cpp - int StartMainLoop() : 21]" << std::endl;
			windowManager.ShutdownSDL ();
			return 1;
		}
	}
	
	windowManager.ShutdownSDL ();
	return 0;
}


int LoopController::StartSDL ()
{
	
	if (windowManager.InitializeSDL () != 0)
	{
		
		std::cout << "Unable to initialize SDL! [LoopController.cpp - int StartSDL() : 36]" << std::endl;
		return 1;
	}
	
	if (windowManager.CreateMainWindow () != 0)
	{
		
		std::cout << "Unable to create main window! [LoopController.cpp - int StartSDL() : 43]" << std::endl;
		return 1;
	}
	
	return 0;
}


int LoopController::EventsLogicRendering ()
{
	
	/*
		0. Events - EventManager
		1. Logic
		2. Rendering
	*/
	
	const unsigned int eventLoop = eventManager.PollInput (windowManager);
	
	switch (eventLoop)
	{
		
		case 0:
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			m_mainLoop = false;
			break;
	}
	
	return 0;
}