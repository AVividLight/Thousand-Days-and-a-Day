#ifndef RENDERMANAGER_H
#define RENDERMANAGER_H

#include <random>

#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_image.h"
#include "cleanup.h"

#include "WindowManager.h"


class RenderManager
{
	
public:
	void PrepareRandomFunction ();
	int UpdateRenderer (WindowManager &windowManager);

private:
	char m_RANDOMCSTRING[7];
	
	const char m_font[25] = "/Library/Fonts/Arial.ttf";
	TTF_Font *m_prettyWhiteFont;
	
	SDL_Color m_colourWhite = {255, 255, 255};
	SDL_Color m_colourLightGrey = {192, 192, 192};
	SDL_Color m_colourDarkGrey = {64, 64, 64};
	SDL_Color m_colourBlack = {0, 0, 0};
	
	std::default_random_engine m_generator;
	std::uniform_int_distribution<> m_distrobution;
	int RandomInt ();
	
};


#endif //RENDERMANAGER_H