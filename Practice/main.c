//
//  main.c
//  Practice
//
//  Created by Alex on 2015-01-25.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#include <stdio.h>

void fizzBuzz(int n) {
    int i;
    for(i=1; i < n; i++){
        if(i%5 == 0 && i%3 == 0) {
            printf("FIZZBUZZ\n");
        }
        
        else if(i%5 == 0) printf("Fizz\n");
            
        else if(i%3 == 0) printf("Buzz\n");
        
        else{
            printf("%d\n", i);
        }
    }
}

int main(int argc, const char * argv[])
{
    fizzBuzz(100);
}

