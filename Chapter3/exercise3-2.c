/* escape: converts characters like newline and tab into visible escapes
 sequences as it copies the string t to s*/
int escape(char s[], char t[])
{
    int i, j;

    for (i = j = 0; t[i] != '\0'; i++)
        switch(t[i]) {
            case '\a': 
                s[j++] = '\\';
                s[j++] = 'a';
                break;
            case '\b': 
                s[j++] = '\\';
                s[j++] = 'b';
                break;
            case '\f':
                s[j++] = '\\';
                s[j++] = 'f';
                break;
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\r':
                s[j++] = '\\';
                s[j++] = 'r';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            case '\v':
                s[j++] = '\\';
                s[j++] = 'v';
                break;
            case '\\':
                s[j++] = '\\';
                s[j++] = '\\';
                break;
            case '\?':
                s[j++] = '\\';
                s[j++] = '\?';
                break;
            case '\'':
                s[j++] = '\\';
                s[j++] = '\'';
                break;
            case '\"':
                s[j++] = '\\';
                s[j++] = '\"';
                break;
            case '\ooo':
                s[j++] = '\\';
                s[j++] = '\ooo';
                break;
            case '\xhh':
                s[j++] = '\\';
                s[j++] = '\xhh';
                break;
            default:
                s[j++] = t[i];
                break;
    }

    s[j] = '\0';

    return 0;
}

/* unescape: converts visible escapes sequences into characters like newline
 and tab as it copies the string t to s*/
int unescape(char s[], char t[])
{
    int i, j;

    for (i = j = 0; t[i] != '\0'; i++)
        if (t[i] != '\\')
            s[j++] = t[i];
        else
            switch(t[++i]) {
                case 'a': 
                    s[j++] = '\a';
                    break;
                case 'b': 
                    s[j++] = '\b';
                    break;
                case 'f':
                    s[j++] = '\f';
                    break;
                case 'n':
                    s[j++] = '\n';
                    break;
                case 'r':
                    s[j++] = '\r';
                    break;
                case 't':
                    s[j++] = '\t';
                    break;
                case 'v':
                    s[j++] = '\v';
                    break;
                default:
                    s[j++] = t[i];
                    break;
            }

    s[j] = '\0';

    return 0;
}