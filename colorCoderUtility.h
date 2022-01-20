#include <iostream>
#include "colorCoderTypes.h"

namespace TelCoColorCoder
{
   ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    void printColorCoderManual()
    {
         std::cout<<"PairNo\tMajorColor\tMinorColor\n";
         for(int majorColorIterator=0; majorColorIterator<numberOfMajorColors; majorColorIterator++)
         {
             for(int minorColorIterator=0; minorColorIterator<numberOfMinorColors; minorColorIterator++)
             {
                 std::cout<<GetPairNumberFromColor((MajorColor)majorColorIterator, (MinorColor)minorColorIterator)<<"\t\t\t"<<MajorColorNames[majorColorIterator]<<"\t\t\t"<<MinorColorNames[minorColorIterator]<<"\n";
              }
          }           
    }

}
