#include <iostream>

using namespace std;

int main()
{
    int n;
    std::cout << "Enter No of rows" << std::endl;
    std::cin >> n;
    int i=1;
    int k =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<k<<" ";
            j++;
            k++;
        
        }
        cout<<"\n";
        i++;
    }
    return 0;
}
