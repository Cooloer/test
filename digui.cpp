#include <iostream>
#include <cmath>
using namespace std;

int sumOfSquare(int n,int sum1=0)
{
	if(n==0) return sum1;
    return sumOfSquare(n-1,(sum1+(n)*(n)));

}
int main()
{
	int n,s=0,i;
	cout<<"input n:";
	cin>>n;
	s=sumOfSquare(n);
	cout<<"result="<<s;
	return 0;
}
