# Libft - 42 School Project

## Résumé

Libft est une bibliothèque de fonctions C basique créée dans le cadre du programme de formation 42. Le projet vise à recoder certaines fonctions de la bibliothèque standard C ainsi que d'autres fonctions utilitaires que vous pourrez utiliser dans vos futurs projets.

## Technologies Utilisées

- Langage C
- Makefile pour la compilation

## Installation

Pour compiler la bibliothèque, clonez le dépôt et utilisez le Makefile :

```bash
git clone https://github.com/Jeanmichel7/libft.git
cd libft
make
```

Cela générera une bibliothèque statique `libft.a`.

## Règle du projet

- Le projet doit être codé en conformité avec la [Norme 42](https://github.com/42School/norminette).
- Seules certaines fonctions de la bibliothèque standard sont autorisées.
- Le code doit être optimisé et sans fuites mémoire.
- Le Makefile doit compiler la bibliothèque et avoir les règles standards `all`, `clean`, `fclean` et `re`.

## Utilisation

Incluez le fichier d'en-tête dans votre projet C :

```c
#include "libft.h"
```

Puis liez votre fichier object avec `libft.a` lors de la compilation :

```bash
gcc your_file.c -L. -lft -o your_program
```

### Exemple

```c
#include "libft.h"

int main()
{
    char *str = ft_strdup("42 is amazing!");

    ft_putstr(str);

    return 0;
}
```

---

Pour toute question ou suggestion, n'hésitez pas à ouvrir une issue ou à faire un pull request.
