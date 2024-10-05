#include<iostream>
  #include<stdio.h>
  #include<math.h>
  const int pi=3.14;
  int n,R,L,l,p,C1,C2,C3,A,demi_P;
  float P,a;
int n=1,fact=1;
int main(int argv,char** argc){
    	std::cout<<"quelle figure nous intéresse aujourd'hui??"<<std::endl;
	std::cout<<"1)carre"<<std::endl;
    std::cout<<"2)rectangle "<<std::endl;
    	std::cout<<"3)cercle "<<std::endl;
        	std::cout<<"4)triangle "<<std::endl;
      std::cin>>n;
      switch(n){
          case 1:{
              std::cout<<"saisir le cote";
              std::cin>>C1;
              if(C1<0){
                  std::cout<<"erreur ";
              } else{
                  p=C1*4;
                  A=C1*C1;
                  std::cout<<"le perimetre est "<<std::endl;
                  std::cout<<p<<std::endl;
                    std::cout<<"laire du carre : "<<std::endl;
                  std::cout<<A<<std::endl;
              }
              break;
          }
          case 2:{
              std::cout<<"sasir la longueur";
              std::cin>>L;
              std::cout<<"la largeur??";
              std::cin>>l;
              p=((l+L)*2);
              A=l*L;
              std::cout<<"le perimetre est ";
              std::cout<<p<<std::endl;
              std::cout<<"la surface donne ";
              std::cout<<A<<std:endl;
              break;
          }
          case 3:{
              std::cout<<"saisir le rayon(valeur positive)"<<std::endl;
              std::cin>>R;
              p=(2*R)*pi;
              A=(R*R)*pi;
                            std::cout<<"le perimetre est ";
              std::cout<<P<<std::endl;
              std::cout<<"la surface donne ";
              std::cout<<a<<std:endl;
              break;
          }
          case4:{
              std::cout<<"entrez les trois cote du triangle  triangle"<<std::endl;
              std::cin>>C1>>C2>>C3;
              p=C1+C2+C3;
              std::cout<<"le perimetre de ce triangle est  "<<p<<std::endl;
              break;
              
          }
      }
return 0;
}
