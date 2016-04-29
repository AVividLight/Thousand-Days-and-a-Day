﻿#include "WindowManager.h"
#include "EventManager.h"


WindowManager windowManager;
EventManager eventManager;

int main (int argc, char *argv[])
{	
	
	if (windowManager.initializeSDL () != 0)
	{
		
		std::cout << "Unable to initialize SDL!" << std::endl;
		return 1;
	}
	
	if (windowManager.createMainWindow () != 0)
	{
		
		std::cout << "Unable to create main window!" << std::endl;
		return 1;
	}

	bool quit = false;
	while (quit == false)
	{
		
		//0. Events
		//1. Logic
		//2. Rendering
		
		if (eventManager.pollInput (windowManager) != 0)
		{
			
			std::cout << "Critical failure in the EventManager!" << std::endl;
		}
	}

	return 0;
}