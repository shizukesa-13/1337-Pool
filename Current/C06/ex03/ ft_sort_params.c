#include <unistd.h>
void swap(char **s1, char **s2)
{
    char *swap;
    swap = *s1;
    *s1 = *s2;
    *s2 = swap;
}
int cmp(char *a, char *b)
{
    int i;
    i = 0;
    while (a[i] != '\0' || b[i] != '\0')
    {
        if (a[i] != b[i])
            return (a[i] - b[i]);
        i++;
    }
    return (0);
}
void print(int ac, char *av[])
{
    int i;
    int j;

    i = 1;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            write(1, &av[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}
int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 1;
    j = i + 1;
    while (i < argc - 1)
    {
        while (j < argc)
        {
            if (cmp(argv[i], argv[j]) < 0)
                swap(&argv[i], &argv[j]);
            j++;
        }
        i++;
    }
    print (argc, argv);
}