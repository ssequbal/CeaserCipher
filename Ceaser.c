#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string k = argv[1];
    for (int i = 0; i < strlen(k); i++)
    {
        if (!isdigit(k[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    string plain = get_string("plaintext:  ");
    int key = atoi(k);
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plain); i++)
    {
        if (isupper(plain[i]))
        {
            printf("%c", (((plain[i] - 65) + key) % 26) + 65);
        }
        if (islower(plain[i]))
        {
            printf("%c", (((plain[i] - 97) + key) % 26) + 97);
        }
        if (!isalpha(plain[i]))
        {
            printf("%c", plain[i]);
        }
    }
    printf("\n");
}
