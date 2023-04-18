#include <stdio.h>
#include <string.h>
int main() {
	char str[20] = "1,2,3,4,5";
	printf("Current String : %s\n" , str);
	printf("New String : ");
	int i=0;
	while(str[i]!='\0') {
		if(isdigit(str[i])) {
			printf("%d \n" ,str[i]-'0' );
		}
		i++;
	}
	return 0;
}