//
//  str_practice.c
//  C
//
//  Created by shakemaru on 2020/03/22.
//  Copyright © 2020 shake. All rights reserved.
//

#include "str_practice.h"
#include <stdio.h>
#include <string.h>

void main(){
    
    char s[10];
    int len;
    
    strcpy(s, "ABC");
    printf("s=%s\n",s);
    
    strcat(s, "EDF");
    printf("s=%s\n",s);
    
    len = strlen(s);
    printf("文字列の長さ : %d\n", len);
           
}

