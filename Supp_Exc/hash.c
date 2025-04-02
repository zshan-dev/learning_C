#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10

typedef struct{
    char *str;
    float value;
    struct hashEntry *next;
} hashEntry;

unsigned long hashIndex(char *str){
    unsigned int hash = 5381;
    int c;
    while (c = *str++){
        hash = (hash * 33) + c;
    }
    return hash % TABLE_SIZE; 
}

void insert(hashEntry **hashTable, char*str, float value){
    int index = hashIndex(str);
    hashEntry *newNode = malloc(sizeof(hashEntry));
    newNode->str = strdup(str);
    newNode->value = value;
    newNode->next = NULL;

    if(hashTable[index] == NULL){
        hashTable[index] = newNode;
    } else {
        newNode->next = hashTable[index];
        hashTable[index] = newNode;
    }
}

void printHashTable(hashEntry **hashTable) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d: ", i);
        hashEntry *entry = hashTable[i];
        while (entry) {
            printf("(%s, %.2f) -> ", entry->str, entry->value);
            entry = entry->next;
        }
        printf("NULL\n");
    }
}

void freeHashTable(hashEntry **hashTable) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashEntry *entry = hashTable[i];
        while (entry) {
            hashEntry *temp = entry;
            entry = entry->next;
            free(temp->str); 
            free(temp);      
        }
    }
}

float search(hashEntry **hashTable, char *str) {
    int index = hashIndex(str); 
    hashEntry *entry = hashTable[index];  

    while (entry) {  
        if (strcmp(entry->str, str) == 0) {  
            printf("Key: %s, Value: %.1f\n", entry->str, entry->value);
            return entry->value;  
        }
        entry = entry->next;  
    }

    printf("Key '%s' not found in hash table.\n", str);
    return -1; 
}


int main(){
hashEntry **hashTable = calloc(TABLE_SIZE, sizeof(hashEntry*));

insert(hashTable, "apple", 0.3);
insert(hashTable, "ban", 1.1);
insert(hashTable, "orange", 0.9);

printf("Protein in 'orange':%0.1lf \n", search(hashTable, "orange"));
}