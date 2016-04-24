#ifndef UIMANAGER_H
#define UIMANAGER_H

#include <stdlib.h>
#include <iostream>


class UIManager
{
	
public:
	void MainMenu ();

private:
	int menuState;
	
	void HomeMenu ();
	void NewGameMenu ();
	void ContinueMenu ();
	void OptionsMenu ();
	int QuitMenu ();
	
	int ConfirmInput ();
	
	void ClearScreen ();
	int ConvertToInt (const char *inputString);
	
};

#endif //UIMANAGER_H