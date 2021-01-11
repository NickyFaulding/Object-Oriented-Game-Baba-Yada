#pragma once

#include "constants.h"
#include <vector>
#include "Score.h"

using namespace std;
class Player
{
    public:
        // constructor
        Player();

        // assessors
        int GetX();
        int GetY();
        int GetLives();
        char GetSymbol() const;
        bool IsAtPosition(int x, int y);
        void SetCurrentGrid(const vector<vector<char>>& currentGrid);
        int GetScore();
        int GetDirection();
        void RemoveLife();
        // mutators
        void Move(int key);
        bool CheckComplete();
        void ResetCompleteFlag();
        void LevelCompleted();
        void MoveToSpawn();
        void ChangeDirection(int _direction);
        int GetKeys();
        char symbol;
        int  x, y;
    private:
        // data members
        bool alive;
        int lives;
        bool escaped;
        int dx;
        int dy;
        int direction;
        bool levelComplete;
        Score score;
        vector<vector<char>> currentGrid;
        // supporting functions 
        void UpdatePosition(int dx, int dy);

};