// gcc -g -fno-stack-protector -z execstack 29_stack_redirect.c -o 29_stack_redirect.out
// gcc -g -m32 -fno-stack-protector -z execstack 29_stack_redirect.c -o 29_stack_redirect.out

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lockOutUser(void)
{
	// If the user enters in the wrong password, they must be a hacker. Lock the account.
	printf("You entered the wrong password. Account locked out!\n");
}

void giveUserRoot(void)
{
	// If we're here, the user must be legit.  Full admin privliges.
	printf("Root access granted!\n");
}

int passCheck(void)
{
	char buff[16]; // Passwords can be up to 15 charactesr
	int validPass = 0;

	// Prompt the user for a password and store it in "buff"
	printf("Enter the password : \n");
	gets(buff);

	// Password checking routine
	if(strcmp(buff, "gen_cyber=1337"))
	{
		// Incorrect
		printf ("Wrong Password. \n");
		validPass = 0;    
	}
	else
	{
		// Correct
		printf ("Correct Password! \n");
		validPass = 1;
	}

	return validPass;
}

int main (void)
{
	if (passCheck() == 1)
		giveUserRoot();
	else
		lockOutUser();
	
	exit(0);
}
