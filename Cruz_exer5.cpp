#include <iostream>
using namespace std;

void linechar() {
    for(int i = 1; i <= 20; i++) { 
        cout << "*";
    }
    cout << endl;
    cout << endl;
    
    for(int b = 1; b <= 20; b++) { 
        cout << "@";
    }
    cout << endl;
    cout << endl;
    
    for(int a = 1; a <= 10; a++) { 
        cout << "*";
    }
    cout << endl;
    cout << endl;
    
    for(int a = 1; a <= 15; a++) { 
        cout << "#";
    }
    cout << endl;
    cout << endl;
}

int main()
{
    linechar();   
    return 0;
}

