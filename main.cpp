#include <iostream>
#include <string>
using namespace std;

class Fish{

public:
  string name; 
  string species; 
  string prefferedFood;
  int age; 
  int neededSpace_in_m3; 
  int size_in_cm;
  bool isAggressive;

  void printInfoFish(){
   cout << "Name->  " << name <<" | Species-> "<<species<<" | Food->  "<<prefferedFood<<" | Size->  " <<size_in_cm<<" | Age->  "<<age<<" | Need Space-> "<<neededSpace_in_m3<<" | Aggressive->  "<<isAggressive<<"|"<<endl;
  }
  void printname(){
    cout << name << endl;
  }
  void printsize(){
    cout << size_in_cm << endl;
  }
  Fish(){};
  Fish(string name,string species,string prefferedFood,int size_in_cm, int age,int neededSpace_in_m3, bool isAggressive){
    this->  name = name;
    this->  species = species;
    this->  prefferedFood = prefferedFood;
    this->  size_in_cm = size_in_cm;
    this->  age = age;
    this->  neededSpace_in_m3 = neededSpace_in_m3;
    this->  isAggressive = isAggressive;
  }
};
class Aquarium{
private:
double totalVolume;
int freeSpace;
public:

  int numberoffish = 0;
  Fish Clipboard[1];
  Fish arrayfish[50];

  void FishAdd(Fish Fishh)
  {
     arrayfish[numberoffish] = Fishh;
     numberoffish++;
  }
  void SeeAllFish(){
    for(int i = 0; i < numberoffish; i++){
      arrayfish[i].printInfoFish();
    }
  }
  void ThreeTheBiggest(){
    for (int i = 1; i < numberoffish; i++)
    {
       for (int j = 1; j < numberoffish ; j++)
       {
         if (arrayfish[j].size_in_cm > arrayfish[j - 1].size_in_cm)
         {
           Clipboard[0]=arrayfish[j];
           arrayfish[j]=arrayfish[j - 1];
           arrayfish[j - 1]= Clipboard[0];

         }

       }
     }
     cout << "The biggest" << '\n';
     for(int i=0; i< 3; i++)
     {
       arrayfish[i].printInfoFish();
     }
  }


};


int main() {
  Fish Schyka("Schyka","aquatic","other fishes",29,4,1,true);
  Fish Shark("Shark","aquatic","other fishes",48,5,2,true);
  Fish Som("Som","aquatic","other fishes",25,7,2,true);
  Fish Herring("Herring","aquatic","fodder",67,6,1,false);
  Fish Sudak("Sudak","aquatic","other fishes",89,6,3,true);
  Fish Plotva("Plotva","aquatic","fodder",18,6,1,false);
  Fish Korop("Korop","aquatic","fodder",33,7,3,false);
  Fish Karas("Karas","aquatic","fodder",41,7,4,false);
  Fish Okun("Okun","aquatic","other fishes",54,7,1,true);
  Fish Salmon("Salmon","aquatic","other fishes",85,9,4,true);

  Aquarium Safe;
  Safe.FishAdd(Herring);
  Safe.FishAdd(Plotva);
  Safe.FishAdd(Korop);
  Safe.FishAdd(Karas);
  Safe.SeeAllFish();
  Safe.ThreeTheBiggest();

  cout << "-------------------------------------------------------" << '\n';
  Aquarium Danger;
  Danger.FishAdd(Schyka);
  Danger.FishAdd(Shark);
  Danger.FishAdd(Som);
  Danger.FishAdd(Sudak);
  Danger.FishAdd(Okun);
  Danger.FishAdd(Salmon);
  Danger.SeeAllFish();
  Danger.ThreeTheBiggest();
  
 

}



