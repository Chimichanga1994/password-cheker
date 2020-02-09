//challenge: 
//build a program that checks when user enters a password for an uppercase letter, a number, and a dollar sign.
//if it does output that password is good to go.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

	char passwordInput[50];
	int digitCount = 0;
	int upperCharacterCount = 0;
	int dollarCount = 0;
	int passwordClearance = 0;



	do{
		printf("Enter you password:\n");
		scanf(" %s", passwordInput);

		

		for (int i = 0; i < strlen(passwordInput); i++) {
			

			if( isdigit(passwordInput[i]) ) {
				digitCount++;
				//continue;
			}else if( isupper(passwordInput[i]) ) {
				upperCharacterCount++;
				//continue;
			}else if( passwordInput[i] == '$' ) {
				dollarCount++;
				//continue;
			}
		}

		if( (dollarCount == 0) || (upperCharacterCount == 0) || (digitCount == 0) ){
			printf("Your entered password does not contain required parameters. Work on it!\n");
		}else{
			printf("Your entered password is good to go!\n");
			passwordClearance = 1;
		}

	}while(strcmp(passwordInput, "quit") != 0 && passwordClearance != 1);





	return 0;


}




