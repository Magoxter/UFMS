/* Quadrado */

#import <stdio.h>

int permQuad (int lado);
int areaQuad (int lado);

int main (void) {

    int lado,
        area,
        perimetro;

    printf("Lado do Quadrado: ");
    scanf ("%d", &lado);

    area = areaQuad(lado);
    perimetro = permQuad(lado);

    printf("Area:      %d\n", area);
    printf("Perimetro: %d\n", perimetro);

    return 0;
}

int areaQuad(int lado) {
    int area;

    area = lado*lado;

    return area;
}

int permQuad(int lado) {
    int perim;

    perim = 4*lado;

    return perim;
}
