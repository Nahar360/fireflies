#ifndef GLOBAL_SETTINGS_HPP
#define GLOBAL_SETTINGS_HPP

#include <SFML/Graphics.hpp>

namespace GlobalSettings
{
extern int WINDOW_WIDTH;
extern int WINDOW_HEIGHT;

extern char WINDOW_TITLE[255];

extern sf::Color BACKGROUND_COLOR;
extern float BACKGROUND_COLOR_INPUT[3];

extern float BLINKING_DURATION;
} // namespace GlobalSettings

#endif // GLOBAL_SETTINGS_HPP
