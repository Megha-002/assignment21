pubilic class countprimr{
    public int countprimes(int n)
  
  {
  boolean[]juge=new boolean[n+1];
  for (int=0;i<n+1;i++)
  {
  judge[i]=true;
  }
  for (int i=2;i<n;i++)
  {
  if (juge[i]
  {
  for(intj=i+i;j<n:j+=i)
  {
  jude[j]=false;
  }
  res++;
  }
  }
  return res;
  }
  }
  
