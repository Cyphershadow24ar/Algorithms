#include<iostream>
using namespace std;

int main(){
    int even[8] ={0,2,4,6,8,10,12,18};
    int odd[8] ={1,3,7,9,11,13,15,19};

    int evenindex = binarysearch(even, 8,12);
    cout<<" INdex od 12 is " << evenindex <<endl;
    int oddindex = binarysearch(odd, 8,15);
    cout<<" INdex od 12 is " << oddindex <<endl;



}
