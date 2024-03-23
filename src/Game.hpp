#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>

#include "Network.hpp"
#include "UiManager.hpp"

class CGame
{
public:
    CGame();
    ~CGame() = default;

    void Run();

private:
    sf::RenderWindow m_window;

    CUiManager m_uiManager;
    CNetwork m_network;

    bool m_mouseHasBeenPressed = false;

    void CheckEvents();
};

#endif // GAME_HPP
