#include <iostream>

using namespace std;


int *generateArray(int number);

int length = 10;

int *generateArray(int number)
{
  int *numbersList = new int[length];

  for (int i = 1; i <= length; i++) {
    numbersList[i - 1] = number * i;
  }

  return numbersList;
}
int main()
{
  int **arraytwod = new int*[length];
  for (int i = 0; i < length; i++) {
    arraytwod[i] = new int[length];
 
    arraytwod[i] = generateArray(i + 1);
  }

 
  for (int i = 1; i <= length; i++) {
    for (int j = 0; j < i; j++) {
      cout << arraytwod[i - 1][j] << " ";
    }
    cout << endl;
  }
}


