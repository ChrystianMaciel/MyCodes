#include <stdio.h>
int main(){
    
    int c1;
    int l1;
    int c2;
    int l2;
    
    scanf("%d %d %d %d", &c1, &l1, &c2, &l2);
    
    if(c1 * l1 > c2 * l2)
    {
        printf("%d\n", c1 * l1);
    }
    else
    {
        printf("%d\n", c2 * l2);
    }
    return 0;
}