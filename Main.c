#include<stdio.h>

int main(){
double v1[]={
0.3,
725913,
0.015,
0.05504,
0.32308,
0.04643,
0.01791,
0.09555,
0.39,
0.58513,
13344,
303123,
0.009,
0.01533,
0.42526,
0.015,
0.01743,
0.32114,
0.26301,
0.14846,
0.698,
0.01818,
0.14657,
0.05495,
0.01181,
0.00891,
0.17393,
0.021,
0.09156,
0.20862,
0.01022,
0.022,
0.02102,
0.008,
0.46,
0.11472,
0.35971,
57229,
0.1165,
0.6859,
0.305,
0.0315,
0.00571,
0.02432,
0.008,
0.6313,
0.27812,
0.00375,
0.024,
0.016,
0.014,
0.58808,
228549,
226848,
0.009,
0.06805,
0.01393,
0.03401,
0.07161,
0.359821,
0.00863,
0.01114,
0.34621,
0.20094,
0.30128,
0.00272,
0.025,
0.128,
1.15,
0.31238,
0.001,
0.01689,
0.08,
0.10712,
0.01981,
0.065,
0.015,
1.98,
0.15,
15,
0.0069,
5074,
5004,
0.75,
1.63,
1399,
0.3,
48107,
0.025,
44028,
0.00513,
2.05,
0.13584,
1.17,
0.13824,
0.00566,
590453,
0.41415,
0.02264,
0.005,
1158,
0.03,
1.4,
0.03113,
0.015,
0.00283,
1425,
6516968,
0.1,
7761243,
42016,
2395898,
17583601,
369021,
3643392,
3807985,
54112,
0.92488,
244059,
1422688,
327.36,
42737184,
111324,
245304,
5884092,
173016,
9755,
13.5,
3.09,
47625,
172692,
30.24,
43273918,
8219,
4846146,
159471,
3517992,
70.29,
144.54,
660996,
30768012,
2198745,
1038708,
0.765,
0.70544,
0.24601,
210735,
231397,
0.0633,
0.14208,
0.0405,
0.1112,
0.82693,
0.012,
0.075,
0.40462,
173335,
128838,
0.7785,
0.66686,
0.01415,
0.00362,
0.022,
0.05576,
0.91108,
255162,
0.005,
134984,
0.01524,
0.04,
0.00698,
0.03568,
0.046,
0.12755,
0.004,
160685,
0.37563,
0.015,
0.238,
0.0949,
0.00447,
0.14167,
0.01989,
0.13152,
0.00934,
0.33746,
0.018,
0.075,
0.04572,
0.0113,
0.04,
0.02075,
0.0072,
0.40751,
0.02742
};

int longitud=sizeof(v1)/sizeof(v1[0]);
int indice;
printf("el tamano del vector es: %d\n",longitud);

    float mayor, menor;
    int min_index, men,max_index, min_val, max_val;
    mayor = menor = v1[0] ;

    for (int i = 1; i < sizeof(v1) / sizeof(v1[0]); ++i)
    {
        if (v1[i] < menor) menor = v1[i] ; 
        if (v1[i] > mayor) mayor = v1[i] ;
    }
    printf("El mayor es %f y el menor es %f\n", mayor, menor);

	void find_max(double v1[], int size, double *max_val, int *max_index) {
    *max_val = v1[0];
    *max_index = 0;
    for (int i = 1; i < size; i++) {
        if (v1[i] > *max_val) {
            *max_val = v1[i];
            *max_index = i;
        }
    }
}
void find_max_index(double v1[], int size, int *max_index) {
    double max_val = v1[0];
    *max_index = 0;
    for (int i = 1; i < size; i++) {
        if (v1[i] > max_val) {
            max_val = v1[i];
            *max_index = i;
        }
    }
}
void find_min(double v1[], int size, double *min_val, int *min_index) {
    *min_val = v1[0];
    *min_index = 0;
    for (int i = 1; i < size; i++) {
        if (v1[i] < *min_val) {
            *min_val = v1[i];
            *min_index = i;
        }
    }
}
void find_min_index(double v1[], int size, int *min_index) {
    double min_val = v1[0];
    *min_index = 0;
    for (int i = 1; i < size; i++) {
        if (v1[i] > min_val) {
            min_val = v1[i];
            *min_index = i;
        }
    }
}

find_max(v1,sizeof(v1)/sizeof(v1[0]),&max_val,&max_index);
find_max_index(v1,sizeof(v1)/sizeof(v1[0]),&max_index);
find_min(v1,sizeof(v1)/sizeof(v1[0]),&min_val,&min_index);
printf("\n El valor del indice del menor es: %d\n",min_index);
printf("EL valor del indice del mayor es: %d\n\n",max_index);

return 0;
}