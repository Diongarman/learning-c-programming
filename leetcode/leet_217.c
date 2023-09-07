#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


#define TABLE_SIZE 1000

typedef struct Node {
    int key;
    struct Node* next;
} Node;

typedef struct HashTable {
    Node* table[TABLE_SIZE];
} HashTable;

HashTable* createHashTable() {
    HashTable* newTable = (HashTable*)malloc(sizeof(HashTable));
    for(int i = 0; i < TABLE_SIZE; i++) {
        newTable->table[i] = NULL;
    }
    return newTable;
}

int hash(int key) {
    return key % TABLE_SIZE;
}

Node* createNode(int key) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = NULL;
    return newNode;
}

void insert(HashTable* hashTable, int key) {
    int hashIndex = hash(key);
    Node* newNode = createNode(key);
    if(!hashTable->table[hashIndex]) {
        hashTable->table[hashIndex] = newNode;
    } else {
        Node* temp = hashTable->table[hashIndex];
        while(temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int search(HashTable* hashTable, int key) {
    int hashIndex = hash(key);
    Node* temp = hashTable->table[hashIndex];
    while(temp) {
        if(temp->key == key) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

void delete(HashTable* hashTable, int key) {
    int hashIndex = hash(key);
    Node* temp = hashTable->table[hashIndex];
    Node* prev = NULL;
    while(temp) {
        if(temp->key == key) {
            if(prev) {
                prev->next = temp->next;
            } else {
                hashTable->table[hashIndex] = temp->next;
            }
            free(temp);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}

void freeTable(HashTable* hashTable) {
    for(int i = 0; i < TABLE_SIZE; i++) {
        Node* temp = hashTable->table[i];
        while(temp) {
            Node* toDelete = temp;
            temp = temp->next;
            free(toDelete);
        }
    }
    free(hashTable);
}

bool containsDuplicate(int* nums, int numsSize) {
    HashTable* hashTable = createHashTable();
    for(int i = 0; i < numsSize; i++) {
        if(search(hashTable, nums[i])) {
            return true;
        }
        insert(hashTable, nums[i]);
    }
    return false;
}


int main() {
    // Test Case 1: Array with no duplicates
    int arr1[] = {1, 2, 3, 4, 5};
    printf("%d\n",containsDuplicate(arr1, 5));

    // Test Case 2: Array with duplicates
    int arr2[] = {1, 2, 3, 4, 2};
    printf("%d\n",containsDuplicate(arr2, 5));

    // Test Case 3: Array with consecutive duplicates
    int arr3[] = {1, 1, 2, 3, 4};
    printf("%d\n",containsDuplicate(arr3, 5));

    // Test Case 4: Empty array
    int arr4[] = {};
    printf("%d\n", containsDuplicate(arr4, 0));

    // Test Case 5: Array with single element
    int arr5[] = {1};
    printf("%d\n", containsDuplicate(arr5, 1));

    // Test Case 6: Array with negative numbers and duplicates
    int arr6[] = {-1, -2, -3, -1};
    printf("%d\n", containsDuplicate(arr6, 4));

    return 0;
}
