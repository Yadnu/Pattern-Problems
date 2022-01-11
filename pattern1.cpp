#include <iostream>

using namespace std;

int main()
{ 
    
    int N;
    std::cout << "enter the rows" << std::endl;
    std::cin >> N;
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
