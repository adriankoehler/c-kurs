int power (int base, int exponent) {
  if (exponent == 0)
    return 1;
return base ∗ power(base, exponent−1);
}

int main(){
  int res = power(2,3);
  printf("%d\n", res);
  return 0
}
