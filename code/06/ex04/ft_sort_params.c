int len(char *s1)
{
    int i = 0;
    while(s1[i] != "\0")
      i++;
    return i;
}
void compare(char *s1, char *s2)
{
    int min;
    char **tmp;
    if(len(s1) > len(s2))
    {
        min = len(s2);
    }
    else
    {
        min = len(s1);
    }
    for(int i = 0; i < min ; i++)
    {
      if(s1[i] > s2[i])
      {
          tmp = &s2;
          &s2 = &s1;
          &s1 = &tmp;
      }
    }
    if(len(s1) > len(s2))
    {
      tmp = &s2;
      &s2 = &s1;
      &s1 = &tmp;
    }
}

int main(int argc, char *argv[])
{
  int i;
  int j;

  for(i = 0; i < argc ; i++)
  {
    for(j = 0 ; j < argc; j++)
    {
        compare(argv[i],argv[j]);
    }
  }
  
  return 0;
}
