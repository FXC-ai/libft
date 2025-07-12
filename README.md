# Cursus 42 - libft

[What is the size_t data type in C? - GeeksforGeeks](https://www.geeksforgeeks.org/size_t-data-type-c-language/)

# memmove :

[La différence entre memcpy et memmove ?](https://openclassrooms.com/forum/sujet/la-difference-entre-memcpy-et-memmove)

[Question 11.33](https://c-faq.com/ansi/undef.html)

About unspecified behavior

[C standard library:string.h:memmove - clc-wiki](https://clc-wiki.net/wiki/memmove)

3 différents  cas:

PD = Pointeur Destination et PS = Pointeur Source

![Untitled](Cursus%2042%20-%20libft%20e67fd64f8f404355916008e7d456c492/Untitled.png)

![Untitled](Cursus%2042%20-%20libft%20e67fd64f8f404355916008e7d456c492/Untitled%201.png)

![Untitled](Cursus%2042%20-%20libft%20e67fd64f8f404355916008e7d456c492/Untitled%202.png)

ft_memcpy n’est pas en mesure de gérer les chevauchements de mémoire. ft_memcpy peut être utilisée que dans les cas 2 et 3. Dans le cas 1, la fonction memmove a un comportement défini, ce n’est pas le cas de memcpy. 

```c
ft_memcpy(pd,ps,8);
ft_memmove(pd,ps,8);
```

![Untitled](Cursus%2042%20-%20libft%20e67fd64f8f404355916008e7d456c492/Untitled%203.png)

![Untitled](Cursus%2042%20-%20libft%20e67fd64f8f404355916008e7d456c492/Untitled%204.png)

Attention : selon la Francinette la fonction doit (!) crash si l’une des 2 chaines de caractère est vide. En revanche la fonction doit renvoyer NULL si les deux chaines de caractères sont nulles.

Ma solution :

```c
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *pd;
    char *ps;

    if (!dst && !src)
    {
        return (NULL);
    }

    pd = (char *) dst;
    ps = (char *) src;

    if (pd > ps && (ps + len) > pd)
    {
        while (len)
        {
            len--;
            *(pd + len) = *(ps + len);
        }
    }
    else
    {
        while (len)
        {
            *pd++ = *ps++;
            len--;
        }
    }
    return (dst);
}
```

Solution de Thomas Favre :

```c
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if (dst > src)
	{
		while (i < len)
		{
			((char *)dst)[len - i - 1] = ((char *)src)[len - i - 1];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
```

La différence tient dans 2 choses :

- il cast sa destination au fur et à mesure qu-il copie sa source
- il ne vérifie pas si les chaines sources et destination se chevauchent, en fait il vérifie juste si le pointeur de la destination se trouve après la source. Dans ce cas il effectue la copie en commençant par la fin.

# strlcat

[Decoding the strlcat() Function](https://c-for-dummies.com/blog/?p=3896)

```c
size_t strlcat(char *dst, const char *src, size_t dstsize);
```

Pour la valeur de retour, il y a 2 cas à traiter :

| Valeur de dstsize | Valeur de retour |
| --- | --- |
| 0 ≤ dstsize ≤ strlen(dstsize) | strlen(src) + dstsize |
| dstsize > strlen(dst) | strlen(dst) + strlen(src) |

Dans le cas ou la valeur de retour est superieure à la valeur de dstsize : cela signifie que la chaîne src a été tronquée.

# strlcpy

[strlcpy.c](https://opensource.apple.com/source/xnu/xnu-4570.1.46/osfmk/arm/strlcpy.c.auto.html)

Code source de la fonction

```c
size_t strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
```

La fonction renvoie toujours strlen(src). 

| Valeur de size | Comportement de la fonction |
| --- | --- |
| 0 | Renvoie strlen(src) |
| dstsize > strlen(src) + 1 | Copie en entier src et ajoute un 0 terminal |
| dstsize ≤ strlen(src) + 1 | Copie (dstsize-1) de src dans dst et ajoute un 0 terminal |

# strtrim

[How to trim a string in C - SoftPrayog](https://www.softprayog.in/programming/how-to-trim-a-string-in-c)

```c
void trim (char *dest, char *src)
{
    if (!src || !dest)
       return;

    int len = strlen (src);

    if (!len) {
        *dest = '\0';
        return;
    }
    char *ptr = src + len - 1;

    // remove trailing whitespace
    while (ptr > src) {
        if (!isspace (*ptr))
            break;
        ptr--;
    }

    ptr++;

    char *q;
    // remove leading whitespace
    for (q = src; (q < ptr && isspace (*q)); q++)
        ;

    while (q < ptr)
        *dest++ = *q++;

    *dest = '\0';
}
```

# ft_putchar_fd

[Entrée / Sortie avec le système de fichiers Linux](https://romainlebreton.github.io/Archi3/tutorials/iofile)

Au démarrage d’un processus, voici les 3 descripteurs qui lui sont automatiquement associés :

- 0 : entrée standard
- 1 : sortie standard
- 2 : sortie d’erreurs