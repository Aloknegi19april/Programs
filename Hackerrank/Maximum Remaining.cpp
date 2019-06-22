#include <iostream>
using namespace std;
int main(){
   int n;
   long long int num[100000], largest, second;
   
   cin>>n;
   for(int i=0; i<n; i++){
		cin>>num[i];
   }
   if(num[0]<num[1]){ 
      largest = num[1];
      second = num[0];
   }
   else{ 
      largest = num[0];
      second = num[1];
   }
   for (int i = 2; i< n ; i ++) {
      
      if (num[i] > largest) {
         second = largest;
         largest = num[i];
      }
      else if (num[i] > second && num[i] != largest) {
         second = num[i];
      }
   }
   int c;
   c=second%largest;
   cout<<c;
   return 0;
}
