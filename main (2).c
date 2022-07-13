#include <stdio.h>
#include <string.h>
int pos(char t[], char p[]) {
  int T, P, k=-1;

  T= strlen(t);
  P= strlen(p);

  if (P > T) {
    return -1;
  }

  for (int i=0; i<=T-P; i++) {
    k=i;

    for (int j=0; j<P;j++){
      if (p[j] == t[i]) {
        i++;
      }
      else {
        break;
      }
    if (j==P) {
      return k;
    }
}
}
}
int main() {
  char t[100], p[100];
  int k;

  printf("Text: ");
  gets(t);

  printf("Pattern: ");
  gets(p);

  k=pos(t, p);

  if (k!=-1) {
    printf("Pattern exists in Text at: %d", k);
  }
  else {
    printf("Pattern does not exist");
  }

  return 0;
}