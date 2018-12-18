#include<bits/stdc++.h>

using namespace std; 

#define ll long long

#define ss string

int main(){ 

ss a,b;

cin>>a>>b;

ll m=a.length(),n=b.length(),i,j,L[m+1][n+1]; 

for(i=0;i<=m;i++){

   for(j=0;j<=n;j++){
 
     if(i==0||j==0)
 
	L[i][j]=0;
 
     else if(a[i-1]==b[j-1])
 
	L[i][j]+=1; 

      else

	L[i][j]=max(L[i-1][j],L[i][j-1]);

   }
 
}

ll index = L[m][n];  

ss final;

i=m;j=n; 

while(i>0&&j>0){

   if(a[i-1]==b[j-1]){
 
	final+=a[i-1];

	i--; j--;
        index--;

    } 

 else if(L[i-1][j]>L[i][j-1])
 
	i--; 
   
 else

	j--;

}

ll len=final.length();

cout<<"The longest common subsequence is: ";

for(i=0;i<len;i++)

  cout<<final[len-1-i];

cout<<endl;

return 0;
 
} 
