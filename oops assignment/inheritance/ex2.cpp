#include <iostream>
#include <cstring>
using namespace std;

const int SZ = 80;

class String
{
protected:
    char str[SZ];

public:
    void display()
    {
        cout << "Stored string: " << str << endl;
    }
};

class Pstring : public String
{
private:
    bool truncated;

public:
    void getdata()
    {
        char temp[200];
        cout << "Enter string: ";
        cin.getline(temp, 200);

        if (strlen(temp) < SZ)
        {
            strcpy(str, temp);
            truncated = false;
        }
        else
        {
            strncpy(str, temp, SZ - 1);
            str[SZ - 1] = '\0';
            truncated = true;
        }
    }

    void putdata()
    {
        display();
        if (truncated)
            cout << "Status: String was too long and truncated\n";
        else
            cout << "Status: String length is safe\n";
    }
};

int main()
{
    Pstring s;

    s.getdata();
    s.putdata();

    return 0;
}

