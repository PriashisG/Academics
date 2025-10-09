#include<bits/stdc++.h>
using namespace std;

class Impedance{
    int real, img;

public :
    Impedance (int x, int y) {
        real = x;
        img = y;
    }

    Impedance (){}

    void show(){
        cout << real;
        if (img > 0) cout << " + " << img << "j\n";
        else if (img < 0) cout << "  " << img << "j\n";
    } 

    Impedance operator + (Impedance &p){
        Impedance temp(p.real, p.img);
        temp.real += this->real;
        temp.img += this->img;

        return temp;
    }
    
    Impedance operator - (Impedance &p){
        return Impedance(this->real - p.real, this->img - p.real);
    }

    Impedance operator * (Impedance &p){
        return Impedance(this->real * p.real, this->img * p.real);
    }
};

int main(void){
    Impedance z1(2, 3), z2(3, 6), z;
    cout << "z1 = "; z1.show();
    cout << "z2 = "; z2.show();

    z = z1 * z2;
    cout << "z = "; z.show();

}