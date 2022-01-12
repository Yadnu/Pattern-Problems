#include <iostream>

using namespace std;

int main()
{
    int row;
    std::cout << "enter the no of rows" << std::endl;
    cin>>row;
    int a=1;
    while(a<=row){
        int j=1;
        while(j<=row){
            char ch = 'A'+a-1;
            cout<<ch<<" ";
        
            j++;
        }
        cout<<"\n";
        a++;
    }

    return 0;
}
