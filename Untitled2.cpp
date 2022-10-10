#include <iostream>
#include <math.h>

using namespace std;

class AreaShape
{
    float area;

  public:
    AreaShape(int length, int breadth)
    {
        area = length * breadth;
    }
    AreaShape(float s)
    {
        area = 4*s;
    }
    void display()
    {
        cout << "Area:\t" << area << endl;
    }
};
int main()
{
    int ch;
    float s;
    int length, breadth;
    do
    {
        cout << "1. Area of Rectangle" << endl;
        cout << "2. Area of square" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter Your Choice:\t";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            cout << "Enter Length and Breadth of the Rectangle:\t";
            cin >> length >> breadth;
            AreaShape area(length, breadth);
            area.display();
        }
        break;

        case 2:
        {
            cout << "Enter Base and Height of the square:\t";
            cin >> s;
            AreaShape area(s);
            area.display();
        }
        break;

        case 3:
            exit(0);

        default:
            cout << "Invalid Choice";
        }
    } while (ch != 3);
    return 0;}
