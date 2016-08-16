#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>



void
cutWord(char *word)
{
	



}


int
isPalindrome(char *palidrome)
{
	bool me = true;
	int i =2;

	if(strlen(palidrome) <= 1)
	{
		return me;
	}
	if(palidrome[0] != palidrome[strlen(palidrome)-1])
	{
		return !me;
	}
		
	
	return isPalindrome(palidrome);


}


int
main(void)
{
	bool answer;
	answer = isPalindrome("rotor");
	printf("%d\n",answer);
	return 0;
}
