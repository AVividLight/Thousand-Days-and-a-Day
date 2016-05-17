#ifndef RENDERMANAGER_H
#define RENDERMANAGER_H

#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_image.h"
#include "cleanup.h"

#include "WindowManager.h"


class RenderManager
{
	
public:
	void Initialize ();
	void Destroy ();
	int UpdateRenderer (WindowManager &windowManager);
	
	bool frameUpdate = true;
	
	SDL_Surface *storySurface;

private:
	char m_RANDOMCSTRING[7];
	
	const char m_font[25] = "/Library/Fonts/Arial.ttf";
	TTF_Font *m_prettyWhiteFont;
	
	SDL_Color m_colourWhite = {255, 255, 255};
	SDL_Color m_colourLightGrey = {192, 192, 192};
	SDL_Color m_colourDarkGrey = {64, 64, 64};
	SDL_Color m_colourBlack = {0, 0, 0};
};


#endif //RENDERMANAGER_H