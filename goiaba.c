#include <stdio.h>
int main(){
    
    int cesta = 0;
    int banana = 0;
    int goiaba = 0;
    int manga = 0;

    scanf("%d %d %d %d", &cesta, &banana, &goiaba, &manga);
   
    int coleta = (banana + goiaba + manga);

    printf("%d\n", (coleta / cesta) + (coleta % cesta));
    
    return 0;
}

/*#include <stdio.h>
int main(){
    
    int cesta = 0;
    int banana = 0;
    int goiaba = 0;
    int manga = 0;

    scanf("%d %d %d %d", &cesta, &banana, &goiaba, &manga);
   
    int coleta = (banana + goiaba + manga);

    printf("%d\n", (coleta / cesta) + (coleta % cesta != 0 ? 1 : 0));
    
    return 0;
}*/