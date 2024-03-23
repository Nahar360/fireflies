#include "UiSettings.hpp"

int NUM_FIREFLIES = 2;

float FIREFLIES_RADIUS = 50.0f;
float INFLUENCE_RADIUS = 150.0f;

float MIN_BLINKING_RATE = 1.0f;
float MAX_BLINKING_RATE = 3.0f;

float FIREFLIES_COLOR_INPUT[3] = {1.0f, 0.0f, 0.0f};

const char* SHOW_LINES_OPTIONS[3] = {"None", "All", "Only neighbours"};
int SHOW_LINES_OPTION = 0;

bool SHOW_INFLUENCE_RADIUS = true;
bool SHOW_VERTICES = false;

float BLINKING_DURATION = 0.1f;
