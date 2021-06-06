#include <cmath>dimensions
#include <cstdlib>
#include <iostream>
#include <Windows.h>

const int dimensions = 40;

using namespace std;

void display(bool tab[][dimensions * 2])
{
    system("cls");

    for (int i = 0; i < dimensions * 2; i++)
    {
        for (int j = 0; j < dimensions * 2; j++)
        {
            if (tab[i][j])
                cout << "#";
            else
                cout << " ";
        }
        cout << endl;
    }
}

main()
{
    bool tab[dimensions * 2][dimensions * 2] = {0};

    int a, b;
    float delta;

    cout << "value of a" << endl;
    cin >> a;

    cout << "value of b" << endl;
    cin >> b;

    cout << "value of delta" << endl;
    cin >> delta;
    for (int t = 1; t <= 7000; t++) //can change this to smaller number
    {
        int x = dimensions * sin(a * t / 7.0 + delta);
        int y = dimensions * sin(b * t / 7.0);

        x = x + dimensions;
        y =  2 * dimensions - (y + dimensions);

        tab[y][x] = 1;

        //display(tab);
    }

    display(tab);

    Sleep(10000);

    return 0;
}
