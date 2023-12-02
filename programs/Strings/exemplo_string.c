#include <stdio.h>
#include <stdlib.h>

#include <string.h>


char exp[10] = "exemplo";
char exp1[5] = "123";
char exp2[5] = "456";
char exp_copia[10] = "exemplo";
char exp_copiado[50];
char exp_cat[50] = "concatenando_com_";


int main(){
    // Exemplo strcpy():

    strcpy(exp_copiado , exp1);
    printf("Exemplo strcpy():\n");
    printf(exp_copiado);                // o resultado será a cópia do exp1, sendo exp_copiado, uma cópia da string

    printf("\n\n"); 

    // Exemplo strcat():

    strcat(exp_cat, exp2);
    printf("Exemplo strcat():\n");
    printf(exp_cat);                    // o resultado será a junção das duas strings que concatenaram, ou seja '123456'

    printf("\n\n");

    // Exemplo strcmp():

    printf("Exemplo strcmp():\n");
    int res = strcmp(exp , exp_copia);
    printf("%d", res);                   // o resultado será 0 pois as strings são iguais
    printf("\n");
    res = strcmp(exp , exp2);
    printf("%d", res);                   // o resultado será diferente de 0 pois as strings são diferentes
                                         // a questão de ser maior ou menor do que 0, varia em relação a qual string possui letras com maior 'valor'

    printf("\n\n");

    // Exemplo strtok():

    char exp_token[1000] = "Isso eh um exemplo de transformacao em token";
    printf("Exemplo strltok():\n");
    char *tok1;
    tok1 = strtok(exp_token, " ,");
     while (tok1 != NULL)
  {
    printf ("%s\n", tok1);
    tok1 = strtok (NULL, " ,.-");
  }                                      // a transformação em token é basicamente a divisão de uma string em menores
                                         // e a divisão tem como separador o segundo parâmetro da função

    printf("\n\n");

    // Exemplo strlen():
    
    printf("Exemplo strlen():\n");
    res = strlen(exp);
    printf("%d\n", res);                   // o resultado será o número de letras em exp que é 7
    res = strlen(exp_token);
    printf("%d", res);                   // o resutlado será o número de letras em exp_token que é 4, pois nesse caso só está contando o "Isso", primeiro token

}

