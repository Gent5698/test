#include <iostream>
#include <iomanip>
using namespace std;




int main()
{
  unsigned long long f[47];
  f[0]=0;
  f[1]=1;
  for(int i=2;i<47;i++){
  	  f[i]=f[i-1]+f[i-2];
  }
  for(int i=0;i<47;i++){
  	  cout <<"f["<<i<<"]="<<f[i]<<endl;
  }
   
  //cout << month(28, 6);	
	
}
