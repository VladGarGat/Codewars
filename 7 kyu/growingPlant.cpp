int growingPlant(int upSpeed, int downSpeed, int desiredHeight)
{
  int day=1, height=0;
  while (height < desiredHeight)
  {
    height += upSpeed;
    if (height >= desiredHeight) return day;
    height -= downSpeed;
    day++;
  }
  return 0;
}
