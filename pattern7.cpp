#include <iostream>

using namespace std;

int main()
{
    int n;
    std::cout << "Enter No of rows" << std::endl;
    std::cin >> n;
    int i=1;

    while(i<=n){
        int j=i;
        while(j>0){
            cout<<j<<" ";
            j--;
            
        
        }
        cout<<"\n";
        i++;
    }
    return 0;
}
