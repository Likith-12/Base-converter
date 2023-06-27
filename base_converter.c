#include <stdio.h>
int convert_from_base10(int base, int num)
{

    int t = 0;
    int i = 1;
    while (num > 0)
    {
        t = t + ((num % base) * i);
        num = num / base;
        i = i * 10;
    }
    return t;
}

int main()
{
    int base_in;
    char in;
    int length = 0;
    int num = 0;
    bool neg = false;
    printf("Enter your base (2-16): ");
    scanf("%d", &base_in);
    if (base_in < 2 || base_in > 16)
    {
        printf("Cannot use that base");
        return 0;
    }
    printf(" \n Enter number: ");
    scanf("%c", &in);
    for (int i = 0; i < 20; i++)
    {
        scanf("%c", &in);
        if (in != '\n')
        {
            int d = base_in;
            switch (in)
            {
            case '0':
                if (d < 1)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 0;
                break;
            case '1':
                if (d < 2)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 1;
                break;
            case '2':
                if (d < 3)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 2;
                break;
            case '3':
                if (d < 4)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 3;
                break;
            case '4':
                if (d < 5)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 4;
                break;
            case '5':
                if (d < 6)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 5;
                break;
            case '6':
                if (d < 7)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 6;
                break;
            case '7':
                if (d < 8)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 7;
                break;
            case '8':
                if (d < 9)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 8;
                break;
            case '9':
                if (d < 10)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 9;
                break;
            case 'a':
            case 'A':
                if (d < 11)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 10;
                break;
            case 'b':
            case 'B':
                if (d < 12)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 11;
                break;
            case 'c':
            case 'C':
                if (d < 13)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 12;
                break;
            case 'd':
            case 'D':
                if (d < 14)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 13;
                break;
            case 'e':
            case 'E':
                if (d < 15)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 14;
                break;
            case 'f':
            case 'F':
                if (d < 16)
                {
                    printf("This number(%c) does not exist in your base", in);
                    return 0;
                }
                num = (num * d) + 15;
                break;
            default:
                if (i = 0 && in == '-')
                {
                    neg = true;
                }
                else
                {
                    printf("Invalid symbol in your number");
                    return 0;
                }
            }
        }
        else
        {
            break;
        }
    }
    int base_out;
    printf("Enter the base you want to convert to (2-10): ");
    if (base_in < 2 || base_in > 10)
    {
        printf("Cannot use that base");
        return 0;
    }
    scanf("%d", &base_out);
    printf("\n");
    int result = convert_from_base10(base_out, num);
    if (neg)
    {
        result = result * (-1);
    }
    printf("Your base %d number in base %d is %d", base_in, base_out, result);
    return 0;
}
