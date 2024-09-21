#include <iostream>
using namespace std;
int main() {

int x = 10;

int &y = x;
cout << "Giá trị của x: " << x << endl; 
cout << "Giá trị của y: " << y << endl;
y = 20;

cout << "Giá trị mới của x: " << x << endl;
cout << "Gia tri moi cu ay: " << y << endl;
x = 30;
cout << "Giá trị mới của x: " << x << endl;
cout << "Gia tri moi cu ay: " << y << endl;
return 0;
}