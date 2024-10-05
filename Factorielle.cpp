#include<iostream>
  #include<stdio.h>
  int i;
int n=1,fact=1;
int main(int argv,char** argc){
    	std::cout<<"saisir le nombre dont on veut calculer le factoriel"<<std::endl;
	std::cin>>n;
   if(n==0){
	fact==1;
	}else{
	for(i=n;i>0;i--){
		fact=fact*i;
	}
}
 	std::cout<<"le factoriel est..."<<std::endl;	std::cout<<fact<<std::endl;
return 0;
}
