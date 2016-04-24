#include "UIManager.h"

void UIManager::MainMenu ()
{
	
	menuState = 0;
	char userInput[1];
	int lastMenuState = -1;

	bool menuLoop = true;
	while (menuLoop)
	{
		
		if (lastMenuState != menuState)
		{
			
			lastMenuState = menuState;
			
			switch (menuState)
			{
				
				case 0:
					HomeMenu ();
					
					std::cin.getline (userInput, 2);
					std::cin.clear ();
					menuState = ConvertToInt (userInput);
					break;
					
				case 1:
					NewGameMenu ();
					break;
					
				case 2:
					ContinueMenu ();
					break;
					
				case 3:
					OptionsMenu ();
					break;
					
				case 4:
					if (QuitMenu () == 1)
					{
						
						return;
					} else {
						
						menuState = 0;
					}
					break;
					
				default:
					break;
			}
		}
	}
}


void UIManager::HomeMenu ()
{
	
	ClearScreen ();
	
	std::cout << "Thousand Days and a Day" << std::endl << "By Michael Bethke";
	std::cout << std::endl << std::endl;
	
	std::cout << "1. New Game";
	std::cout << std::endl;
	
	std::cout << "2. Continue";
	std::cout << std::endl;
	
	std::cout << "3. Options";
	std::cout << std::endl;
	
	std::cout << "4. Quit";
	std::cout << std::endl;
}


void UIManager::NewGameMenu ()
{
	
	ClearScreen ();
	std::cout << "New Game" << std::endl;
}


void UIManager::ContinueMenu ()
{
	
	ClearScreen ();
	std::cout << "Continue" << std::endl;
}


void UIManager::OptionsMenu ()
{
	
	ClearScreen ();
	std::cout << "Options" << std::endl;
}


int UIManager::QuitMenu ()
{
	
	ClearScreen ();
	std::cout << "Are you sure you want to quit? (Y/N)" << std::endl;
	
	char quitInput[1];
	
	bool quitLoop = true;
	while (quitLoop)
	{
		
		std::cin.getline (quitInput, 2);
		std::cin.clear ();
		
		switch (quitInput[0])
		{
			
			case 'Y':
			case 'y':
				quitLoop = false;
				return 1;
				break;
				
			case 'N':
			case 'n':
				quitLoop = false;
				return 0;
				break;
				
			default:
				std::cout << "Please enter Yes or No." << std::endl;
				quitLoop = true;
				break;
		}
	}
	
	return 0;
}


int UIManager::ConfirmInput ()
{
	
	return 0;
}


void UIManager::ClearScreen ()
{
	
	std::cout << "\E[H\E[2J";
}


int UIManager::ConvertToInt (const char *inputString)
{
	
	return atoi (inputString);
}