#include <iostream>
#include "ColorCoderManual.h"

#define MAXIMUM_PAIR_NUMBER 25

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

    void printColorCoderManual(colorCoderManualInterface &colorCoderManualObject)
    {
         std::cout<<"PairNo\tMajorColor\tMinorColor\n";
         for(int pairNumberIterator=1; pairNumberIterator<=MAXIMUM_PAIR_NUMBER; pairNumberIterator++)
         {
             ColorPair colorPair=GetColorFromPairNumber(pairNumberIterator);
             std::string textTodisplay=colorCoderManualObject.colorCoderPairDisplayFormatter(pairNumberIterator,colorPair);
             colorCoderManualObject.printDataOnconsole(textTodisplay);
         }           
    }
}
