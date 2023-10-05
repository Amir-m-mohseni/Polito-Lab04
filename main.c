int f (char *, char *);
int main(void) {
 char *s1 = "first-string";
 char *s2 = "second-string";
 fprintf (stdout, " - %d", f (s1, s2));
 return (1);
}
int f (char *s1, char *s2) {
 int i, j, n;
 n = 0;
 for (i=0; i<strlen (s1); i++) {
 for (j=0; j<strlen (s2); j++) {
 if (s1[i]==s2[j]) {
 n++;
 printf ("%c", s1[i]);
 break;
 }
 }
 }
 return (n);
}