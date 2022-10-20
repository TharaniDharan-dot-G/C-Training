/* In the reptCageMinimumVolume function below, the reference to the
data name weight is ambiguous.  Make the necessary changes to indicate
that the weight to be used is the one from the Mammal base class.
*/

#include<iostream>
#include<string>
using namespace std;

class ZooAnimal  
   {
    protected:
      string name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      ZooAnimal (string name, int cageNumber, int weightDate, int weight){
        this->name=name;
        this->cageNumber=cageNumber;
        this->weightDate=weightDate;
        this->weight=weight;
      }
      inline ~ZooAnimal () { }; // destructor function
      void changeWeight (int pounds);
      string reptName ();
      int reptWeight ();
      int daysSinceLastWeighed (int today);
   };

   class Mammal  
   {
    protected:
      float minimumVolume;
      int weight;
    public:
       Mammal (float minimumVolume, int weight)  {
        this->minimumVolume=minimumVolume;
        this->weight=weight;
        } // constructor function
      inline ~Mammal () {}; // destructor function
      float reptminimumVolume ();
      int reptWeight ();
   };

   class LargeAnimal : public ZooAnimal, public Mammal
   {
    protected:
      string species;
      float cageMinimumVolume;
    public:
      LargeAnimal (string name, int cageNumber, int weightDate, int weight, float minimumVolume, int weight1, string species, float cageMinimumVolume )
      :ZooAnimal(name,cageNumber,weightDate,weight),Mammal(minimumVolume,weight1){
        this->species=species;
        this->cageMinimumVolume=cageMinimumVolume;
      }
      inline ~LargeAnimal () { }; // destructor function
      float reptCageMinimumVolume ();
   };

   // -------- member function to return the minimum cage volume
   // -------- needed for this large animal
   float LargeAnimal::reptCageMinimumVolume ()
   {
    if (Mammal::weight < 500)
       return cageMinimumVolume;
    else
       return 3.0;
   }

   int main() {

    LargeAnimal large("tiger",1,23,240,2,200,"cat family",4);
    cout<<large.reptCageMinimumVolume();
    return 0;

   }