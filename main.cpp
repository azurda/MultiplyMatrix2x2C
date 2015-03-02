#include<iostream>
using namespace std;
int main() 
{
	int a[4][4],b[4][4],c[4][4];
	int i,j,k,l;
	std::cout<<"Enter the value of the matrix a:\n";
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			std::cin>>a[i][j];
		}
	}
	std::cout<<endl;
	std::cout<<"Enter the value of the matrix b:\n";
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			std::cin>>b[i][j];
		}
	}
 
	std::cout<<"The multiplied value is:\n";
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=0;
			for(k=0;k<2;k++){
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			std::cout<<c[i][j]<<"  ";
		}
		std::cout<<"\n";
	}
	return 0;
}
