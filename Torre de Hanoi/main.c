
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>  // Adicionado para suporte a localiza��o

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} Stack;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void initializeStack(Stack* stack) {
    stack->top = NULL;
}

void push(Stack* stack, int data) {
    Node* newNode = createNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(Stack* stack) {
    if (stack->top == NULL) {
        return -1; // Pilha vazia
    }

    Node* temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    free(temp);

    return data;
}

void printTowers(Stack* towerA, Stack* towerB, Stack* towerC) {
    printf("Torre A: ");
    Node* currentA = towerA->top;
    while (currentA != NULL) {
        printf("%d ", currentA->data);
        currentA = currentA->next;
    }

    printf("\nTorre B: ");
    Node* currentB = towerB->top;
    while (currentB != NULL) {
        printf("%d ", currentB->data);
        currentB = currentB->next;
    }

    printf("\nTorre C: ");
    Node* currentC = towerC->top;
    while (currentC != NULL) {
        printf("%d ", currentC->data);
        currentC = currentC->next;
    }

    printf("\n\n");
}

int isVictory(Stack* towerC, int numDiscs) {
    Node* current = towerC->top;
    for (int i = 1; i <= numDiscs; ++i) {
        if (current == NULL || current->data != i) {
            return 0; // N�o est� ordenado corretamente
        }
        current = current->next;
    }
    return 1; // Vit�ria
}

int isDefeat(Stack* towerA, Stack* towerB, Stack* towerC) {
    return (towerA->top == NULL && towerB->top == NULL && towerC->top == NULL);
}

void moveDisc(Stack* source, Stack* target) {
    int disk = pop(source);
    push(target, disk);
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");  // Configurar a localiza��o

    Stack towerA, towerB, towerC;

    initializeStack(&towerA);
    initializeStack(&towerB);
    initializeStack(&towerC);

    int numDiscs = 3;
    for (int i = numDiscs; i > 0; --i) {
        push(&towerA, i);
    }

    while (1) {
        printTowers(&towerA, &towerB, &towerC);

        // Verificar condi��es de vit�ria ou derrota
        if (isVictory(&towerC, numDiscs)) {
            printf("Parab�ns! Voc� venceu!\n");
            break;
        }

        if (isDefeat(&towerA, &towerB, &towerC)) {
            printf("Game Over! Voc� perdeu!\n");
            break;
        }

        // Solicitar a jogada do jogador
        printf("Escolha a torre de origem (A, B, C): ");
        char sourceTower;
        scanf(" %c", &sourceTower);

        printf("Escolha a torre de destino (A, B, C): ");
        char targetTower;
        scanf(" %c", &targetTower);

        Stack* source = NULL;
        Stack* target = NULL;

        // Atribuir as torres escolhidas
        switch (sourceTower) {
            case 'A':
                source = &towerA;
                break;
            case 'B':
                source = &towerB;
                break;
            case 'C':
                source = &towerC;
                break;
            default:
                printf("Torre de origem inv�lida!\n");
                continue;
        }

        switch (targetTower) {
            case 'A':
                target = &towerA;
                break;
            case 'B':
                target = &towerB;
                break;
            case 'C':
                target = &towerC;
                break;
            default:
                printf("Torre de destino inv�lida!\n");
                continue;
        }

        // Realizar o movimento se v�lido
        if (source->top == NULL) {
            printf("Erro: A torre de origem est� vazia!\n");
        } else if (target->top != NULL && source->top->data > target->top->data) {
            printf("Erro: Movimento inv�lido! O disco n�o pode ser colocado sobre um disco menor.\n");
        } else {
            moveDisc(source, target);
        }
    }

    return 0;
}

