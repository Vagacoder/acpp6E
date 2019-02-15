//Reads in 5 scores and shows how much each
//score differs from the highest score.
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main( )
{
    int i, score[5], max;
    char* word = "word";

    cout << "Enter 5 scores:\n";
    cin >> score[0];
    max = score[0];
    for (i = 1; i < 5; i++)
    {
        cin >> score[i];
        if (score[i] > max)
            max = score[i];
        //max is the largest of the values score[0],..., score[i].
    }

    cout << "The highest score is " << max << endl
         << "The scores and their\n"
         << "differences from the highest are:\n";
    for (i = 0; i < 5; i++)
        cout << score[i] << " off by "
             << (max - score[i]) << endl;

    // test out of boundary of array
    cout << "Let's step out of boundary score[5] is " << score[5] << endl;
    cout << "Let's step out of boundary score[6] is " << score[6] << endl;
    cout << "Let's step out of boundary word[4] is " << word[4] << endl;
    cout << "Let's step out of boundary word[5] is " << word[5] << endl;
    cout << "Size of word is " << sizeof(word) << endl;
    return 0;
}
