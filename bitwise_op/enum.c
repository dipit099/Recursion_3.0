#include <stdio.h>
enum GAMESTATE
{
    GAME_OVER, // 0
    PLAYING,   // 1
    PAUSE      // 2
};
int main()
{
    // game
    enum GAMESTATE currentState;
    // 1=game on //0=game stopped //2=game pause

    currentState = PLAYING;

    if (currentState == PLAYING)
    {
        // 1000LINE
        printf("Game is on\n");
    }
    else if (currentState == GAME_OVER)
    {
    }
    else if (currentState == PAUSE)
    {
    }
    else
    {
    }
}