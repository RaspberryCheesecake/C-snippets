#include <stdio.h>

int main() {
    int a = 6;
    int* p;  //pointer to int
    p = &a;  //it's now pointing at a
    printf("Pointer address: %d \n", p);
    printf("Value at address: %d \n", *p); // de-referencing
    
    
    p = p+1;  // increment the pointer
    printf("Pointer address now: %d \n", p); 
    //notice it incremented by 4 bytes since it's an int pointer
    //a char pointer would only increment by 1 byte
    printf("Value at address now: %d \n", *p); // some garbage value
    
}
