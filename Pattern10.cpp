// A B C
// D E F
// G H I for n=3
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=i;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+count-1;
            cout<<ch<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}