#include <iostream>

using namespace std;

int main()
{ 
    
    int N;
    std::cout << "enter the rows" << std::endl;
    std::cin >> N;
    int a=0;
    int i=1;
    while(i<=N){
        int j=0;
        while(j<=N){
            cout<<i;
            j++;
        }
        i++;
        cout<<"\n";
    }
    return 0;
}
