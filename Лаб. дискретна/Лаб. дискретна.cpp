#include <iostream>
using namespace std;
int main() {

    float x, y, z;
    cout << "Enter x:\n ";
    cin >> x;

	cout << "Enter y:\n ";
    cin >> y;

    cout << "Enter z:\n ";
    cin >> z;

	bool op1, op2, op3; 
    op1 = y && z;
       
    
        if (x == 1 && y == 0)
            op2 = false;
		else op2 = true;
        if (op2==true)
            op3 = true;
		else op3 = true;
        
		cout << op1 << " " << op2 << " " << op3 << endl;    


    return 0;

}
