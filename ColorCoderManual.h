#include <iostream>
#include <assert.h>
#include "colorCoderTypes.h"

class colorCoderManualInterface
{
public:
     virtual void printDataOnconsole(std::string text)=0;
     virtual std::string colorCoderPairDisplayFormatter(int pairNumber,TelCoColorCoder::ColorPair colorPair)=0;
};

class colorCoderManual: public colorCoderManualInterface
{
   public:
       void printDataOnconsole(std::string text)
       {
         std::cout << text <<"\n";
       } 

       std::string colorCoderPairDisplayFormatter(int pairNumber,TelCoColorCoder::ColorPair colorPair)
       {
           return std::to_string(pairNumber).append("\t\t\t").append(colorPair.ToString());
       }
};

class mockColorCoderManual: public colorCoderManualInterface
{
  public:
       int printCounter=0, formatCounter=0;

       void printDataOnconsole(std::string /*text*/)
       {
         printCounter++;
       } 

       std::string colorCoderPairDisplayFormatter(int /*pairNumber*/,TelCoColorCoder::ColorPair /*colorPair*/)
       {
           formatCounter++;
           return "";
       }
};
