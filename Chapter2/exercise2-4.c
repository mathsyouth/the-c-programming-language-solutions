// squeeze: deletes each character in s1 that matches any character in the string s2.
void squeeze(char s1[ ], char s2[ ])
{
    int i, j, k;

    for (i = j = 0; s1[i] != '\0'; ++i) {
        for (k = 0; (s2[k] != '\0') && (s1[i] != s2[k]) ; ++k)
            ;
        if (s2[k] == '\0')
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
}