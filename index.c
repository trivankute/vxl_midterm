
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// double to string
char *d2s(double d)
{
    char *str = (char*)malloc(100);
    sprintf(str, "%f", d);
    return str;
}
char *suffixWithUnit ( double number ) {
    // number to string and add unit like kilo, mega, giga, tera, peta, exa, zetta, ....
    char *str = (char*)malloc(100);
    if (number < 1000) {
        sprintf(str, "%f", number);
    } else if (number < 1000000) {
        sprintf(str, "%f", number / 1000);
        int len = strlen(str);
        int i = 0;
        while(i==0)
        {
            if(str[len-1] == '0')
            {
                str[len-1] = '\0';
                len--;
            }
            else
            {
                i++;
            }
        }
        strcat(str, " Kilo");
    } else if (number < 1000000000) {
        sprintf(str, "%f", number / 1000000);
        int len = strlen(str);
        int i = 0;
        while(i==0)
        {
            if(str[len-1] == '0')
            {
                str[len-1] = '\0';
                len--;
            }
            else
            {
                i++;
            }
        }
        strcat(str, " Mega");
    }   else if (number < 1000000000000) {
        sprintf(str, "%f", number / 1000000000);
        int len = strlen(str);
        int i = 0;
        while(i==0)
        {
            if(str[len-1] == '0')
            {
                str[len-1] = '\0';
                len--;
            }
            else
            {
                i++;
            }
        }
        strcat(str, " Giga");
    }   else if (number < 1000000000000000) {
        sprintf(str, "%f", number / 1000000000000);
        int len = strlen(str);
        int i = 0;
        while(i==0)
        {
            if(str[len-1] == '0')
            {
                str[len-1] = '\0';
                len--;
            }
            else
            {
                i++;
            }
        }
        strcat(str, " Tera");
    }   else if (number < 1000000000000000000) {
        sprintf(str, "%f", number / 1000000000000000);
        int len = strlen(str);
        int i = 0;
        while(i==0)
        {
            if(str[len-1] == '0')
            {
                str[len-1] = '\0';
                len--;
            }
            else
            {
                i++;
            }
        }
        strcat(str, " Peta");
    }   else if (number < 1000000000000000000000) {
        sprintf(str, "%f", number / 1000000000000000000);
        int len = strlen(str);
        int i = 0;
        while(i==0)
        {
            if(str[len-1] == '0')
            {
                str[len-1] = '\0';
                len--;
            }
            else
            {
                i++;
            }
        }
        strcat(str, " Exa");
    }   else if (number < 1000000000000000000000000) {
        sprintf(str, "%f", number / 1000000000000000000000);
        int len = strlen(str);
        int i = 0;
        while(i==0)
        {
            if(str[len-1] == '0')
            {
                str[len-1] = '\0';
                len--;
            }
            else
            {
                i++;
            }
        }
        strcat(str, " Zetta");}
    // get str len
    return str;
}

int main()
{
    double d = 12345678;
    char *str = suffixWithUnit(d);
    printf("%s", str);
    return 0;
}