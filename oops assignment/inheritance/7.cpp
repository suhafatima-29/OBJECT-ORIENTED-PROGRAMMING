#include <iostream>
using namespace std;

class Counter
{
protected:
    int count;

public:
    Counter() : count(0) {}
    Counter(int c) : count(c) {}

    void display() const
    {
        cout << count << endl;
    }

    Counter& operator++()
    {
        ++count;
        return *this;
    }

    Counter& operator--()
    {
        --count;
        return *this;
    }
};

class Counter2 : public Counter
{
public:
    Counter2() : Counter() {}
    Counter2(int c) : Counter(c) {}

    Counter2 operator++(int)
    {
        Counter2 temp(*this);
        ++count;
        return temp;
    }

    Counter2 operator--(int)
    {
        Counter2 temp(*this);
        --count;
        return temp;
    }
};

int main()
{
    Counter2 c(5);

    cout << "Initial: ";
    c.display();

    ++c;
    cout << "After prefix ++: ";
    c.display();

    c++;
    cout << "After postfix ++: ";
    c.display();

    --c;
    cout << "After prefix --: ";
    c.display();

    c--;
    cout << "After postfix --: ";
    c.display();

    return 0;
}

