## `C` - Hash Tables

### Preview
This directory contains simple implementations of a `hash table` in C, including a `hash function` to generate the index used to store key-value pairs in the table[array]. 

> A `hash table` is a data structure that provides fast access to values based on their keys, with an expected time complexity of O(1) for **insertion**, **deletion**, and **retrieval** operations.

> A `hash function` implementation is a simple algorithm that computes the sum of the ASCII codes of the characters in the key, modulo the table size. This function may not be ideal for all applications, as it can result in collisions (when two keys map to the same index) and reduced performance.


`Usage` 		  
To use a hash table in a C program, simply include a `hash_table.h` header file and link it in your source files. Create a new hash table with a `create` function, and insert key-value pairs with an `insert/update` function; you can retrieve the value associated with a key using a `read` function, and you can delete with a `delete` analog.

### struct

sample header file: `hash_tables.h`
```bash
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

sample `hashing/operations` on a hash table: a main program.
```bash
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "Levi", "Ackerman");
    return (EXIT_SUCCESS);
}
```
