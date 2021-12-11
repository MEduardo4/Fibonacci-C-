#include<iostream>

using namespace std; 

int fib(int n){
		if(n == 1 || n == 2)
			return 1;
			
		return fib(n - 1) + fib(n - 2);	
}

int main(int argc, char *argv[]){
	int v;
	
	printf("Digite a posição que deseja consultar: ");
	scanf("%d", &v);


	cout << fib(v) << endl;
		return 0;
}
