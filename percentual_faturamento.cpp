#include <stdio.h>

int main() {
    float faturSP = 67836.43;
    float faturRJ = 36678.66;
    float faturMG = 29229.88;
    float faturES = 27165.48;
    float faturOutros = 19849.53;
    
    float total_mensal = faturSP + faturRJ + faturMG + faturES + faturOutros;
    
    float percentSP = (faturSP / total_mensal) * 100;
    float percentRJ = (faturRJ / total_mensal) * 100;
    float percentMG = (faturMG / total_mensal) * 100;
    float percentES = (faturES / total_mensal) * 100;
    float percentOutros = (faturOutros / total_mensal) * 100;
    
    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", percentSP);
    printf("RJ: %.2f%%\n", percentRJ);
    printf("MG: %.2f%%\n", percentMG);
    printf("ES: %.2f%%\n", percentES);
    printf("Outros: %.2f%%\n", percentOutros);
    
    return 0;
}
