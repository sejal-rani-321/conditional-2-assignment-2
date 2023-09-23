#include<iostream>
using namespace std;
                    //  510 ka note = 500 note + 10 ka note
int main(){
    int Amount = 510;
    int n500, n10, n20;
    n500 = n10 = n20 = 0;

    switch (Amount >= 100)
    {
    case 1:
        n500 = Amount/500;
        Amount -= n500 * 500; 
        break;
    }
    switch (Amount >= 10)
    {
    case 1:
        n10 = Amount/10;
        Amount -= n10 * 10; 
        break;
    }
    switch (Amount >= 20)
    {
    case 1:
        n20 = Amount/20;
        Amount -= n20 * 20; 
        break;
    }    
    
    cout << " 500 = " << n500 << endl;
    cout << " 10 = " << n10 << endl;
    cout << " 20 = " << n20 << endl;

}