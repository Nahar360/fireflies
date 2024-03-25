#ifndef UI_MANAGER_HPP
#define UI_MANAGER_HPP

#include <SFML/Graphics.hpp>

#include "Network.hpp"

class CUiManager
{
public:
    CUiManager() = default;
    ~CUiManager() = default;

    void Init(sf::RenderWindow& window);
    void Shutdown();

    void ProcessEvent(sf::Event event);

    void Run(sf::RenderWindow& window, CNetwork& network, float fps);
    void Render(sf::RenderWindow& window);

private:
    sf::Clock m_deltaClock;

    void Update(sf::RenderWindow& window);
    void Begin();
    void HandleUi(sf::RenderWindow& window, CNetwork& network, float fps);
    void End();

    void UpdateWindowTitle(sf::RenderWindow& window);
    void ShowFPS(float fps);
    void UpdateMousePosition(sf::RenderWindow& window);
    void InitialiseNetwork(CNetwork& network);
    void UpdateBackgroundColor();
    void UpdateFirefliesColor(CNetwork& network);
    void UpdateShowLines(CNetwork& network);
    void UpdateShowInfluenceRadius(CNetwork& network);
    void UpdateBlinkingRate();
    void CreateFirefly(CNetwork& network);
    void DeleteFirefly(CNetwork& network);
    void ClearFireflies(CNetwork& network);
    void ListFireflies(CNetwork& network);
};

#endif // UI_MANAGER_HPP
