#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

#include "tree.hpp"

class Forest {
public:


    int H, W;
    int** tab;

    vector<Tree*> trees;

    void AddTree(int h, char s, string c, int y, int x); //10, '%', "green", 2, 2

    Forest(int h, int w);

    ~Forest();

    void PrintForest();

};

