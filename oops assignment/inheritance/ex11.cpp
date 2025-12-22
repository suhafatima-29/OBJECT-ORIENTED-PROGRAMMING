#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 100;

struct Pair
{
    int x;
    int y;
};

class Stack2
{
protected:
    int st[MAX];
    int top;

public:
    Stack2()
    {
        top = -1;
    }

    void pushInt(int var)
    {
        if (top >= MAX - 1)
        {
            cout << "Stack overflow\n";
            exit(1);
        }
        st[++top] = var;
    }

    int popInt()
    {
        if (top < 0)
        {
            cout << "Stack underflow\n";
            exit(1);
        }
        return st[top--];
    }
};

class pairStack : public Stack2
{
public:
    void pushPair(Pair p)
    {
        pushInt(p.x);
        pushInt(p.y);
    }

    Pair popPair()
    {
        Pair p;
        p.y = popInt();
        p.x = popInt();
        return p;
    }
};

int main()
{
    pairStack ps;
    Pair p1, p2;

    p1.x = 10;
    p1.y = 20;

    ps.pushPair(p1);

    p2 = ps.popPair();

    cout << "Popped pair: " << p2.x << " " << p2.y << endl;

    return 0;
}

