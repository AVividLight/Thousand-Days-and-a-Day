#ifndef WINDOWMANAGER_H
#define WINDOWMANAGER_H

#include <iostream>

#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_image.h"
#include "cleanup.h"

class WindowManager
{
	
public:
	int InitializeSDL ();
	int CreateMainWindow ();
	
	int GetInput ();
	
	int ShutdownSDL ();

private:
	const char MAIN_WINDOW_TITLE[24] = "Thousand Days and a Day";
	const int MAIN_WINDOW_WIDTH = 800;
	const int MAIN_WINDOW_HEIGHT = 600;
	
	SDL_Window *window;
	SDL_Renderer *renderer;
	
	TTF_Font *prettyWhiteFont;
	
	SDL_Color colourWhite = {255, 255, 255};
	SDL_Color colourLightGrey = {192, 192, 192};
	SDL_Color colourDarkGrey = {64, 64, 64};
	SDL_Color colourBlack = {0, 0, 0};
};

#endif //WINDOWMANAGER_H