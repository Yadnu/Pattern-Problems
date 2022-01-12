#include <iostream>

using namespace std;
/*
A 
BC
CDE
DEFG
*/

int main()
{
    int row;
    std::cout << "enter the no of rows" << std::endl;
    cin>>row;
    int a=1;
    while(a<=row){
        int j=1;
        while(j<=a){
            char ch = a+j+'A'-2;
            cout<<ch<<" ";
        
            j++;
        }
        cout<<"\n";
        a++;
    }

    return 0;
}
