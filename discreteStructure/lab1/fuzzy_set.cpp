#include <iostream>

using namespace std;

int main()
{
    float xA[10], xB[10], xC[10], xD[10];
    xA[0] = 0.7;
    xA[1] = 0.4;
    xA[2] = 0;

    xB[0] = 0.3;
    xB[1] = 0.8;
    xB[2] = 1;

    cout << "AUB={";

    for (int i = 0; i < 3; i++)
    {
        cout << " (";
        if (xA[i] > xB[i])
        {
            xC[i] = xA[i];
            cout << "x" << i + 1 << "," << xC[i];
        }
        else
        {
            xC[i] = xB[i];
            cout << "x" << i + 1 << "," << xC[i];
        }
        cout << ") ";
    }
    cout << "}";

    cout << endl;

    // intersection

    cout << "AnB={";

    for (int i = 0; i < 3; i++)
    {
        cout << " (";
        if (xA[i] < xB[i])
        {
            xC[i] = xA[i];
            cout << "x" << i + 1 << "," << xC[i];
        }
        else
        {
            xC[i] = xB[i];
            cout << "x" << i + 1 << "," << xC[i];
        }
        cout << ") ";
    }
    cout << "}";
    cout << endl;
    // xA complement
    cout << "A'={";

    for (int i = 0; i < 3; i++)
    {
        cout << " (";
        cout << "x" << i + 1 << "," << 1 - xA[i];
        cout << ") ";
    }
    cout << "}";

    cout << endl;

    // xB complement
    cout << "B'={";

    for (int i = 0; i < 3; i++)
    {
        cout << " (";
        cout << "x" << i + 1 << "," << 1 - xB[i];
        cout << ") ";
    }
    cout << "}";
    return 0;
}
