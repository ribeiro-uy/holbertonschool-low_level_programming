# 0x12. C - Singly linked lists

## Foundations - Low-level programming & Algorithm ― Data structures and Algorithms

### Data structure for this project:
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

0. Print list mandatory

Write a function that prints all the elements of a list_t list.

-     Prototype: size_t print_list(const list_t *h);
-     Return: the number of nodes
-     Format: see example
-     If str is NULL, print [0] (nil)
-     You are allowed to use printf
