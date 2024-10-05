#include<iostream>
  #include<stdio.h>
  int a,b,c;
int main(int argv,char** argc){
    	std::cout<<"entrer la longueur des différents côtés du triangle "<<std::endl;
        std::cout<<"ab"<<std::endl;
	std::cin>>a;
     std::cout<<"ac"<<std::endl;
	std::cin>>b;
     std::cout<<"bc"<<std::endl;
	std::cin>>c;
   if(a==b&&c==a){
       std::cout<< "le triangle est équilatéral "<<std::endl;
   }else if(a==b||a==c||c==b){
          std::cout<< "le triangle est isosel "<<std::endl;
   }else{
          std::cout<< "le triangle est quelconque "<<std::endl;
   }
   
return 0;
}
