#include <iostream>

using namespace std;

int *spoiler(int number, int length);
int *RightArray(int number, int length);

int *spoiler(int number, int length)
{
  int *numbersList = new int[length];
  int temp = number;

  for (int i = 0; i < length; i++) {
    numbersList[i] = (i < number - 1) ? temp-- : temp++;
  }

  return numbersList;
  
  
}
int *RightArray(int number, int length)
{
  int *numbersList = new int[length];

  for (int i = 0; i < length; i++) {
    numbersList[i] = number;
  }

  return numbersList;
}
int main()
{
  
  int *numbers, value = 0;

  cout << "Masukkan Nilai n = ";
  cin >> value;

  int length = (2 * value) - 1, **arraytwod = new int*[length];

  numbers = spoiler(value, length);

  for (int i = 0; i < length; i++) {
    arraytwod[i] = new int[length];
    arraytwod[i] = RightArray(numbers[i], length);
  }

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      cout << arraytwod[i][j] << " ";
    }
    cout << endl;
  }
}




