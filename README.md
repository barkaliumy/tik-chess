#include <stdio.h>
int main() {
    int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0;
    char oneplacefirst, oneplacesecond, oneplacethird;
    char twoplacefirst, twoplacesecond, twoplacethird; 
    char onedigite, onereplace;
    char twodigite, tworeplace;
    
    printf("WELCOME ! TO TIKCHESS");
   
    startgame:
    printf("\n______________________________________________________________________________________________________________________________");
    printf("\n*---------------------------*");
    printf("\n| Start placing your number |");
    printf("\n*---------------------------*");
    printf("\n\nj\tk\tl\nm\tn\to\np\tq\tr\n\n");
    printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d",a, b, c, d, e, f, g, h, i);
    printf("\n\n who want to go first ? \n(player 1) : ");
    scanf("%c",&oneplacefirst);
    //placing !
    switch (oneplacefirst) {
        case 'j': a=a+1; break;
        case 'k': b=b+1; break;
        case 'l': c=c+1; break;
        case 'm': d=d+1; break;
        case 'n': e=e+1; break;
        case 'o': f=f+1; break;
        case 'p': g=g+1; break;
        case 'q': h=h+1; break;
        case 'r': i=i+1; break;
    }
    printf("\n\nj\tk\tl\nm\tn\to\np\tq\tr\n\n");
    printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d",a, b, c, d, e, f, g, h, i);
    printf("\n\n(palyer 2) : ");
    scanf(" %c",&twoplacefirst);
    switch (twoplacefirst) {
        case 'j': a=a+2; break;
        case 'k': b=b+2; break;
        case 'l': c=c+2; break;
        case 'm': d=d+2; break;
        case 'n': e=e+2; break;
        case 'o': f=f+2; break;
        case 'p': g=g+2; break;
        case 'q': h=h+2; break;
        case 'r': i=i+2; break;
    }
    printf("\n\nj\tk\tl\nm\tn\to\np\tq\tr\n\n");
    printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d",a, b, c, d, e, f, g, h, i);
    printf("\n\n(palyer 1) : ");
    scanf(" %c",&oneplacesecond);
    switch (oneplacesecond) {
        case 'j': a=a+1; break;
        case 'k': b=b+1; break;
        case 'l': c=c+1; break;
        case 'm': d=d+1; break;
        case 'n': e=e+1; break;
        case 'o': f=f+1; break;
        case 'p': g=g+1; break;
        case 'q': h=h+1; break;
        case 'r': i=i+1; break;
    }
    printf("\n\nj\tk\tl\nm\tn\to\np\tq\tr\n\n");
    printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d",a, b, c, d, e, f, g, h, i);
    printf("\n\n(palyer 2) : ");
    scanf(" %c",&twoplacesecond);
    switch (twoplacesecond) {
        case 'j': a=a+2; break;
        case 'k': b=b+2; break;
        case 'l': c=c+2; break;
        case 'm': d=d+2; break;
        case 'n': e=e+2; break;
        case 'o': f=f+2; break;
        case 'p': g=g+2; break;
        case 'q': h=h+2; break;
        case 'r': i=i+2; break;
    }
    printf("\n\nj\tk\tl\nm\tn\to\np\tq\tr\n\n");
    printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d",a, b, c, d, e, f, g, h, i);
    printf("\n\n(palyer 1) : ");
    scanf(" %c",&oneplacethird);
    switch (oneplacethird) {
        case 'j': a=a+1; break;
        case 'k': b=b+1; break;
        case 'l': c=c+1; break;
        case 'm': d=d+1; break;
        case 'n': e=e+1; break;
        case 'o': f=f+1; break;
        case 'p': g=g+1; break;
        case 'q': h=h+1; break;
        case 'r': i=i+1; break;
    }
    printf("\n\nj\tk\tl\nm\tn\to\np\tq\tr\n\n");
    printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d",a, b, c, d, e, f, g, h, i);
    printf("\n\n(palyer 2) : ");
    scanf(" %c",&twoplacethird);
    switch (twoplacethird) {
        case 'j': a=a+2; break;
        case 'k': b=b+2; break;
        case 'l': c=c+2; break;
        case 'm': d=d+2; break;
        case 'n': e=e+2; break;
        case 'o': f=f+2; break;
        case 'p': g=g+2; break;
        case 'q': h=h+2; break;
        case 'r': i=i+2; break;
    }
    if (a>=3 || b>=3 || c>=3 || d>=3 || e>=3 || f>=3 || g>=3 || h>=3 || i>=3) {
        printf("\n*--------------------------------------------*");
        printf("\n| Do not enter your (1 ro 2) in same place ! |");
        printf("\n*--------------------------------------------*");
        a=a-a;
        b=b-b;
        c=c-c;
        d=d-d;
        e=e-e;
        f=f-f;
        g=g-g;
        h=h-h;
        i=i-i;
        goto startgame;
    }printf("\n*-----------------*");
     printf("\n| Now move them ! |");
     printf("\n*-----------------*");
     printf("\n\nj\tk\tl\nm\tn\to\np\tq\tr\n\n");
     printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d",a, b, c, d, e, f, g, h, i);
     printf("\nmove you number buy replacing the zreo where you want to put.");
     printf("\nwhich 1 do you want to move and what diration do you want to move ?");
     printf("\n(player 1) : ");
     scanf(" %c %c", &onedigite, &onereplace);
     //moving !
    if (onedigite=='j' && a==1  ) {
        if (onereplace=='k' && b==0) {
            b=b+1;
            a=a-1;
            
        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            a=a-1;
        
        }
        else if(onereplace=='m' && d==0) {
            d=d+1;
            a=a-1;
            
        }
    }
    else if (onedigite=='k' && b==0) {
        if (onereplace=='j' && a==0) {
            a=a+1;
            b=b-1;
            
        }
        else if (onereplace=='l' && c==0) {
            c=c+1;
            b=b-1;
            
        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            b=b-1;
            
        }
    }
    else if (onedigite=='l' && c==1) {
        if (onereplace=='k' && b==0) {
            b=b+1;
            c=c-1;
            
        }
        else if (onereplace=='o' && f==0) {
            f=f+1;
            c=c-1;
            
        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            c=c-1;
            ;
        }
    }
    else if (onedigite=='m' && d==1) {
        if (onereplace=='j' && a==0) {
            a=a+1;
            d=d-1;
           
        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            d=d-1;
            
        }
        else if (onereplace=='p' && g==0) {
            g=g+1;
            d=d-1;
            
        }
    }
    else if (onedigite=='n' && e==1) {
        if (onereplace=='j' && a==0) {
            a=a+1;
            e=e-1;
            
        }
        else if (onereplace=='k' && b==0) {
            b=b+1;
            e=e-1;
            
        }
        else if (onereplace=='l' && c==0) {
            c=c+1;
            e=e-1;
            
        }
        else if (onereplace=='m' && d==0) {
            d=d+1;
            e=e-1;
           
        }
        else if (onedigite=='o' && f==0) {
            f=f+1;
            e=e-1;
            
        }
        else if (onereplace=='r' && i==0) {
            i=i+1;
            e=e-1;
           
        }
        else if (onereplace=='q' && h==0) {
            h=h+1;
            e=e-1;
            
        }
        else if (onereplace=='p' && g==0) {
            g=g+1;
            e=e-1;
            
        }
    }
    else if (onedigite=='o' && f==1) {
        if (onereplace=='l' && c==0) {
            c=c+1;
            f=f-1;
            
        }
        else if (onereplace=='r' && i==0) {
            i=i+1;
            f=f-1;
            
        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            f=f-1;
            
        }
    }
    else if (onedigite=='p' && g==1) {
        if (onereplace=='m' && d==0) {
            d=d+1;
            g=g-1;
            
        }
        else if (onereplace=='q' && h==0) {
            h=h+1;
            g=g-1;
            
        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            g=g-1;
            
        }
    }
    else if (onedigite=='q' && h==1) {
        if (onereplace=='n' && e==0) {
            e=e+1;
            h=h-1;
            
        }
        else if (onereplace=='p' && g==0) {
            g=g+1;
            h=h-1;
            
        }
        else if (onereplace=='r' && i==0) {
            i==i+1;
            h=h-1;
            
        }
    }
    else if (onedigite=='r' && i==1) {
        if (onereplace=='o' && f==0) {
            f=f+1;
            i=i-1;
            
        }
        else if (onereplace=='q' && h==0) {
            h=h+1;
            i=i-1;
            
        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            i=i-1;
            
        }
    }
    

return 0;
}
