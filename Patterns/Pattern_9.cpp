#include<bits/stdc++.h>
using namespace std;

void printPattern91(int n){
    for (int i = 0; i < n; i++){
        // space
        for (int j = 0; j < n-i-1; j++){
            cout << " ";
        }

        // star
        for (int j = 0; j < 2*i+1; j++){
            cout << "$";
        }

        // space
        for (int j = 0; j < n-i-1; j++){
            cout << " ";
        }

        cout << endl;
    }
}
void printPattern92(int n){
    for (int i = 0; i < n; i++){
        // space
        for (int j = 0; j < i; j++){
            cout << " ";
        }

        // star
        for (int j = 0; j < 2*n-(2*i+1); j++){
            cout << "$";
        }

        // space
        for (int j = 0; j < i; j++){
            cout << " ";
        }

        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t;i++){
        int n;
        cin >> n;
        printPattern91(n);
        printPattern92(n);
    }
}