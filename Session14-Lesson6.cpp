#include<stdio.h>
int main(){
	char str[]="This is my phone";
	int letterCount = 0;
		for(int i = 0;str[i] != '0';i++){
			if((str[i]>= 'a'&& str[i]<= 'z')||(str[i]>= 'A'&& str[i]<= 'Z')){
			letterCount++;		
   }
}
printf("So luong ky tu la chu cai trong chuoi: %d\n", letterCount);

return 0;
}

