#include <iostream>
#include <cstring>
using namespace std;

const int SZ = 80;

class Pstring
{
protected:
    char str[SZ];

public:
    void getdata()
    {
        cout << "Enter string: ";
        cin.getline(str, SZ);
    }

    void display() const
    {
        cout << str << endl;
    }
};

class Pstring2 : public Pstring
{
public:
    Pstring2 left(const Pstring2& s1)
    {
        Pstring2 temp;
        int len = strlen(s1.str);
        int mid = len / 2;
        int i;

        for (i = 0; i < mid; i++)
            temp.str[i] = s1.str[i];

        temp.str[i] = '\0';
        return temp;
    }

    Pstring2 mid(const Pstring2& s1)
    {
        Pstring2 temp;
        int len = strlen(s1.str);

        if (len % 2 == 0)
        {
            temp.str[0] = '\0';
            return temp;
        }

        temp.str[0] = s1.str[len / 2];
        temp.str[1] = '\0';
        return temp;
    }

    Pstring2 right(const Pstring2& s1)
    {
        Pstring2 temp;
        int len = strlen(s1.str);
        int start = (len % 2 == 0) ? (len / 2) : (len / 2 + 1);
        int i = 0;

        while (s1.str[start] != '\0')
            temp.str[i++] = s1.str[start++];

        temp.str[i] = '\0';
        return temp;
    }
};

int main()
{
    Pstring2 s1, s2;

    s1.getdata();

    s2 = s2.left(s1);
    cout << "Left part: ";
    s2.display();

    s2 = s2.mid(s1);
    cout << "Middle part: ";
    s2.display();

    s2 = s2.right(s1);
    cout << "Right part: ";
    s2.display();

    return 0;
}

