#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    
    for(int i=0; i<N; i++){
        // spaces
        for(int j=0; j<N-i-1; j++){
            cout<<" ";
        }
        
        // stars
        for(int k=0; k<2*i+1; k++){
            cout<<"*";
        }
        cout<<endl;
    };
    return 0;
}