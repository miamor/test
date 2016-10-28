int main() {
  float a, b, x2, c, x1;
  scanf("%f%f%f", & a, & b, & c);
  fflush(stdin);
  if (a != 0) {
    if (gptb2(a, b, c, & x1, & x2) != -1) {
      printf("%.2f", x1);
      printf("\n%.2f", x2);
    } else {
      printf("NaN");
    }
  } else {
    printf("%.2f", -c / b);
  }
  return 0;
}
int gptb2(float a, float b, float c, float * x1, float * x2) {
  float del;
  del = b * b - (4 * a * c);
  if (del < 0) {
    return -1;
  } else { * x1 = (-b - sqrt(del)) / (2 * a); * x2 = (-b + sqrt(del)) / (2 * a);
  }
  return 1;
}
