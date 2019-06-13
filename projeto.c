#include<stdio.h>

int soma(int a,int b){
	int soma_num = a + b;
	return soma_num;
}

int sub(int a,int b){
	int sub = a - b;
	return sub;
}

int mult(int a,int b){
	int mult = a * b;
	return mult;
}

int div(int a,int b){
	int div = a / b;
	return div;
	}


int main(){
	
	printf("Soma dos dois numeros: %d\n",soma(5,5));
	printf("Subtracao dos dois numeros: %d\n",sub(5,2));
	printf("Multiplicação dos dois numeros: %d\n",mult(5,4));
	printf("Divisao dos dois numeros: %d\n",div(10,2));
	
	return 0;
}

