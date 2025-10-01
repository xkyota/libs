#include "array_utils.h"
#include "utils.h" 

int main(void)
{ 
    int length = 10; 
    int array[length]; 
    int element = 3; 
    
    fill_array(array, length, element); 
    print_array(array, length); 

    return 0;
}