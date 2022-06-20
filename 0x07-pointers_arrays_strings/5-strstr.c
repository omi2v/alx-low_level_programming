#include "main.h"
/**
 * _strstr - function for to do
 * @haystack: th efirst char
 * @needle: the two need
 * Return: nothing
 */
char *_strstr(char *haystack, char *needle)
{

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;

        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (needle[i + j] != haystack[j])
                break;

        if (j == M)
            return i;
}
return (NULL);
}

