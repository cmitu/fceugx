/****************************************************************************
 * FCE Ultra
 * Nintendo Wii/Gamecube Port
 *
 * Tantric 2008-2022
 *
 * menu.h
 *
 * Main menu flow control
 ****************************************************************************/

#ifndef _MENU_H
#define _MENU_H

bool GuiLoaded();
void InitGUIThreads();
void MainMenu (int menuitem);
void ErrorPrompt(const char * msg);
int ErrorPromptRetry(const char * msg);
void InfoPrompt(const char * msg);
void ShowAction (const char *msg);
void CancelAction();
void ShowProgress (const char *msg, int done, int total);
void ChangeLanguage();

extern u8 * bg_music;
extern u32 bg_music_size;

enum
{
	MENU_EXIT = -1,
	MENU_NONE,
	MENU_SETTINGS,
	MENU_SETTINGS_FILE,
	MENU_SETTINGS_MENU,
	MENU_SETTINGS_NETWORK,
	MENU_GAMESELECTION,
	MENU_GAME,
	MENU_GAME_SAVE,
	MENU_GAME_LOAD,
	MENU_GAME_DELETE,
	MENU_GAMESETTINGS,
	MENU_GAMESETTINGS_MAPPINGS,
	MENU_GAMESETTINGS_MAPPINGS_CTRL,
	MENU_GAMESETTINGS_MAPPINGS_MAP,
	MENU_GAMESETTINGS_VIDEO,
	MENU_GAMESETTINGS_CHEATS
};

#endif
