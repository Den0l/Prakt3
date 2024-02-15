#include <iostream>

using namespace std;

int main()
{
    float mas[3][5];
    float res;
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mas[i][j];
        }

    }
    cout << endl;
    for (int g = 0; g < 3; g++)
    {
        res = 0;
        for (int f = 0; f < 5; f++)
        {
             res += mas[g][f];
        }
        cout << res / 5 << endl;
    }

}

