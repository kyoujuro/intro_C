//
//  angle.c
//  C
//
//  Created by shakemaru on 2020/03/22.
//  Copyright © 2020 shake. All rights reserved.
//

#include "angle.h"
#include <stdio.h>
#include <math.h>

//コンパイラに命令
#define PI 3.14

void main(){
    int angle;
    double rad;
    printf("角度を入力" );
    scanf("%d",&angle);
    
    rad = PI * (double)angle/180.0;
    printf("sin(%d) = %f\n",angle, sin(rad));
    printf("cos(%d) = %f\n",angle, cos(rad));
    printf("tan(%d) = %f\n",angle, tan(rad));
}
