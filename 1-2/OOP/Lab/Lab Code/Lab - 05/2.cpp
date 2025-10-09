#include <bits/stdc++.h>
using namespace std;

class Circuit {
private:
    double real, img;
public:
    Circuit(double x, double y) {
        real = x ,img = y;
    }
    Circuit inverse(){
        double denom = real * real + img * img;
        return Circuit(real / denom, -img / denom);
    }
    Circuit operator+(const Circuit &other){
        return Circuit(real + other.real, img + other.img);
    }
    Circuit operator/( Circuit &other){
        double denom = other.real * other.real + other.img * other.img;
        double r = (real * other.real + img * other.img) / denom;
        double i = (img * other.real - real * other.img) / denom;
        return Circuit(r, i);
    }
    void show(){
        if (img >= 0) cout << real << " + j" << img << '\n';
        else cout << real << " - j" << -img << '\n';
    }
};

int main() {
    Circuit z1(3.0, 4.0), z2(4.0, -3.0), z3(0.0, 6.0), v(100.0, 50.0);
    Circuit z_eq = z1.inverse() + z2.inverse() + z3.inverse();
    Circuit z_total = z_eq.inverse();
    Circuit current = v / z_total;

    cout << "The current is "; current.show();
}
