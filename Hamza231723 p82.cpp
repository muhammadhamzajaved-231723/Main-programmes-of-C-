#include <iostream>
using namespace std;
int main() {
    int n,oddsum=0,evensum=0;
    cout<<"Enter a positive number :";
    cin>>n;
    while(n>=0)
    {
        if (n%2==0)
        evensum=evensum+n;
        else
        oddsum=oddsum+n;
        n--;
    }
    cout<<"The sum of even digit is :"<<evensum<<endl;
    cout<<"The sum of odd digit is :"<<oddsum;
    return 0;
}
