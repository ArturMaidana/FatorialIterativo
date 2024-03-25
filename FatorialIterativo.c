#include <stdio.h>

int main() {
    int n;
    int fat = 1;

    printf("Digite um número não negativo para calcular o fatorial: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("O fatorial não está definido para números negativos.\n");
        return -1;  
    }

    for (; n > 1; n--) {
        fat *= n;
    }
  
    if (fat != -1) {
        printf("O fatorial é: %d\n", fat);
    }

    return 0;
}
