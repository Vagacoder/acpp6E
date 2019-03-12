// This is file sort.cpp

template<class T>
void sort(T a[], int numberUsed)
{
    int indexOfNextSmallest;
    for (int index = 0; index < numberUsed - 1; index++)
    {//Place the correct value in a[index]:
         indexOfNextSmallest =
              indexOfSmallest(a, index, numberUsed);
         swapValues(a[index], a[indexOfNextSmallest]);
      //a[0] <= a[1] <=...<= a[index] are the smallest of the original array
      //elements. The rest of the elements are in the remaining positions.
    }
}

template<class T>
void swapValues(T& variable1, T& variable2)
{
      T temp;

      temp = variable1;
      variable1 = variable2;
      variable2 = temp;
}

template<class T>
int indexOfSmallest(const T a[], int startIndex, int numberUsed)
{
    T min = a[startIndex];
    int indexOfMin = startIndex;

    for (int index = startIndex + 1; index < numberUsed; index++)
        if (a[index] < min)
        {
            min = a[index];
            indexOfMin = index;
            //min is the smallest of a[startIndex] through a[index]
        }

    return indexOfMin;
}

