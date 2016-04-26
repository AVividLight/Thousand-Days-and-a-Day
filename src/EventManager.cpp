#include "EventManager.h"


int EventManager::PollInput ()
{
	
	SDL_Event event;
	while (SDL_PollEvent (&event) != 0)
	{
		
		if (SDL_PollEvent (&event))
		{
			
			switch (event.type)
			{
				
				case SDL_QUIT:
					windowManager.ShutdownSDL ();
					return 0;
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