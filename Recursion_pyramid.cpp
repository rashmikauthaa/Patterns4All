#include<iostream>
using namespace std;

void printSpace(int spaces){
    for(int i=0; i<spaces; i++){
        cout<<" ";
    }
}

void printStars(int stars){
    for(int i=0; i<stars; i++){
        cout<<"*";
    }
    cout<<endl;
}

void printPyramid(int totalRows, int currRow){
    if(currRow == totalRows) return; // base case
    
    printSpace(totalRows-currRow-1); // spaces
    printStars(2*currRow+1); // stars
    
    printPyramid(totalRows, currRow+1);
}

int main(){
    int N;
    cin>>N;
    
    printPyramid(N, 0);
    return 0;
}