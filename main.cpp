#include <iostream>
#include <vector>

using namespace std;

#include "forest.hpp"

int Tree::counter = 0;

int main() {

  int i=0, j=0;

  Forest las(15, 120);
  las.AddTree(5, '%', "green", 2, 2);
  las.AddTree(3, '&', "red", 5, 14);
  las.AddTree(8, '+', "blue", 4, 30);


  /*for (j = 0; i<las.H; j++) {
    for(i=0; j<las.W; i++){
      cout<<las.tab[j][i];
    }
    cout << endl;
  }
  */
  las.PrintForest();

  return 0;
}