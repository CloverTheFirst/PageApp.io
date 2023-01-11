#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//#include <cstdio>
//#include "excliser.h"

using namespace std;

int main()
{  
   string numero;

   std::cout << "Numero du dossard :"<<'\n';
   std::cin >> numero;

   fstream monFlux = fstream ("ASO.csv", ios_base::in);  

   if(!monFlux.is_open()) std::cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << '\n';

   string ID; 
   string type;
   string inscription;
   string Dossard;
   string Nom;
   string Prenom;
   string DatedeN;
   string Mug;
   string TshirtS;
   string TshirtM;
   string TshirtL;
   string TshirtXL;
   string TshirtXXL;

   while (!monFlux.eof())
   {
      getline(monFlux,ID,',');
      getline(monFlux,type,',');
      getline(monFlux,inscription,',');
      getline(monFlux,Dossard,',');
      getline(monFlux,Nom,',');
      getline(monFlux,Prenom,',');
      getline(monFlux,DatedeN,',');
      getline(monFlux,Mug,',');
      getline(monFlux,TshirtS,',');
      getline(monFlux,TshirtM,',');
      getline(monFlux,TshirtL,',');
      getline(monFlux,TshirtXL,',');
      getline(monFlux,TshirtXXL,'\n');

      if (numero==Dossard)
      {
         std::cout << "Numero : " <<Dossard<< '\n';
         std::cout << "Il y a : " <<Mug<< " mugs" << '\n';
         std::cout << "Il y a : " <<TshirtS<< " TshirtS" << '\n';
         std::cout << "Il y a : " <<TshirtM<< " TshirtM" <<'\n';
         std::cout << "Il y a : " <<TshirtL<< " TshirtL" <<'\n';
         std::cout << "Il y a : " <<TshirtXL<< " TshirtXL"<<'\n';
         std::cout << "Il y a : " <<TshirtXXL<< " TshirtXXL" <<'\n';
         std::cout << "................................." <<'\n';
      }

   }

   monFlux.close();
   return 0;

}