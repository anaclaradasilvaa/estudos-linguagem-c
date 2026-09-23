#include <stdio.h>
int main() {
    float peso;
    int idade, gestacao;
    int podeVermifugar, temDesconto;

    float doseVacina, doseEspecial, doseVacinaTotal, valorVacina;
    float doseVermifugo, doseVermifugoTotal, valorVermifugo;
    float valorConsulta, valorTotal;

    printf("Digite o peso do animal: ");
    scanf("%f", &peso);

    printf("Digite a idade do animal: ");
    scanf("%d", &idade);

    printf("O animal esta gestante? (1-Sim / 0-Nao): ");
    scanf("%d", &gestacao);

    // Cálculos da Vacina
    doseVacina=(peso/100 + 1)*5;
    doseEspecial = (idade < 1) * (peso * 0.5);
    doseVacinaTotal= doseVacina + doseEspecial;
    valorVacina = (doseVacinaTotal * 1.0) + doseEspecial;

    //Cálculos do Vermífugo
    podeVermifugar=(idade >= 1) * (idade <= 25) * (1 - gestacao);
    doseVermifugo = (peso/200 +1);
    doseVermifugoTotal= doseVermifugo * podeVermifugar;
    valorVermifugo = doseVermifugoTotal * 10.0;

    //Cálculos do Valor Final
    temDesconto= (doseVacinaTotal > 0) * (doseVermifugoTotal > 0);
    valorConsulta= 300.0 - (temDesconto * 45);
    valorTotal= valorConsulta + valorVacina + valorVermifugo;

    printf("Dose total da vacina: %.2f ml\n", doseVacinaTotal);
    printf("Valor da vacinacao: R$ %.2f\n", valorVacina);
    printf("Dose total do vermifugo: %.2f L\n", doseVermifugo);
    printf("Valor do vermifugo: R$ %.2f\n", valorVermifugo);
    printf("Valor total a cobrar: R$ %.2f\n", valorTotal);

    return 0;

}
