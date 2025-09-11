#include <iostream>
using namespace std;

---- while loops ----

int main() {
    int n = 50;
    int count = 1;
    while (count <= n ){
        cout << count << " " ;
        count++;
    }
    cout << endl;
    return 0;
}

------ for loop ------

int main() {
    int n = 5;
    int sum = 0;

    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << "sum = " << sum <<  endl;
    return 0;
}

----- same problem solve using the while loop -----

int main(){
    int n = 5;
    int sum = 0;
    int i = 1;

    while(i<=n){
        sum += i;
        i++;
    }
    cout << "sum = " << sum << endl;
    return 0;

}

======== problem with for loop ===========

int main(){
    int n = 10;
    // int i = 1;
    int sum = 0;
    int sumeven = 0;

    for (int i=1; i<=n; i++){
        if ( i%2 != 0){
            sum += i;
        }
        else {
            sumeven += i;
        }
    }
    cout << "sum of odd number is = " << sum << endl;
    cout << "sum of even number is = " << sumeven << endl;
    return 0;
}

========= same problem using while loop =======

int main(){
    int i = 1;
    int n = 50;
    int evensum = 0;
    int oddsum = 0;

    while ( i<=n ){
        if(i % 2 != 0 ){
            oddsum += i;
        }
        else {
            evensum += i;
        }
        i++;
    }
    cout << "Sum of the odd number is = " << oddsum << endl;
    cout << "Sum of the even number is = " << evensum << endl;
    return 0;

 }

======== New Problems using for loops =========

int main(){
    int x = 23;
    int n = (x-1);
    int i = 2;
    while(i<=n){
        if (x%i == 0){
            cout << "  This is a not Prime Number..." << endl;
            // i++;
            // break;
            if(x%2 != 0){
                cout << "this is prime number" << endl;
            }
            // break;
        }
        i++;
    }
    cout << n << endl;
    return 0;

}

========== the star patten using nested loop ======

int main(){
    int n = 4;

    for (int i = 1; i<=n; i++){
        int m = 4;
        for (int j = 1; j<=m; j++){
            cout << "*" ;
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
