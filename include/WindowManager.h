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
	int initializeSDL ();
	int createMainWindow ();
	
	int shutdownSDL ();

private:
	const char m_MAIN_WINDOW_TITLE[24] = "Thousand Days and a Day";
	const int m_MAIN_WINDOW_WIDTH = 800;
	const int m_MAIN_WINDOW_HEIGHT = 600;
	
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	
	TTF_Font *m_prettyWhiteFont;
	
	SDL_Color m_colourWhite = {255, 255, 255};
	SDL_Color m_colourLightGrey = {192, 192, 192};
	SDL_Color m_colourDarkGrey = {64, 64, 64};
	SDL_Color m_colourBlack = {0, 0, 0};
};

#endif //WINDOWMANAGER_H