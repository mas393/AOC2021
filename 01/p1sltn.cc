#include <iostream>


int main()
{
  FILE *fin = fopen("input.txt", "r");

  int a, b;
  int tot = 0;
  fscanf(fin, "%d", &a);
  
  while (!feof(fin))
    {
      fscanf(fin, "%d", &b);
      if (b > a) tot++;
      a = b;
    }
  
  std::cout << "result is " << tot << "\n";

  fclose(fin);
  return 1;
}
