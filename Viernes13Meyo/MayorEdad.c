#include <stdio.h>

#include <stdio.h>

int main() {

    int   edad;
    float promedio;
    int   reprobadas;
    int   faltas;

    printf("Edad: ");
    scanf("%d", &edad);

    printf("Promedio: ");
    scanf("%f", &promedio);

    printf("Materias reprobadas: ");
    scanf("%d", &reprobadas);

    printf("Faltas acumuladas: ");
    scanf("%d", &faltas);

    printf("\n============================================\n");
    printf("             RESULTADOS\n");
    printf("============================================\n");

    printf("\n>> ESTADO DE REINSCRIPCION:\n");

    if (reprobadas > 3) {
        printf("   No puede reinscribirse.\n");
    } else if (reprobadas == 3) {
        printf("   Requiere revision especial.\n");
    } else {
        printf("   Puede reinscribirse.\n");
    }

    printf("\n>> ELEGIBILIDAD PARA BECA:\n");

    if (promedio >= 9.0) {
        if (reprobadas == 0) {
            if (faltas < 5) {
                printf("   Elegible para solicitar beca.\n");
            } else {
                printf("   No elegible: excede el limite de faltas.\n");
            }
        } else {
            printf("   No elegible: tiene materias reprobadas.\n");
        }
    } else {
        printf("   No elegible: promedio insuficiente.\n");
    }

    printf("\n>> SITUACION CRITICA:\n");

    if (promedio < 6.0 || reprobadas > 4 || faltas > 15) {
        printf("   ALERTA: El estudiante esta en situacion critica.\n");
        printf("   Se recomienda orientacion academica de inmediato.\n");
    } else {
        printf("   Sin situacion critica detectada.\n");
    }

    printf("\n============================================\n");
    printf("           FIN DEL ANALISIS\n");
    printf("============================================\n");

    return 0;
}
________6_____________6________
_______66_____________66_______
_____6666_____________6666_____
____66666_____________66666____
___666666_____666_____666666___
__6666666_____666_____6666666__
__666666666666666666666666666__
__666666666666666666666666666__
__6666666_____666_____6666666__
___666666_____666_____666666___
____66666_____666_____66666____
_____6666_____666_____6666_____
_______66_____666_____66_______
________6_____666_____6________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
_____________66666_____________
_____________66666_____________
_____________66666_____________
