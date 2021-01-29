#include <stdio.h>
int main(){
    
    int h1 = 0, m1 = 0, s1 = 0;
    int h2 = 0, m2 = 0, s2 = 0;
    
    scanf("%d %d %d", &h1, &m1, &s1);
    scanf("%d %d %d", &h2, &m2, &s2);
    
    int s3 = s2 - s1;
    
    if(s3 < 0)
    {    m1++;
        s3 = s3 + 60;
    }
    
    int m3 = m2 - m1;
    if(m3 < 0)
    {
        h1++;
        m3 = m3 + 60;
    }
    
    int h3 = h2 - h1;
    if(h3 < 0)
    {   
        h3 = h3 + 24;
    }
    printf("%02d %02d %02d\n", h3, m3, s3);
    
    return 0;
}