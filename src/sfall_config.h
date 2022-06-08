#ifndef SFALL_CONFIG_H
#define SFALL_CONFIG_H

#include "config.h"

#define SFALL_CONFIG_FILE_NAME "ddraw.ini"

#define SFALL_CONFIG_MISC_KEY "Misc"

#define SFALL_CONFIG_MAIN_MENU_BIG_FONT_COLOR "MainMenuBigFontColour"
#define SFALL_CONFIG_MAIN_MENU_FONT_COLOR "MainMenuFontColour"
#define SFALL_CONFIG_SKIP_OPENING_MOVIES_KEY "SkipOpeningMovies"
#define SFALL_CONFIG_STARTING_MAP_KEY "StartingMap"

extern bool gSfallConfigInitialized;
extern Config gSfallConfig;

bool sfallConfigInit(int argc, char** argv);
void sfallConfigExit();

#endif /* SFALL_CONFIG_H */