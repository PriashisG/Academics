#include <bits/stdc++.h>
using namespace std;

class Circle{
    int radius;
    float area;
    double sum = 0;

    public :
        void GetInput(){
            int a;
            cin >> a;
            radius = a;
        }

        void FindArea(){
            float x = 3.1416 * radius * radius;
            area = x;
        }

        void PrintValue(){
            cout << "Radius : " << radius << '\n';
            cout << "Area : " << area << '\n';
        }

        void CalSum(){
            sum += area;
        }

        void PrintSum(){
            cout << '\n' << "Total Sum : " << sum << '\n';
        }
};

int main(void){
    Circle c;

    for (int i = 0; i < 3; i++){
        c.GetInput();
        c.FindArea();
        c.PrintValue();
    }

    c.CalSum();
    c.PrintSum();

}