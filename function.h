#include "datatype.h"

// nguyen mau ham
void displayMenu();
void printstore(Store store[], int length);  
void addstore(Store stores[], int *length);  
void dateStore(Store store[], int length);  
void deleteStore(Store store[], int *length); 
void searchStoreByName(Store store[], int length);  
void toLowerCase(char str[]);
void sorStoresByrice(Store stores[], int length, int ascending);  
void saveStoreoFile(Store store[], int length);  
void loadStoreFromFile(Store stores[], int *length);  
