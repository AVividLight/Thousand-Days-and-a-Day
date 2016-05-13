#include "RenderManager.h"

/*

	TTF_Font *primaryFont = TTF_OpenFont (font, 24);
	SDL_Color colorWhite = {192, 192, 192};	

	SDL_Surface *surfaceMessage = TTF_RenderUTF8_Blended (primaryFont, "Thousand Days and a Day", colorWhite);
	SDL_Texture* message = SDL_CreateTextureFromSurface (renderer, surfaceMessage);

	SDL_Rect message_rect;
	if (SDL_QueryTexture (message, NULL, NULL, &message_rect.w, &message_rect.h) != 0)
	{
		
		std::cout << "Unable to query texture!" << std::endl;
	}

	message_rect.x = ((MAIN_WINDOW_WIDTH / 2) - (message_rect.w / 2));
	message_rect.y = ((MAIN_WINDOW_HEIGHT / 2) - (message_rect.h / 2));

	SDL_RenderClear(renderer);
	SDL_RenderCopy (renderer, message, NULL, &message_rect);
	SDL_RenderPresent(renderer);

*/