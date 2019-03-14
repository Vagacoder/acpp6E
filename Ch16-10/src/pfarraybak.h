//This is the header file pfarraybak.h. This is the interface for the template
//class PFArrayBak. Objects of this type are partially filled arrays of any type T.
//This version allows the programmer to make a backup copy and restore
//to the last saved copy of the partially filled array.
#ifndef PFARRAYBAK_H
#define PFARRAYBAK_H
#include "pfarray.h"

namespace PFArraySavitch
{
    template<class T>
    class PFArrayBak : public PFArray<T>
    {
    public:
        PFArrayBak( );
        //Initializes with a capacity of 50.

        PFArrayBak(int capacityValue);

        PFArrayBak(const PFArrayBak<T>& Object);

        void backup( );
        //Makes a backup copy of the partially filled array.

        void restore( );
        //Restores the partially filled array to the last saved version. 
        //If backup has never been invoked, this empties the partially filled array.

        PFArrayBak<T>& operator =(const PFArrayBak<T>& rightSide);

        virtual ~PFArrayBak( );
    private:
        T *b; //for a backup of main array.
        int usedB; //backup for inherited member variable used.
    };

}// PFArraySavitch
#endif //PFARRAY_H
