#include <iostream>
#include <string.h>

int main()
{
  FILE *fin = fopen("input.txt", "r");

  int x = 0;
  int y = 0;
  int aim = 0;

  char *cmd = (char *)malloc(7);
  int v;
  fscanf(fin, "%s %d", cmd, &v);  
  while(!feof(fin))
    {
      if (!strcmp(cmd, "forward"))
	{
	  x += v;
	  y += (aim * v);
	}
      else if (!strcmp(cmd, "down")) aim += v;
      else if (!strcmp(cmd, "up")) aim -= v;
      else std::cout << cmd << "\n";
      
      fscanf(fin, "%s %d", cmd, &v);
    }

  free(cmd);
  std::cout << "x = " << x << "\n";
  std::cout << "y = " << y << "\n";
  std::cout << "result = " << (x * y) << "\n";
  
  fclose(fin);
  return 1;
}
