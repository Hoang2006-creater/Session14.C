#include<stdio.h>

int main(){
	char str[100],canTim;
	int count = 0;
	printf("Nhap chuoi: ");
	fgets(str,sizeof(str),stdin);
	printf("Nhap ky tu can tim: ");
	scanf("%c",&canTim);
	for(int i = 0;str[i] != '0';i++){
		if(str[i] == canTim){
			count ++;
		}
	}
	printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n ",canTim,count);
	return 0;
}
