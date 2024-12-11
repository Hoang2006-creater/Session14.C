#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	char reversed[100];
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str),stdin);
	
	int doDai = strlen(str);
	if (str[doDai - 1] == '\n'){
		str[doDai - 1] = '\0'; 
		doDai--;
	} 
	for(int i =0;i<doDai;i++){
		reversed[i] = str[doDai - i - 1];
	}
	reversed[doDai]= '\0';
	printf("chuoi dao nguoc: %s\n",reversed);
	return 0;
}
