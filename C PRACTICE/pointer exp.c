#include <stdio.h>
void func(char []);//global declaration of a function 
int main(){
    char arr[]= "hello";
    printf("Before Function call : %s\n" , arr);
    func(arr);
    printf("After function call : %s", arr);
    return 0;
}
void func(char arr[])
{
    int i = 0;
    while(arr[i] != '\0')
    {
    
        arr[i] = arr[i] - 32;
         i++;
    }
    

}
