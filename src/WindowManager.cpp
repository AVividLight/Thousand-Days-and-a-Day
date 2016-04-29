#include "WindowManager.h"


int WindowManager::initializeSDL ()
{
	
	if (SDL_Init (SDL_INIT_VIDEO) != 0)
	{

		return 1;
	}
	
	if (TTF_Init() != 0)
	{
		
		SDL_Quit ();
		return 1;
	}
	
	return 0;
}


int WindowManager::createMainWindow ()
{
	
	SDL_DisplayMode displayMode;
	if (SDL_GetCurrentDisplayMode (0, &displayMode) != 0)
	{
		
		SDL_Quit ();
		return 1;
	}
	
	m_window = SDL_CreateWindow (m_MAIN_WINDOW_TITLE, ((displayMode.w / 2) - m_MAIN_WINDOW_WIDTH / 2), ((displayMode.h / 2) - m_MAIN_WINDOW_HEIGHT / 2), m_MAIN_WINDOW_WIDTH, m_MAIN_WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
	if (m_window == nullptr)
	{
	
		SDL_Quit ();
		return 1;
	}
	
	m_renderer = SDL_CreateRenderer (m_window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (m_renderer == nullptr)
	{
	
		cleanup (m_window);
		SDL_Quit ();
		return 1;
	}
	
	return 0;
}


int WindowManager::shutdownSDL ()
{
	
	TTF_Quit ();
	cleanup (m_renderer, m_window);
	SDL_Quit ();
	
	return 0;
}