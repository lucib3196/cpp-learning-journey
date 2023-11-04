// Learning C++
// Excersise

// #include<iostream>

// using namespace std;

// int main(){
//     cout <<"Hi There!"<<  endl;
//     return (0);
// }

#include <iostream>
#include <string>

using namespace std;

// int main(){
//     cout <<"Hello what is your name ?"<< endl;
//     string str;
//     cin >> str;
//     cout << "Hello ";
//     cout <<str;
//     cout <<" Nice to meet you!";
//     return (0);
// }

int main(){
    string str;
    cout << "Enter your name ";
    cin >> str;
    cout << "Nice to meet you, " <<str << "!" << endl;
}