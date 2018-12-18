#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
int main(){
ss a,b;
cin>>a>>b;  // a-Sub-String to be matched b-String from which the sub-string a is to matched
ll len1=a.length(),len2=b.length(),i,j;   //len1=length of String a    len2=length of String b
for(i=0;i<len2;i++){
  ll count=0;
  if(b[i]==a[0])
  for(j=0;j<len1;j++){
    if(b[i+j]==a[j])
       count++;
   }
  if(count==len1){
     cout<<"Match found on index "<<i <<endl;
     return 0;
  }
}
cout<<"Match not found"<<endl;
return 0;
}