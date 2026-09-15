#include <iostream>
using namespace std;

int main() {
    char str[20];
    cout << "Enter charecter array : ";
    cin.getline(str , 20);

    for(char ch : str){
        cout << ch << " ";
    }
    cout << str << " ";
    cout << endl;
    return 0;
}