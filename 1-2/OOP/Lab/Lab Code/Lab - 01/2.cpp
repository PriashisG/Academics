#include <bits/stdc++.h>
using namespace std;

class Triangle{
    int edge1;
    int edge2;
    int edge3;
    float area;
    bool isOk;

    public :
        void GetInput(){
            int a, b, c;
            cin >> a >> b >> c;

            edge1 = a;
            edge2 = b;
            edge3 = c;
        }

        void CanForm(){
            if ((edge1 + edge2 > edge3) || (edge2 + edge3 > edge1) || (edge1 + edge3 > edge2)) isOk = true;
            else isOk = false;

            PrintValue("decision");
        }

        void FindArea(){
            float s = (edge1 + edge2 + edge3) / 2;

            float x = sqrt(s * (s - edge1) * (s - edge2) * (s - edge3));
            area = x;
        }

        void PrintValue(string s){
            if (s == "area"){
                cout << "Area : " << area << '\n';
            }
            else if (s == "decision"){
                if (isOk) cout << "It can form triangle.\n";
                else cout << "It can't form triangle.\n";
            }
        }
};

int main(void){
    Triangle t;

    t.GetInput();
    t.FindArea();
    t.CanForm();
    t.PrintValue("area");
}