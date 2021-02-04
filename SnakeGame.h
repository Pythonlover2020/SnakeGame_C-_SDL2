/*coding:WINDOWS-936*/
#ifndef SNAKEGAME_H
#define SNAKEGAME_H

#include "SDLWindow.h"
#include <time.h>
#include <stdlib.h>
#define WIDTH 400
#define HEIGHT 400
#define FRAMESTATE 10

enum GameState
{
    START,
    WIN,
    LOSE,
    PLAYING
};

// ����
struct BODY
{
    int x;
    int y;
};

// ʳ��
struct FOOD
{
    int x;
    int y;
};

// ��
struct Snake
{
    unsigned int size; // ������
    BODY body[(WIDTH / 10) * (HEIGHT / 10)];
};

class SnakeGame : public SDLWindow
{
    public:
        SnakeGame();
        ~SnakeGame();

        GameState gameState;

        void draw(int dx,int dy);
        void eventLoop();
        void start();

        SDL_Surface *image;
        SDL_Texture *imageTexture;

        Snake *snake;

        void init_snake();
        void init_food();

        FOOD food;

    protected:

    private:
};

#endif // SNAKEGAME_H
