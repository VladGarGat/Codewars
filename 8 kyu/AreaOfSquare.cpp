double square_area(double A)
{
	const double pi = 3.14159265358979323846;
	double t = ((2 * A) / pi) * ((2 * A) / pi);
	return int(t * 100 + 0.5) / 100.0;
}
