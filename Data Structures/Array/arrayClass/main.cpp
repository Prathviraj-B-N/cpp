#include <iostream>

using namespace std;

template <class T>

class Array
{
private:
    T *Arr;
    int size;
    int len;

public:
    Array()
    {
        Arr = new T[10];
        size = 10;
        len = 0;
    }

    Array(int Size)
    {
        size = Size;
        Arr = new T[size];
        len = 0;
    }

    void display();
    void push(T val);
    void insert(int idx, T val);

    ~Array()
    {
        delete[] Arr;
    }
};

template <class T>
void Array<T>::display()
{
    for (int i = 0; i < len; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

template <class T>
void Array<T>::push(T val)
{
    if (len == size)
    {
        cout << "Array full!" << endl;
        return;
    }
    Arr[len] = val;
    len++;
}

template <class T>
void Array<T>::insert(int idx, T val)
{
    if (idx >= size || idx < 0)
    {
        cout << "Array index out of range" << endl;
        return;
    }
    if (len == size)
    {
        cout << "Array Full!" << endl;
        return;
    }

    for (int i = len - 1; i >= idx; i--)
    {
        Arr[i + 1] = Arr[i];
    }
    Arr[idx] = val;
    len++;
}

int main()
{

    Array<int> a(10);
    Array<float> b(5);
    a.insert(0, 1);
    a.push(2);
    a.insert(2, 3);
    a.insert(2, 4);
    a.insert(4, 5);
    a.display();
    
    b.insert(0,1.2);
    b.insert(0,1.3);
    b.insert(0,1.4);
    b.push(2.1);
    b.display();
    return 0;
}