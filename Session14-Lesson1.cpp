#include<stdio.h>
#include<string.h>

int main() {
	// Khai bao mang
	char string[100];
	printf("Moi ban nhap mot chuoi bat ky: ");
	fgets(string, sizeof(string),stdin);
	
	// Xoa ky tu xuong dong 
	int doDai = strlen(string);
	if (string[doDai - 1] == '\n'){
		string[doDai - 1] = '\0'; 
		doDai--;
	} 
	 printf("Chuoi vua nhap: \"%s\"\n", string);
    printf("Do dai cua chuoi: %d\n", doDai);
 return 0;
}
