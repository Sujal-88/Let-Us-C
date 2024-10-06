#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 50000
#define MAXK 100


void get_signature(char* str, int k, char* signature) {
    for (int i = 0; i < k - 1; i++) {
        int diff = (str[i + 1] - str[i] + 26) % 26;
        signature[i] = 'a' + diff; 
    }
    signature[k - 1] = '\0';  
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    char string[MAXN][MAXK + 1];
    char signature[MAXN][MAXK];
  
    for (int i = 0; i < n; i++) {
        scanf("%s", string[i]);
        get_signature(string[i], k, signature[i]);  
    }

    
    int modak_boxes = 0;
    
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(signature[i], signature[j]) == 0) {
                modak_boxes++;
            }
        }
    }

    
    printf("%d\n", modak_boxes);

    return 0;
}
