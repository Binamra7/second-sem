#include <iostream>

using namespace std;

long int hms_to_secs(int hr, int minu, int sec)
{

    return hr * 3600 + minu * 60 + sec;
}

int main()
{

    int hr1, minu1, sec1;

    cout << "Enter hour: ";
    cin >> hr1;
    cout << "Enter minutes: ";
    cin >> minu1;
    cout << "Enter seconds: ";
    cin >> sec1;

    cout << "Time in seconds is: " << hms_to_secs(hr1, minu1, sec1);

    return 0;
}