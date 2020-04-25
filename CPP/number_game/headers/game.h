#pragma once

class Player
{
public:
    int guess{ 0 };
    int count{ 1 };
    int random;
    unsigned short guess_count{ 0 };
    char response;
};
void guess_checker();
void game();