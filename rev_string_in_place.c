#include <stdio.h>

void rev_string(char* str){
	char* counter = str;
	int length = 0;
	// Find out length of string (C strings are NULL terminated
	// which is represented by char '\0' - not NULL itself which is a pointer thing!
	while (*counter != '\0'){
		counter++;
		length++;
	}
	printf("Length is %i\n", length);
	counter--; // Don't fall off the end of the string
	
	// Now start switching chars around until the pointers reach middle
	while((counter - str) >= 1){
		char temp = *str;
		*str = *counter;
		*counter = temp;
		counter--;
		str++;
	}
	// No need for a return value, it directly acts on the string
}



int main() {
	printf("Let's try this\n");
	char example[] = "A man, a plan, a canal: Panama";  // Don't just do char* = example -
	// that gives a 'string literal' that can't be modified.
	printf("First it is %s \n", example);
	rev_string(example);
	printf("Next it is %s \n", example);

}
