std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
  if(n==0){return result;}
  result.push_back(signature.at(0));
  if(n==1){return result;}
  result.push_back(signature.at(1));
  if(n==2){return result;}
  result.push_back(signature.at(2));
  if(n==3){return result;}
  int i =3;
  do
  {
    result.push_back(result.at(i-3)+result.at(i-2)+result.at(i-1));
    i++;
  } while(i<n);
  
  return result;
}
