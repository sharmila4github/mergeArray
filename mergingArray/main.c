//
//  main.c
//  mergingArray
//
//  Created by Felix ITs 08 on 31/10/18.
//  Copyright © 2018 Felix. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int m,n,k,i,j;
    
    int a[] = { 3, 8, 9,12};
    int b[] = { 1,6,12,78,100};
    m=4;
    n=5;
    k=0;
    int c[m+n];
    i=0;
    j=0;
    while(i < m  && j < n )
    {
        if(a[i] <=  b[j] )
        {
            c[k]=a[i];
            i++;
        }
        else if (b[j] < a[i])
        {
            c[k] = b[j];
            j++;
        }
        
        k++;
    }
    if (i == m)
    {
        while(j < n)
        {

        c[k] = b[j];
        k++;

        j++;
        }
    }
    else if (j == n)
    {
        while(i < m)
        {

        c[k]=a[i];
            k++;

        i++;
        }
    }

    
    for ( k=0;k < m+n;k++)
    {
        printf("%d\t",c[k]);
    }
    
    
    return 0;
}
