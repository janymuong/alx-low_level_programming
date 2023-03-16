## C - Doubly Linked Lists

> Definition - __WHAT__ a Doubly Linked List __IS__:	 
>  A Doubly Linked List (DLL) contains an extra pointer, typically called the `previous` pointer, together with the `next` pointer and `data` which are basically what  a `singly linked list` is.

```bash
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
```
