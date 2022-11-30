#include <stdio.h>
void main(void)
{
	int dia, mes, annio;
	scanf_s("%i %i %i", &dia, &mes, &annio);
	//dado caso el ser el ultimo dia de cada mes contando año bisiestos 
	if ((dia == 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))) //dado caso de ser meses con 31 dias
		(dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) ||									 //dado caso de ser mese con 30 dias
		(dia == 29 && mes == 2 && (annio % 4 == 0 && 100 != 0 || annio % 400 == 0)) ||						//dado caso de ser año bisiesto
		(dia == 28 && mes == 2 && !(annio % 4 == 0 && annio % 100 != 0 || annio % 400 == 0));			   //dado caso de no ser año
	{
		//dado caso de ser diciembre
		dia = 1;
		if (mes == 12)
		{
			mes = 1;
			annio = annio + 1;
		}
		else
			mes = mes + 1;
	}
}