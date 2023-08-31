int eh_par(int numero) {
  if (numero % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int numero = 10;

  if (eh_par(numero)) {
    printf("O número %d é par", numero);
  } else {
    printf("O número %d é ímpar", numero);
  }

  return 0;
}

