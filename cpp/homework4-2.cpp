#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    void set_value();
    void show_value();
    int get_max();
    int get_min();
    void show_max();
    void show_min();
    void show_in_order();

private:
    int array[10];
};

void Array::set_value()
{
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
};

void Array::show_value()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "array[" << i << "]:" << array[i] << endl;
    }
};

int Array::get_max()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array[0];
};

int Array::get_min()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array[10];
};

void Array::show_max()
{
    cout << get_max() << endl;
};

void Array::show_min()
{
    cout << get_min() << endl;
};

void Array::show_in_order()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int i = 9; i >=0; i--){
        cout << array[i] << endl;
    }
};

int main()
{
    Array arr;
    arr.set_value();
    arr.show_max();
    cout << arr.get_min() << endl;
    arr.show_in_order();
    return 0;
}