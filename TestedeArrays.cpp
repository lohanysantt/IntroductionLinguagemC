#include <stdio.h>

int main() { 
struct aluno {
int matricula;
float nota1, nota2, nota3;

};
struct aluno alunos [50];
int cont = 0;
float media;
int i;
do {

printf ("digite aqui sua matricula: ", cont+1);
scanf ("%d", &alunos[cont].matricula);
printf ("primeira nota do aluno %d " , cont +1);
scanf ("%f", &alunos[cont].nota1);
printf ("segunda nota do aluno %d ", cont +1);
scanf ("%f", &alunos[cont].nota2);
printf ("terceira nota do aluno %d ", cont +1);
scanf ("%f", &alunos[cont].nota3);
cont ++;
}
while 
(cont <50 && alunos [cont-1].matricula > 0);
i=0;
while (alunos[i].matricula > 0 && i <50) {
	printf ("\n\nMatricula: %d ", alunos[i].matricula);
	media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
	printf ("Media: %.2f ", media);
	i++;
}
}

//

