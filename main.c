#include <stdio.h>
#include <locale.h>

char main()
{
    setlocale(LC_ALL, "Portuguese");
    int peso;
    float altura , imc;
    printf("Informe sua a altura em cm:");
    scanf("%f", &altura);
    printf("Informe o seu peso em kg:");
    scanf("%d", &peso);
    altura = altura / 100;
    imc=peso/(altura*altura);
    printf("Sua altura � de %.2f\n", altura);
    printf("Seu peso � de %d \n", peso);
    printf("Seu imc � %.2f \n", imc);
    if (imc<18.5) printf(" Voc� est� abaixo do peso ideal para sua altura!");
    else if (imc<25) printf ("Seu peso est� ideal para sua altura!");
    else if (imc<30) printf ("Voc� est� um pouco acima do peso ideal para sua altura!");
    else if (imc<35) printf(" Voc� esta com obesidade grau I!");
    else if (imc<40) printf(" Voc� esta com obesidade grau II!");
    else printf ("Cuidado! Voc� est� com obesidade grau III!!!");
    getch();
    return 0;
}
