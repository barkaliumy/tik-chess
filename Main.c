#include <stdio.h>
int main() {
    int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0;
    char oneplacefirst, oneplacesecond, oneplacethird;
    char twoplacefirst, twoplacesecond, twoplacethird; 
    char onedigite, onereplace;
    char twodigite, tworeplace;
    char yesno;
    printf("\n");
    printf(" WELCOME ! TO TIKCHESS");
    printf("\n");
    printf("  _____________________________________________________________________\n");
    printf(" |                                                                     |\n");
    printf(" |  _______  _______                ___         ___  _____  ____       |\n");
    printf(" |  |  |  |     |     |   /        /      |  |  |     |     |          |\n");
    printf(" |     |        |     |__/  _____ |       |__|  |___  |___  |___       |\n");
    printf(" |     |        |     |  \\        |       |  |  |         |     |      |\n");
    printf(" |     |     _______  |    \\        \\___  |  |  |___  ____| ____|      |\n");
    printf(" |_____________________________________________________________________|\n");
    printf("\n");
    startgame:
        a=a-a;
        b=b-b;
        c=c-c;
        d=d-d;
        e=e-e;
        f=f-f;
        g=g-g;
        h=h-h;
        i=i-i;
    printf("\n\n");
    printf("\n     *---------------------------*");
    printf("\n     | Start placing your number |");
    printf("\n     *---------------------------*");
    printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("   *------------------------*");
    printf("\n   | Who want to go first ? |");
    printf("\n   *------------------------*");
    printf("\n   (player 1) : ");
    scanf(" %c",&oneplacefirst);
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
    printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

    printf("\n\n   (palyer 2) : ");
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
    printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

    printf("\n\n   (palyer 1) : ");
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
    printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

    printf("\n\n   (palyer 2) : ");
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
    printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

    printf("\n\n   (palyer 1) : ");
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
    printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

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
    }
    //1.game logic player 1.
    else if (a==1 && e==1 && i==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (g==1 && e==1 &&c==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (a==1 && d==1 && g==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (b==1 && e==1 && h==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (c==1 && f==1 && i==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (a==1 && b==1 && c==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (d==1 && e==1 && f==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (g==1 && h==1 && i==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    printf("\n\n   (palyer 2) : ");
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
    printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

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
    }
    //1.game logic player 2.
    else if (a==2 && e==2 && i==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (g==2 && e==2 &&c==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (a==2 && d==2 && g==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (b==2 && e==2 && h==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (c==2 && f==2 && i==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (a==2 && b==2 && c==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (d==2 && e==2 && f==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (g==2 && h==2 && i==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
     printf("\n        *-----------------*");
     printf("\n        | Now move them ! |");
     printf("\n        *-----------------*");
     printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");
     printf("\n*---------------------------------------------------------------------*");
     printf("\n| move you number buy replacing the zero where you want to put.       |");
     printf("\n| which 1 do you want to move and what diration do you want to move ? |");
     printf("\n*---------------------------------------------------------------------*");
     playerone:
     printf("\n   (player 1) : ");
     scanf(" %c %c", &onedigite, &onereplace);
     //moving of player 1. !
    if (onedigite=='j' && a==1  ) {
        if (onereplace=='k' && b==0) {
            b=b+1;
            a=a-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            a=a-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if(onereplace=='m' && d==0) {
            d=d+1;
            a=a-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (onedigite=='k' && b==1) {
        if (onereplace=='j' && a==0) {
            a=a+1;
            b=b-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='l' && c==0) {
            c=c+1;
            b=b-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            b=b-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (onedigite=='l' && c==1) {
        if (onereplace=='k' && b==0) {
            b=b+1;
            c=c-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='o' && f==0) {
            f=f+1;
            c=c-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            c=c-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (onedigite=='m' && d==1) {
        if (onereplace=='j' && a==0) {
            a=a+1;
            d=d-1;
           printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            d=d-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='p' && g==0) {
            g=g+1;
            d=d-1;
           printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (onedigite=='n' && e==1) {
        if (onereplace=='j' && a==0) {
            a=a+1;
            e=e-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='k' && b==0) {
            b=b+1;
            e=e-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='l' && c==0) {
            c=c+1;
            e=e-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='m' && d==0) {
            d=d+1;
            e=e-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='o' && f==0) {
            f=f+1;
            e=e-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='r' && i==0) {
            i=i+1;
            e=e-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='q' && h==0) {
            h=h+1;
            e=e-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='p' && g==0) {
            g=g+1;
            e=e-1;
           printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (onedigite=='o' && f==1) {
        if (onereplace=='l' && c==0) {
            c=c+1;
            f=f-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='r' && i==0) {
            i=i+1;
            f=f-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            f=f-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (onedigite=='p' && g==1) {
        if (onereplace=='m' && d==0) {
            d=d+1;
            g=g-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='q' && h==0) {
            h=h+1;
            g=g-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            g=g-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (onedigite=='q' && h==1) {
        if (onereplace=='n' && e==0) {
            e=e+1;
            h=h-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='p' && g==0) {
            g=g+1;
            h=h-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='r' && i==0) {
            i=i+1;
            h=h-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (onedigite=='r' && i==1) {
        if (onereplace=='o' && f==0) {
            f=f+1;
            i=i-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='q' && h==0) {
            h=h+1;
            i=i-1;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (onereplace=='n' && e==0) {
            e=e+1;
            i=i-1;
           printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    //win logic start.
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
    }
    //2.game logic player 1.
    else if (a==1 && e==1 && i==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (g==1 && e==1 &&c==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (a==1 && d==1 && g==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (b==1 && e==1 && h==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (c==1 && f==1 && i==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (a==1 && b==1 && c==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (d==1 && e==1 && f==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (g==1 && h==1 && i==1) {
        printf("\nplayer no.1 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    //win logic ends.
     printf("\n   (player 2) : ");
     scanf(" %c %c", &twodigite, &tworeplace);
     //moving of player 2. !
    if (twodigite=='j' && a==2 ) {
        if (tworeplace=='k' && b==0) {
            b=b+2;
            a=a-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='n' && e==0) {
            e=e+2;
            a=a-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if(tworeplace=='m' && d==0) {
            d=d+2;
            a=a-2;
           printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (twodigite=='k' && b==2) {
        if (tworeplace=='j' && a==0) {
            a=a+2;
            b=b-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if ( tworeplace=='l' && c==0) {
            c=c+2;
            b=b-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='n' && e==0) {
            e=e+2;
            b=b-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (twodigite=='l' && c==2) {
        if (tworeplace=='k' && b==0) {
            b=b+2;
            c=c-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='o' && f==0) {
            f=f+2;
            c=c-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='n' && e==0) {
            e=e+2;
            c=c-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (twodigite=='m' && d==2) {
        if (tworeplace=='j' && a==0) {
            a=a+2;
            d=d-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='n' && e==0) {
            e=e+2;
            d=d-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='p' && g==0) {
            g=g+2;
            d=d-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (twodigite=='n' && e==2) {
        if (tworeplace=='j' && a==0) {
            a=a+2;
            e=e-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='k' && b==0) {
            b=b+2;
            e=e-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='l' && c==0) {
            c=c+2;
            e=e-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='m' && d==0) {
            d=d+2;
            e=e-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='o' && f==0) {
            f=f+2;
            e=e-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='r' && i==0) {
            i=i+2;
            e=e-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='q' && h==0) {
            h=h+2;
            e=e-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='p' && g==0) {
            g=g+2;
            e=e-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (twodigite=='o' && f==2) {
        if (tworeplace=='l' && c==0) {
            c=c+2;
            f=f-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='r' && i==0) {
            i=i+2;
            f=f-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='n' && e==0) {
            e=e+2;
            f=f-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (twodigite=='p' && g==2) {
        if (tworeplace=='m' && d==0) {
            d=d+2;
            g=g-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='q' && h==0) {
            h=h+2;
            g=g-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='n' && e==0) {
            e=e+2;
            g=g-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (twodigite=='q' && h==2) {
        if (tworeplace=='n' && e==0) {
            e=e+2;
            h=h-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='p' && g==0) {
            g=g+2;
            h=h-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='r' && i==0) {
            i=i+2;
            h=h-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    else if (twodigite=='r' && i==2) {
        if (tworeplace=='o' && f==0) {
            f=f+2;
            i=i-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='q' && h==0) {
            h=h+2;
            i=i-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
        else if (tworeplace=='n' && e==0) {
            e=e+2;
            i=i-2;
            printf("\n");
    printf("   (%d)j------------(%d)k-----------(%d)l\n", a, b, c);
    printf("    | \\             |             / |\n");
    printf("    |   \\           |           /   |\n");
    printf("    |     \\         |         /     |\n");
    printf("    |       \\       |       /       |\n");
    printf("    |         \\     |     /         |\n");
    printf("    |           \\   |   /           |\n");
    printf("    |             \\ | /             |\n");
    printf("   (%d)m------------(%d)n-----------(%d)o\n", d, e, f);
    printf("    |             / | \\             |\n");
    printf("    |           /   |   \\           |\n");
    printf("    |         /     |     \\         |\n");
    printf("    |       /       |       \\       |\n");
    printf("    |     /         |         \\     |\n");
    printf("    |   /           |           \\   |\n");
    printf("    | /             |             \\ |\n");
    printf("   (%d)p------------(%d)q-----------(%d)r\n", g, h, i);
    printf("\n");

        }
    }
    //win logic start.
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
    }
    //2.game logic player 1.
    else if (a==2 && e==2 && i==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (g==2 && e==2 &&c==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (a==2 && d==2 && g==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (b==2 && e==2 && h==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (c==2 && f==2 && i==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (a==2 && b==2 && c==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (d==2 && e==2 && f==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else if (g==2 && h==2 && i==2) {
        printf("\nplayer no.2 win");
        printf("\ndo you want to play again ? (y/n) :");
        scanf(" %c",&yesno);
        if (yesno=='y') {
            goto startgame;
        }
        else if (yesno=='n') {
            goto endgame;
        }
    }
    else {
        goto playerone;
    }
    //win logic ends.
endgame:
printf("\n   *------------------------*");
printf("\n   | Thankyou for playing ! |");
printf("\n   *------------------------*");
printf("\n________________________________________________________________________________________________________________________________________");
return 0;
}
