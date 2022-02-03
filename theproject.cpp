#include <iostream>
#define pie 3.142
using namespace std;

void inimenu();

    void menudecision(int);
    double areacicle(double);
    double areasquare(double);
     double arearectangle(double,double);
    double areaTriangle(double,double);
int main()
{
    int choice;

    inimenu();

    cin>> choice;

    menudecision(choice);

}

void inimenu()
{
    cout<< "enter options"<<endl;
    cout<< "1. circle "<<endl;
    cout<< "2. square "<<endl;
    cout<< "3. Rectangle "<<endl;
    cout<< "4. Triangle "<<endl;
}

void menudecision(int choice) // a loop  to enable the user make a choice .
{
    switch(choice)
    {
        double r,s ;
        case 1:

            cout<< " Enter the radius :" <<endl;
            cin>> r;
             areacicle(r);
            break;
        case 2:
            cout<< " Enter the side of the Square :" <<endl;
            cin>> s;
             areasquare(s);
            break;
        case 3:
            cout<< " Enter the radius :" <<endl;
            cin>> r;
              arearectangle()
            break;
        case 4:
            cout<< " Enter the radius :" <<endl;
            cin>> r;
             areacicle(r);
            break;

        default:
            cout<< "you did not enter the right choice "<<endl;

    }
}

double areacicle(double r)
{

    double  result = pie * r *r;
    cout<< " the area of a circle with the radius "<< r <<" =" << result <<endl;
    return result;

}
 double areasquare(double s)
 {
     double result = s*s;

     cout<< " the area of the square with the side "<< s <<" =" << result <<endl;

     return result;
 }
