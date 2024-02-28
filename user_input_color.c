#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()

/*
0 = Black
1 = Blue
2 = Green
3 = Aqua
4 = Red
5 = Purple
6 = Yellow
7 = White
8 = Gray
9 = Light Blue
A = Light Green
B = Light Aqua
C = Light Red
D = Light Purple
E = Light Yellow
F = Bright White
*/

{
    int A,B;
    // int A,B,C,D,E,F;
    
    printf("let user take the bg color of the op fn is = ", &A);
    scanf("%d",&A);
    printf("the bg color of the op fn is = %d\n",A);
    
    printf("let user take the text color of the op fn is = ", &B);
    scanf("%d",&B);
    printf("the text color of the op fn is = %d\n",B);

    // system("color bgcolor textcolor");
    switch(A)
    {
    case 0:
        printf("0 = Black\n");
        break;
    case 1:
        printf("1 = Blue\n");
        break;
    case 2:
        printf("2 = Green\n");
        break;
    case 3:
        printf("3 = Aqua\n");
        break;
    case 4:
        printf("4 = Red\n");
        break;
    case 5:
        printf("5 = Purple\n");
        break;
    case 6:
        printf("6 = Yellow\n");
        break;
    case 7:
        printf("7 = White\n");
        break;
    case 8:
        printf("8 = Gray\n");
        break;
    case 9:
        printf("9 = Light Blue\n");
        break;
    /*case A:
        printf("A = Light Green");
        break;
    case B:
        printf("B = Light Aqua");
        break;
    case C:
        printf("C = Light Red");
        break;
    case D:
        printf("D = Light Purple");
        break;
    case E:
        printf("E = Light Yellow");
        break;
    case F:
        printf("F = Bright White");
        break;*/
    default:
        printf("user have given the wrong digit code\n");
        break;
    }

    switch(B)
    {
    case 0:
        printf("0 = Black\n");
        break;
    case 1:
        printf("1 = Blue\n");
        break;
    case 2:
        printf("2 = Green\n");
        break;
    case 3:
        printf("3 = Aqua\n");
        break;
    case 4:
        printf("4 = Red\n");
        break;
    case 5:
        printf("5 = Purple\n");
        break;
    case 6:
        printf("6 = Yellow\n");
        break;
    case 7:
        printf("7 = White\n");
        break;
    case 8:
        printf("8 = Gray\n");
        break;
    case 9:
        printf("9 = Light Blue\n");
        break;
    /*case A:
        printf("A = Light Green");
        break;
    case B:
        printf("B = Light Aqua");
        break;
    case C:
        printf("C = Light Red");
        break;
    case D:
        printf("D = Light Purple");
        break;
    case E:
        printf("E = Light Yellow");
        break;
    case F:
        printf("F = Bright White");
        break;*/
    default:
        printf("user have given the wrong digit code\n");
        break;

    printf("the value of A,B taken by user is = %d,%d\n",A,B);
    // printf("the value of B taken by user is = %d\n",B);

    
    system("color AB");
    }
    return 0;
    getch();

}