//
//  main.c
//  07-3
//
//  Created by MacBook Air on 2023/10/19.
//

#include <stdio.h>

int inc(int counter);
int main(void) {
    int i=10;
    printf("함수 호출전 i=%d\n", i);
    inc(i);
    printf("함수 호출후 i=%d\n", i);
    
    return 0;
}
int inc(int counter)
{
    counter++;
    return counter;
}
