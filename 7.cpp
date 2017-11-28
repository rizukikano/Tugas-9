#include <iostream>
using namespace std;

int up(int n){
	int i,j;
	for(i=n; i>=1; i--)
    {
        for(j=n; j>i; j--)
        {
            cout << j;
        }

        for(j=1; j<=(i*2-1); j++)
        {
            cout << i;
        }

        for(j=i+1; j<=n; j++)
        {
            cout << j;
        }

        cout << endl;
    }
}

int bot(int n){
	int i,j;
	for(i=1; i<n; i++)
    {
        for(j=n; j>i; j--)
        {
            cout << j;
        }

        for(j=1; j<=(i*2-1); j++)
        {
            cout << i+1;
        }

        for(j=i+1; j<=n; j++)
        {
            cout << j;
        }

        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Masukkan nilai n: ";
    cin >> n;
    up(n);
    bot(n);
}
