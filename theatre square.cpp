#include<iostream>
#include<math.h>
 using namespace std;
 
 int main()
 {
	 long long int n,m,a,first_line,repetition;
	 
	 cin>>n>>m>>a;
	 
	 first_line=n/a;
	 if(n%a!=0)
		 first_line++;
	 repetition=m/a;
	 if(m%a!=0)
		 repetition++;
	 long long int result=first_line*repetition;
	 cout<<result;
	 
	 return 0;
 }