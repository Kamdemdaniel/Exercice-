// ceux ci nous permet de determiner la longeur dun cote dun triangle connaissant les 2 autres
#include <iostream> 
#include<math.h>
float A,B,C;
int main(int argv,char** argc){
    // lorsque l'opérateur n'a pas la valeur de l'angle entre les points 
	std::cout<<"saisir les longueurs des point du triangle"<<std::endl; 
	std::cout<<"longueur  de A"<<std::endl;
	std::cin>>A;
	std::cout<<"longueur  de B"<<std::endl;
	std::cin>>B;
	C=sqrt((B*B)+(A*A));
	std::cout<<"la longueur du point C est"<<std::endl;
        std::cout<<C<<std::endl;
	return 0;
}
