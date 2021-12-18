using namespace std;
string no_space(string x)
{
  string nospace = "";
  char current = 0;
  for (int i = 0; i < x.length(); i++)
  {
    if (x[i] == ' ') nospace += "";
    else nospace += x[i];
  }
  return nospace;
}
