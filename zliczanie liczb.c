//
//  main.c
//  zadanie
//
//  Created by Krzysztof Jarek on 30.11.2017.
//  Copyright © 2017 Krzysztof Jarek. All rights reserved.
//

#include <stdio.h>

int main (void) {
    int s = 0;
    
    for ( int i = 1; i < 101; i++) {
        if (i % 2 == 0){
            if (i % 5 != 0){
                if (i % 4 != 0 ){
                    printf ( "%d ", i);
                    s = s + 1;
                }
                
            }
        }
    }
    
    printf ("\n\nZnaleziono %d liczb. \n ",s);
    
    return 0;
}

