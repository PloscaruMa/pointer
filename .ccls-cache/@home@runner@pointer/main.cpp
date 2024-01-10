
#include <iostream>

using namespace std ; 

 struct pointer_ex {
   int x = 10 ; // o variabila. 
int *p = nullptr ; // initializarea unui pointer . 
 }exp ; 

void rol(){
  
   exp.p= &exp.x ; // & extrage adresa de memorie a unei variabile.
  cout<< "Adresa de memorie  este : "<< exp.p<<endl; // va afisa o adresa de memorie. 
  cout<<"Va afisa continutul de la  adresa de memorie. "<<  *exp.p<<endl ; // va afisa continutul de la adesa de memorie.
}
 void incrementare () {
   // Incrementare-> va creste cu sizeof (tip_p);in cazul nostru va afisa adresa 4. 
   exp.p++ ; 
   cout<<"Adresa dupa incrementare este: " << exp.p<<endl ; 
   
   // Decrementarea-> va scadea adresa cu sizeof (tip_p). 
   exp.p--; 
   cout<<"Adresa dupa decrementare este:" <<exp.p<<endl ; 
 }
void adunarea_intreg() {
// nume_pointer= 3*sizeof (tipul pointerului)= 3*4= 12->c (hexazecimali). 
  exp.p= exp.p+3 ; 
  cout<<"Dupa adunarea unui intreg adresa devine:"<< exp.p<<endl ; 

  exp.p= &exp.x ;
  cout<<"Dupa adunare nu se schimba valoarea ci doar adresa in memorie.Dupa cum observam valoarea ramane aceiasi. "<<*exp.p<<endl ;
} 
void diferenta_pointer() {
  int*q=exp.p-2 ; 
  cout<< "Adresa a doua este : " <<q<<endl ;  
  //Diferenta dintre doua adrese si impartitta la sizeof (tip_pointer).
  cout <<"Cate variabile incap intre cei doi pointeri. "<< exp.p-q << endl ; 
}
int main (){
 rol() ; 
incrementare () ; 
  adunarea_intreg() ; 
 diferenta_pointer() ; 
}