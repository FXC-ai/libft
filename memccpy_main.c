#include "includes/ft.h"
#include <libc.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    if (argc != 5)
    {
        printf("void *ft_memccpy(void *dst, const void *src, int c, size_t n)");
        return 1;
    }
    
    size_t size_dst = strlen (argv[1]);

    char *cpy_dst = (char *) malloc(sizeof(char) * (size_dst + 1));
    char *cpy_dst_1 = (char *) malloc(sizeof(char) * (size_dst + 1));

    memcpy(cpy_dst, argv[1],  size_dst);
    memcpy(cpy_dst_1, argv[1],  size_dst);

    printf("AVANT : %s\n\n", cpy_dst);

    int c = atoi(argv[3]);

    void *result = memccpy(cpy_dst, argv[2], c, atoi(argv[4]));

    printf("APRES : %s\n", cpy_dst);
    printf("result = %p\n", result);


    return 0;
}
/*
int main() {

    const char * text = "Ceci se. Etnde";
    size_t length = strlen( text );

    // On essaye de trouver la première phrase dans le texte.
    char firstSentence[26] = "abcdefghijklmnopqrstuvwxyz";
    char *res = memccpy(firstSentence, text, '.', length);

    // On affiche le resultat.
    if ( res != NULL ) {
        printf( "Une phrase entière a été trouvée.\n" );
        printf( "\t%s\n", firstSentence );
    } else {
        printf( "Aucune phrase entière trouvée.\n" );
    }

    return EXIT_SUCCESS;
}*/