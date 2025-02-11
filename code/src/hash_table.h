#ifndef _HASH_TABLE_H
#define _HASH_TABLE_H
#include "prime.h"
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char *key;
    char *value;
} ht_item;

typedef struct
{
    int size;
    int count;
    int base_size;
    ht_item **items;
} ht_hash_table;
ht_hash_table *ht_new();
void ht_del_hash_table(ht_hash_table *ht);
void ht_insert(ht_hash_table *ht, const char *key, const char *value);
char *ht_search(ht_hash_table *ht, const char *key);
void ht_delete(ht_hash_table *ht, const char *key);
#endif
