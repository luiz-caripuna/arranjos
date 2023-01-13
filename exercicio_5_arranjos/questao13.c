#include <stdio.h>

main(){
 char str[] = "hello", str_2[5];

 for(int i = 0; i < 5; i++){
    str_2[i] = str[4-i];

 }
printf("%s\n", str);
printf("%s",str_2);
    return 0;
}