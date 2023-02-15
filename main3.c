#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>

struct player
{
    char name[20];
    int miss;
    int hit;
} p1, p2;

char print(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        Sleep(40);
        printf("%c", s[i]);
    }
    // printf("\n");
}

void timer()
{
    for (int i = 5; i >= 0; i--)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t%d\n", i);
        Sleep(1000);
        system("cls");
    }
}

char *name(char *a)
{
    print("\t\tEnter you Name : ");
    gets(a);
    return a;
}

void middle(char str[])
{
    printf("\n\n\n\n");
    printf("\t\t");
    printf("%s", str);
}

void showB(int *a)
{
    int i;
    printf("\n");
    printf("\n");
    printf("   -------------------------------------------------------\n");
    for (i = 1; i <= 36; i++)
    {
        if (i < 7)
        {
            if (i == 1)
            {
                // printf("---");
            }
            if (*(a + i) < 10)
            {
                printf("   |    %d", *(a + i));
            }
            else
            {
                printf("   |   %d", *(a + i));
            }
            if (i == 6)
            {
                printf("   |");
                printf("\n");
                printf("   -------------------------------------------------------\n");
            }
        }
        else
        {
            if (i < 13)
            {
                if (i == 7)
                {
                    // printf("---");
                }
                if (*(a + i) < 10)
                {
                    printf("   |    %d", *(a + i));
                }
                else
                {
                    printf("   |   %d", *(a + i));
                }
                if (i == 12)
                {
                    printf("   |");
                    printf("\n");
                    printf("   -------------------------------------------------------\n");
                }
            }
            else
            {
                if (i < 19)
                {
                    if (i == 13)
                    {
                        // printf("---");
                    }
                    if (*(a + i) < 10)
                    {
                        printf("   |    %d", *(a + i));
                    }
                    else
                    {
                        printf("   |   %d", *(a + i));
                    }
                    if (i == 18)
                    {
                        printf("   |");
                        printf("\n");
                        printf("   -------------------------------------------------------\n");
                    }
                }
                else
                {
                    if (i < 25)
                    {
                        if (i == 19)
                        {
                            // printf("---");
                        }
                        if (*(a + i) < 10)
                        {
                            printf("|    %d", *(a + i));
                        }
                        else
                        {
                            printf("   |   %d", *(a + i));
                        }
                        if (i == 24)
                        {
                            printf("   |");
                            printf("\n");
                            printf("   -------------------------------------------------------\n");
                        }
                    }
                    else
                    {
                        if (i < 31)
                        {
                            if (i == 25)
                            {
                                // printf("---");
                            }
                            if (*(a + i) < 10)
                            {
                                printf("|--- %d", *(a + i));
                            }
                            else
                            {
                                printf("   |   %d", *(a + i));
                            }
                            if (i == 30)
                            {
                                printf("   |");
                                printf("\n");
                                printf("   -------------------------------------------------------\n");
                            }
                        }
                        else
                        {
                            if (i < 37)
                            {
                                if (i == 31)
                                {
                                    // printf("---");
                                }
                                if (*(a + i) < 10)
                                {
                                    printf("|    %d", *(a + i));
                                }
                                else
                                {
                                    printf("   |   %d", *(a + i));
                                }
                                if (i == 36)
                                {
                                    printf("   |");
                                    printf("\n");
                                    printf("   -------------------------------------------------------\n");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("\n");
}

void positioning(int b[], int p2[], int p3[], int p4[])
{
    int i, j, k, l, size, pos;
    int c1, c2, rep;
    c1 = 1;
    c2 = 1;
    // system("COLOR A4");
    for (i = 1; i <= 3; i++)
    {
        if (i == 1)
        {
            // Sleep(2000);
            system("cls");
            printf("\n\n\n");
            print("\t\tLIST OF SHIPS AVAILABLE\n");
            Sleep(1000);
            printf("\n");
            print("\t\tDestroyer\t:\t2\n");
            Sleep(1000);
            print("\t\tSubmarine\t:\t3\n");
            Sleep(1000);
            print("\t\tBattleship\t:\t4\n");
            Sleep(1000);
            printf("\n");
            Sleep(1000);
            showB(b);
            Sleep(1000);
            print("\tWhich ship do u wanna place now [2/3/4]?: ");
        }
        else if (c1 == 1)
        {
            system("cls");
            printf("\n\n\n");
            printf("\t\tLIST OF SHIPS AVAILABLE\n");
            printf("\n");
            printf("\t\tDestroyer\t:\t2\n");
            printf("\t\tSubmarine\t:\t3\n");
            printf("\t\tBattleship\t:\t4\n");
            printf("\n");
            // Sleep(2000);
            showB(b);
            // Sleep(1000);
            print("\tWhich ship do u wanna place now [2/3/4]?: ");
        }
        scanf("%d", &size);
        Sleep(1000);
        system("cls");
        if (size >= 2 && size <= 4)
        {
            c1 = 1;
            for (j = 1; j <= size; j++)
            {
                if (c2 == 1)
                {
                    showB(b);
                    // Sleep(1000);
                    print("\t\tEnter position ");
                    printf("%d : ", j);
                }
                if (size == 2)
                {
                    scanf("%d", &p2[j]);
                    // Sleep(1000);
                    pos = p2[j];
                }
                else
                {
                    if (size == 3)
                    {
                        scanf("%d", &p3[j]);
                        // Sleep(1000);
                        pos = p3[j];
                    }
                    else
                    {
                        if (size == 4)
                        {
                            scanf("%d", &p4[j]);
                            // Sleep(1000);
                            pos = p4[j];
                        }
                    }
                }
                if (pos >= 1 && pos <= 36)
                {
                    for (k = 1; k <= 36; k++)
                    {
                        if (pos == k)
                        {
                            if (b[k] == 99)
                            {
                                print("you have already entered that position\n");
                                print("Please enter a valid position\n");
                                c2 = 0;
                                j = j - 1;
                            }
                            else
                            {
                                b[k] = 99;
                                c2 = 1;
                            }
                        }
                    }
                }
                else
                {
                    print("Invalid position\n");
                    print("Please enter a valid position\n");
                    c2 = 0;
                    j = j - 1;
                }
                if (j == size)
                {
                    showB(b);
                }
            }
        }
        else
        {
            print("Invalid input\n");
            print("Please enter valid size for the ship\n");
            c1 = 0;
            i = i - 1;
        }
    }
}

int mark(char s[])
{
    int r, f, t;
    if (s[0] == 'A' || s[0] == 'a')
    {
        f = 0;
    }
    else if (s[0] == 'B' || s[0] == 'b')
    {
        f = 6;
    }
    else if (s[0] == 'C' || s[0] == 'c')
    {
        f = 12;
    }
    else if (s[0] == 'D' || s[0] == 'd')
    {
        f = 18;
    }
    else if (s[0] == 'E' || s[0] == 'e')
    {
        f = 24;
    }
    else if (s[0] == 'F' || s[0] == 'f')
    {
        f = 30;
    }
    if (s[1] == '1')
    {
        r = 1;
    }
    else if (s[1] == '2')
    {
        r = 2;
    }
    else if (s[1] == '3')
    {
        r = 3;
    }
    else if (s[1] == '4')
    {
        r = 4;
    }
    else if (s[1] == '5')
    {
        r = 5;
    }
    else if (s[1] == '6')
    {
        r = 6;
    }
    t = f + r;

    return t;
}

void showV(int *a, char *b)
{
    int i;
    printf("\n");
    printf("       |   1   |   2   |   3   |   4   |   5   |   6   |      \n");
    printf("       -------------------------------------------------   \n");
    for (i = 1; i <= 36; i++)
    {
        if (i < 7)
        {
            if (i == 1)
            {
                printf(" A -");
            }
            printf("   |   %c", *(b + i));
            if (i == 6)
            {
                printf("   |");
                printf("\n");
                printf("       -------------------------------------------------   \n");
            }
        }
        else
        {
            if (i < 13)
            {
                if (i == 7)
                {
                    printf(" B -");
                }
                printf("   |   %c", *(b + i));
                if (i == 12)
                {
                    printf("   |");
                    printf("\n");
                    printf("       -------------------------------------------------   \n");
                }
            }
            else
            {
                if (i < 19)
                {
                    if (i == 13)
                    {
                        printf(" C -");
                    }
                    printf("   |   %c", *(b + i));
                    if (i == 18)
                    {
                        printf("   |");
                        printf("\n");
                        printf("       -------------------------------------------------   \n");
                    }
                }
                else
                {
                    if (i < 25)
                    {
                        if (i == 19)
                        {
                            printf(" D -");
                        }
                        printf("   |   %c", *(b + i));
                        if (i == 24)
                        {
                            printf("   |");
                            printf("\n");
                            printf("       -------------------------------------------------   \n");
                        }
                    }
                    else
                    {
                        if (i < 31)
                        {
                            if (i == 25)
                            {
                                printf(" E -");
                            }
                            printf("   |   %c", *(b + i));
                            if (i == 30)
                            {
                                printf("   |");
                                printf("\n");
                                printf("       -------------------------------------------------   \n");
                            }
                        }
                        else
                        {
                            if (i < 37)
                            {
                                if (i == 31)
                                {
                                    printf(" F -");
                                }
                                printf("   |   %c", *(b + i));
                                if (i == 36)
                                {
                                    printf("   |");
                                    printf("\n");
                                    printf("       -------------------------------------------------   \n");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void filereader()
{
    FILE *ptr;
    char ch;
    ptr = fopen("btleship.txt", "r");

    if (NULL == ptr)
    {
        printf("file can't be opened \n");
    }

    do
    {
        ch = fgetc(ptr);
        printf("%c", ch);

    } while (ch != EOF);

    fclose(ptr);
}

int HeadsTails(char x[20], char y[20])
{
    int a, b, p;
    int lower = 1;
    int upper = 3;
    srand(time(0));
    printf("%s ", x);
    printf("can call for toss\nChoose 1 for heads\nChoose 2 for tails\n");
    scanf("%d", &b);
    // for (a = 1; a < 3; a++)
    // {
    //     printf(" %d \n", rand());
    // }
    for (int i = 0; i < 1; i++)
    {
        a = (rand() % (upper - lower + 1) + lower);
    }
    printf("%d\n", a);
    if (a == 1)
    {
        printf("heads\n");
    }

    else
    {
        printf("tails\n");
    }

    if (b == a)
    {
        printf("%s ", x);
        printf("has won the toss\n");
        printf("%s ", x);
        printf("can start the game now");
        p = 1;
    }
    else
    {
        printf("%s ", y);
        printf("has won the toss\n");
        printf("%s ", y);
        printf("can start the game now\n");
        p = 2;
    }
    return p;
}

int main()
{
    system("cls");
    system("COLOR A1");
    int b1[37], b2[37], v1[37], v2[37];
    // b->position of ships
    char vv1[37], vv2[37];
    // v->hit and miss
    int p12[3], p22[3];
    // for ships of len 2
    int p13[4], p23[4];
    // for ships of len 3
    int p14[5], p24[5];
    // for ships of len 4
    int i, j, k;
    // i,j,k->loops
    char *n1, *n2;
    char a[20], b[20];
    // usernames
    for (i = 1; i <= 36; i++)
    {
        // assigning 1 to 36 in arrays
        b1[i] = i;
        b2[i] = i;
        v1[i] = i;
        v2[i] = i;
        vv1[i] = '_';
        vv2[i] = '_';
    }
    // Sleep(2000);
    // timer();
    print("\n\n\n\n\n\n\n\n\t\tWELCOME TO THE GAME OF BATTLESHIP!\n");
    Sleep(1000);
    system("cls");
    char choic;
    print("\n\n\n\n\n\n\n\n\tDo you want to see the rules of the game ?(y/n) :");
    scanf("%s", &choic);
    system("cls");
    printf("\n\n\n");
    if (choic == 'y')
    {
        filereader();
        printf("\n\n");
        system("pause");
    }
    system("cls");
    print("\n\n\n\n\n\n\n\n\t\t\tLETS BEGIN...!\n");
    Sleep(1000);
    system("COLOR A1");
    system("cls");
    print("\n\n\n\n\n\n\n\n\t\t\tPLAYER 1\n\n");
    Sleep(1000);
    printf("\t\tEnter your Name : ");
    scanf("%s", p1.name);
    positioning(b1, p12, p13, p14);
    //  char show1[2];
    //  print("\tDo you to see the positions you assigned?(y/n): ");
    //  Sleep(2000);
    //  scanf("%s", show1);
    //  if (strcmp(show1, "y") == 0)
    //  {
    //      showB(b1);
    //      Sleep(5000);
    //  }
    Sleep(2000);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\tPLAYER2\n\n");
    printf("\t\tEnter your Name : ");
    scanf("%s", p2.name);
    positioning(b2, p22, p23, p24);
    //  char show2[2];
    //  printf("Do you to see the positions you assigned?(y/n): ");
    //  scanf("%s", show2);
    //  if (strcmp(show2, "y") == 0)
    //  {
    //      showB(b2);
    //  }
    char hpos[2];
    // hpos->alphanumeric positions read from user
    int turn, stop, z, pos;
    // stop->to stop the do while loop
    // turn->to switch turns between p1 & p2
    // hit->keep track of the hits
    // miss->keep tracks of misses
    // pos->position(1 to 36) converted from hpos(alphanumeric)
    // z->to print hit/miss after each player's turn.
    print("Now! Let's decide who goes first\n");
    turn = HeadsTails(p1.name, p2.name);
    // turn = 1;
    stop = 0;
    p1.hit = 0;
    p2.hit = 0;
    p1.miss = 0;
    p2.miss = 0;
    int des, sub, bat, des2, sub2, bat2;
    // des,sub,bat->to keep track of the ships sunk & to print the message that ship has been sunk
    des = 0;
    sub = 0;
    bat = 0;
    des2 = 0;
    sub2 = 0;
    bat2 = 0;
    do
    {
        z = 0;
        if (turn == 1)
        {
            Sleep(2000);
            system("cls");
            printf("\t\t\t\t%s", p1.name);
            print("'s turn\n");
            showV(v1, vv1);
            printf("%s", p1.name);
            print(", Enter position to hit : ");
            scanf("%s", hpos);
            pos = mark(hpos);
            for (i = 1; i <= 36; i++)
            {
                if (pos == v1[i])
                {
                    if (v1[i] == b2[i])
                    {
                        vv1[i] = '0';
                        z = 0;
                        // miss
                    }
                    else
                    {
                        for (j = 1; j <= 2; j++)
                        {
                            if (p22[j] == v1[i])
                            {
                                des = des + 1;
                            }
                        }
                        for (j = 1; j <= 3; j++)
                        {
                            if (p23[j] == v1[i])
                            {
                                sub = sub + 1;
                            }
                        }
                        for (j = 1; j <= 4; j++)
                        {
                            if (p24[j] == v1[i])
                            {
                                bat = bat + 1;
                            }
                        }
                        if (b2[i] == 99)
                        {
                            vv1[i] = 'X';
                            p1.hit = p1.hit + 1;
                            z = 1;
                        }
                    }
                }
                turn = 2;
            }
        }
        else
        {
            Sleep(2000);
            system("cls");
            printf("\t\t\t\t%s's turn\n", p2.name);
            showV(v2, vv2);
            printf("%s", p2.name);
            print(", Enter position to hit : ");
            scanf("%s", hpos);
            pos = mark(hpos);
            for (i = 1; i <= 36; i++)
            {
                if (pos == v2[i])
                {
                    if (v2[i] == b1[i])
                    {
                        vv2[i] = '0';
                        z = 0;
                        // miss
                    }
                    else
                    {
                        for (j = 1; j <= 2; j++)
                        {
                            if (p12[j] == v2[i])
                            {
                                des2 = des2 + 1;
                            }
                        }
                        for (j = 1; j <= 3; j++)
                        {
                            if (p13[j] == v2[i])
                            {
                                sub2 = sub2 + 1;
                            }
                        }
                        for (j = 1; j <= 4; j++)
                        {
                            if (p14[j] == v2[i])
                            {
                                bat2 = bat2 + 1;
                            }
                        }
                        if (b1[i] == 99)
                        {
                            vv2[i] = 'X';
                            p2.hit = p2.hit + 1;
                            z = 1;
                        }
                    }
                }
                turn = 1;
            }
        }
        if (z == 1)
        {
            if (turn == 1)
            {
                print("HIT ");
                printf("%d\n", p2.hit);
                if (des2 == 2)
                {
                    des2 = des2 + 1;
                    printf("%s", p2.name);
                    print(", you have sunk the ship : Destroyer , Length : 2\n");
                }
                else
                {
                    if (sub2 == 3)
                    {
                        sub2 = sub2 + 1;
                        printf("%s", p2.name);
                        print(", you have sunk the ship : Submarine , Length : 3\n");
                    }
                    else
                    {
                        if (bat2 == 4)
                        {
                            bat2 = bat2 + 1;
                            printf("%s", p2.name);
                            print(", you have sunk the ship : Battleship , Length : 4\n");
                        }
                    }
                }
            }
            else
            {
                printf("HIT %d\n", p1.hit);
                if (des == 2)
                {
                    des = des + 1;
                    printf("%s", p1.name);
                    print(", you have sunk the ship : Destroyer , Length : 2\n");
                }
                else
                {
                    if (sub == 3)
                    {
                        sub = sub + 1;
                        printf("%s", p1.name);
                        print(", you have sunk the ship : Submarine , Length : 3\n");
                    }
                    else
                    {
                        if (bat == 4)
                        {
                            bat = bat + 1;
                            printf("%s", p1.name);
                            print(", you have sunk the ship : Battleship , Length : 4\n");
                        }
                    }
                }
            }
        }
        else
        {
            if (turn == 1)
            {
                p2.miss = p2.miss + 1;
                printf("MISS %d\n", p2.miss);
            }
            else
            {
                p1.miss = p1.miss + 1;
                printf("MISS %d\n", p1.miss);
            }
        }
        // if (turn == 1)
        // {
        //     showV(v2, vv2);
        //     Sleep(3000);
        // }
        // else
        // {
        //     showV(v1, vv1);
        //     Sleep(3000);
        // }
        if (p1.hit == 9)
        {
            stop = 1;
        }
        else
        {
            if (p2.hit == 9)
            {
                stop = 1;
            }
        }
    } while (stop != 1);
    Sleep(2000);
    printf("\t\t\tCONGRAGULATIONS!!!!\n");
    Sleep(2000);
    system("cls");
    if (p1.hit > p2.hit)
    {
        printf("\t\t  %s", p1.name);
        print("WON THE GAME!\n");
    }
    else
    {
        printf("\t\t  %s", p2.name);
        print("WON THE GAME!\n");
    }
    Sleep(1000);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tGAME OVER\n\n\n");
    Sleep(3000);
    system("cls");
    system("pause");
    return 0;
}