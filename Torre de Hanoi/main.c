#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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
            return 0; // Não está ordenado corretamente
        }
        current = current->next;
    }
    return 1; // Vitória
}

int isDefeat(Stack* towerA, Stack* towerB, Stack* towerC) {
    return (towerA->top == NULL && towerB->top == NULL && towerC->top == NULL);
}

void moveDisc(Stack* source, Stack* target, int* moveCount) {
    int disk = pop(source);
    push(target, disk);
    (*moveCount)++;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int continuarJogando = 1; // Variável para controle do loop principal

    while (continuarJogando) {
        Stack towerA, towerB, towerC;

        initializeStack(&towerA);
        initializeStack(&towerB);
        initializeStack(&towerC);

        int numDiscs = 3;
        for (int i = numDiscs; i > 0; --i) {
            push(&towerA, i);
        }

        int moveCount = 0; // Contador de movimentos

        while (1) {
            printTowers(&towerA, &towerB, &towerC);

            // Verificar condições de vitória ou derrota
            if (isVictory(&towerC, numDiscs)) {
                printf("Parabéns! Você venceu em %d movimentos!\n", moveCount);
                break;
            }

            if (isDefeat(&towerA, &towerB, &towerC)) {
                printf("Game Over! Você perdeu!\n");
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
                    printf("Torre de origem inválida!\n");
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
                    printf("Torre de destino inválida!\n");
                    continue;
            }

            // Realizar o movimento se válido
            if (source->top == NULL) {
                printf("Erro: A torre de origem está vazia!\n");
            } else if (target->top != NULL && source->top->data > target->top->data) {
                printf("Erro: Movimento inválido! O disco não pode ser colocado sobre um disco menor.\n");
            } else {
                moveDisc(source, target, &moveCount);
            }
        }

        // Perguntar ao jogador se deseja continuar jogando
        printf("Deseja continuar jogando? (1 - Sim, 0 - Não): ");
        scanf("%d", &continuarJogando);

        // Limpar o buffer de entrada para evitar problemas com scanf
        while (getchar() != '\n');
    }

    return 0;
}

