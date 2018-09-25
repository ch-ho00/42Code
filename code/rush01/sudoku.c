/*
./sudoku "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68."
".9..5.741" "47......." | cat -e
*/
int len(char * str)
{
  int out = 0;
  while(str[out] != '\0')
    out++;
  return out;
}
int *possible(int **board, int x, int y)
{
    int exist[] = [0,0,0,0,0,0,0,0,0];
    int i = 0;
    int j = 0;
    while (i != 9)
    {
      if(board[i][y] != 0 && i != x)
        exist[board[i][y] - 1]++;
      i++;
    }
    while (j != 9)
    {
      if(board[x][j] != 0 && j != y)
        exist[board[x][j] - 1]++;
      j++;
    }
    i = (x / 3) * 3;
    j = (y / 3) * 3;
    while (i < (x / 3) * 3 + 3)
    {
      while (j < (y / 3) * 3 + 3)
      {
        if(board[i][j] != 0 && j != y && i != x)
          exist[board[x][j] - 1]++;
        j++;
      }
      i++;
    }
    i = 0;
    j = 0;
    while (i < 9)
    {
      if (!exist[i])
        j++;
      i++;
    }
    int *out = (int *)malloc(sizeof(int) * j);
    i = 0;
    j = 0;
    while(i < 9)
    {
      if(!exist[i])
      {
        out[j] = i + 1;
        j++;
      }
      i++;
    }
    return out;
}
int empty(int **board)
{
  int i = 0;
  int j = 0;

  while (i < 9)
  {
    while (j < 9)
    {
      if(board[i][j] == 0)
        return 1;
      j++;
    }
    i++;
  }
  return 0;
}
void sudoku(int **board)
{
  int i = 0;
  int j = 0;
  int *plist;

  if (!empty(board))
  {
    while (i < 9)
    {
      while (j < 9)
      {
          write(board[i][j] + ' ');
          j++;
      }
      write('\n');
      i++;
    }
  }
  else
  {
    while(i < 9)
    {
      while(j < 9)
      {
        if(board[i][j] == 0)
          break;
        j++;
      }
      if(board[i][j] == 0)
        break;
      i++;
    }
    plist = possible(board);
    for(int tmp = 0 ; tmp < sizeof(plist)/sizeof(int); tmp++)
    {
      board[i][j] = plist[tmp];
      sudoku(board);
    }
  }
}
int main(int argc, char *argv[])
{
  int tmp = 0;
  int i = 0;
  int j = 0;
  int **board = (int **)malloc(sizeof(int *) * argc);
  while(tmp < argc)
  {
      board[tmp] = (int *)malloc(sizeof(int) * len(argv[tmp]));
      tmp++;
  }
  while(i < 9)
  {
    while(j < 9)
    {
      board[i][j] = argv[i][j] - 48;
      j++;
    }
    i++;
  }
  sudoku(str);
  return 0;
}
