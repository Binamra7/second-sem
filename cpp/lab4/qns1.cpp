#include <iostream>

#define tempConst 9 / 5

using namespace std;

class toConvert
{
private:
    float c, f;

public:
    void read()
    {
        cout << "Enter the temperature in Celsius:";
        cin >> c;
    }
    void convert()
    {
        f = (9.0 / 5) * c + 32;
        cout << "The temp. in fahrenheit is: " << f;
    }
};

int main()
{
    toConvert cel;
    cel.read();
    cel.convert();
    return 0;
}