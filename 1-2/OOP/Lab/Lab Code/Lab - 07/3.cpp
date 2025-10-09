#include<bits/stdc++.h>
using namespace std;

class Menu{
private :
    vector<int> v;
public :
    void Insert(){
        int x;
        cout << "Enter a value to push : ";
        cin >> x;
        v.push_back(x);
    }
    void Delete(){
        int ind;
        cout << "Enter the index of the value : ";
        cin >> ind;
        if (ind < 0 || ind >= v.size()) cout << "Invaild Index.\n";
        else{
            v.erase(v.begin() + ind);
            cout << "The value of " << ind << "-th index is deleted.\n";
        }
    }
    void Update(){
        int ind, value;
        cout << "Enter the index and the value : ";
        cin >> ind >> value;
        if (ind < 0 || ind >= v.size()) cout << "Invaild Index.\n";
        else v[ind] = value;
    }
    void Search(){
        int value;
        cout << "Enter the value : ";
        cin >> value;
        auto it = find(v.begin(), v.end(), value);
        if (it != v.end()) cout << "The index of the " << value << " is " << it - v.begin() + 1 << ".\n";
        else cout << "The value is not found.\n";
    }
};

int main(void){
    Menu mu;
    
    int option;
    while (4){
        cout << "\t*** Vector ***\n";
        cout << "1. Insert.\n";
        cout << "2. Delete.\n";
        cout << "3. Update.\n";
        cout << "4. Search.\n";
        cout << "5. Exit.\n";

        cout << "\nEnter a option = ";
        cin >> option;
        while (option < 1 || option > 5){
            cout << "Invalied option.\n";
            cout << "\nEnter a option = ";
            cin >> option;
        }

        if (option == 1) mu.Insert();
        else if (option == 2) mu.Delete();
        else if (option == 3) mu.Update();
        else if (option == 4) mu.Search();
        else if (option == 5){ 
            cout << "\nThe menu is closed.\n";
            break; 
        }
        cout << '\n';
    }
}