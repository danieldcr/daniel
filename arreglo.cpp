#include<iostream>
using namespace std;
int main ()
{
int arreglo[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
 
cout<<"\nArreglo de 4 x 5:"<<endl;
for(int i=0;i<4;i++){ 
for(int j=0;j<5;j++) 
  cout<<arreglo[i][j]<<"\t";
    cout<<endl;
}
system ("pause");
return 0;
}
