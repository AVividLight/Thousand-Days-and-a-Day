#include "EventManager.h"


int EventManager::pollInput (WindowManager &windowManager)
{
	
	SDL_Event event;
	while (SDL_PollEvent (&event) != 0)
	{
		
		if (SDL_PollEvent (&event))
		{
			
			switch (event.type)
			{
				
				case SDL_QUIT:
					if (windowManager.shutdownSDL () != 0)
					{
						return 1;
					} else {
						return 0;
					}
					break;
					
				case SDL_MOUSEBUTTONDOWN:
					break;
					
				case SDL_TEXTINPUT:
					//inputText += event.text.text;
					break;
		    }
		}
	}
	
	return 0;
}