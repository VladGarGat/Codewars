#include <iostream>
#include <string>
using namespace std;

string DNAStrand(string dna)
{
    for (int i = 0; i < dna.length(); i++)
        if (dna[i] == 'A') dna.replace(i, 1, "T");
        else if (dna[i] == 'T') dna.replace(i, 1, "A");
        else if (dna[i] == 'G') dna.replace(i, 1, "C");
        else if (dna[i] == 'C') dna.replace(i, 1, "G");
    return dna;
}
