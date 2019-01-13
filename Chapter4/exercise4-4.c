#define MAXVAL 100 /* maximum depth of val stack */

int sp = 0; /* next free stack position */
double val[MAXVAL]; /* val stack */

/* printtop: print the top value from stack */
void printtop(void)
{
    if (sp > 0)
        printf("The top element of the stack is %g\n", val[sp-1]);
    else
        printf("error: stack empty\n");
}


double dup[MAXVAL]; /* the duplicated stack


/* duplicate: duplicate the top element of the stack */
void duplicate(void)
{
    if (sp > 0) {
        val[sp] = val[sp-1];
        sp++;
    } else
        printf("error: stack empty\n");
}


/* swap: swap the top two elements */
void swap(void)
{
    double temp;

    if (sp > 1) {
        temp = val[sp-1];
        val[sp-1] = val[sp-2];
        val[sp-2] = temp; 
    } else
        printf("error: stack just has less than two elements\n")
}


/* clear: clear the stack */
void clear(void)
{
    sp = 0;
}
