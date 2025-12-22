#include <iostream>
#include <cstdlib>
using namespace std;

class safearray
{
protected:
    static const int LIMIT = 100;
    int arr[LIMIT];

public:
    int& operator[](int n)
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "Index out of bounds\n";
            exit(1);
        }
        return arr[n];
    }
};

class safehilo : public safearray
{
private:
    int low;
    int high;

public:
    safehilo(int l, int h)
    {
        low = l;
        high = h;
    }

    int& operator[](int n)
    {
        if (n < low || n > high)
        {
            cout << "Index out of bounds\n";
            exit(1);
        }
        return safearray::operator[](n - low);
    }
};

int main()
{
    safehilo sa(10, 20);

    for (int i = 10; i <= 20; i++)
        sa[i] = i * 10;

    for (int i = 10; i <= 20; i++)
        cout << sa[i] << " ";

    return 0;
}

