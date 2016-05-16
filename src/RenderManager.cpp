#include "RenderManager.h"


void RenderManager::Initialize ()
{
	
	m_distrobution = std::uniform_int_distribution<> (0, 9);
	
	m_prettyWhiteFont = TTF_OpenFont (m_font, 24);
}


void RenderManager::Destroy ()
{
	
	TTF_CloseFont (m_prettyWhiteFont);
}


int RenderManager::UpdateRenderer (WindowManager &windowManager)
{
	
	sprintf (m_RANDOMCSTRING, "%d", RandomInt ());
	

	SDL_Surface *surfaceMessage = TTF_RenderUTF8_Blended (m_prettyWhiteFont, m_RANDOMCSTRING, m_colourWhite);
	SDL_Texture* message = SDL_CreateTextureFromSurface (windowManager.renderer, surfaceMessage);

	SDL_Rect message_rect;
	if (SDL_QueryTexture (message, NULL, NULL, &message_rect.w, &message_rect.h) != 0)
	{
		
		std::cout << "Unable to query texture!" << std::endl;
	}

	message_rect.x = ((windowManager.MAIN_WINDOW_WIDTH / 2) - (message_rect.w / 2));
	message_rect.y = ((windowManager.MAIN_WINDOW_HEIGHT / 2) - (message_rect.h / 2));

	SDL_RenderClear(windowManager.renderer);
	SDL_RenderCopy (windowManager.renderer, message, NULL, &message_rect);
	SDL_RenderPresent(windowManager.renderer);
	
	return 0;
}


int RenderManager::RandomInt ()
{

	return m_distrobution (m_generator);
}