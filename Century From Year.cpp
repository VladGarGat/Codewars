int centuryFromYear(int year)
{
  int century = year / 100;
  if (year % 100 != 0) { return century+1; }
  else { return century; }
}
