#include <stdio.h>

struct fichaCadastral1 {
    char nome [100];
    int Matricula;
    float Nota; 
    } ; 

int main() {

    struct fichaCadastral1 Alunos; {

    printf("Nome do aluno: ");
    scanf("%[^\n]", Alunos.nome);

    printf("Matricula: ");
    scanf("%i", &Alunos.Matricula);
    
    printf("Nota: ");
    scanf("%f", &Alunos.Nota);
    
    
    printf("\n--- Cadastro Concluido ---\n");
    printf("Nome: %s\n", Alunos.nome);
    printf("Matricula: %d\n", Alunos.Matricula);
    printf("Nota: %.2f\n", Alunos.Nota);
        
    }

    return 0;
}
