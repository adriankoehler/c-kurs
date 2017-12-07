#include <stdio.h>

struct complex {
  float real;
  float imaginary;
};

struct complex add(struct complex complexNR, struct complex complexNR2){
  float resReal;
  float resIm;
  struct complex res;

  resReal = complexNR.real + complexNR2.real;
  resIm = complexNR.imaginary + complexNR2.imaginary;

  res.real = resReal;
  res.imaginary = resIm;

  return res;
}

int main() {
  struct complex complexNR;
  struct complex complexNR2;
  struct complex complexRES;
  
  // printf("Enter real part: ");
  // scanf("%f", &complexNR.real);
  // printf("Enter imaginary part: ");
  // scanf("%f", &complexNR.imaginary);
  // printf("%f + %fi\n", complexNR.real,complexNR.imaginary);

  puts("Nr. 1:");
  printf("Enter complex nr.: ");
  scanf("%f+%fi", &complexNR.real,&complexNR.imaginary);
  //printf("%f + %fi\n", complexNR.real,complexNR.imaginary);

  puts("Nr. 2:");
  printf("Enter complex nr.: ");
  scanf("%f+%fi", &complexNR2.real,&complexNR2.imaginary);
  //printf("%f + %fi\n", complexNR2.real,complexNR2.imaginary);

  complexRES = (add(complexNR,complexNR2));
  printf("= %f+%fi\n", complexRES.real, complexRES.imaginary);


  return 0;
}
