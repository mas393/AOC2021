#include <iostream>

int main()
{
  FILE *fin = fopen("input.txt", "r");
  int a, b, c, d;
  int tot = 0;
  
  fscanf(fin, "%d", &a);
  fscanf(fin, "%d", &b);
  fscanf(fin, "%d", &c);
  
  while(!feof(fin))
    {
      fscanf(fin, "%d", &d);
      if ((b + c + d) > (a + b + c)) tot++;
      a = b;
      b = c;
      c = d;
    }
  
  std::cout << "result is " << tot << "\n";
  fclose(fin);
  return 1;
}
