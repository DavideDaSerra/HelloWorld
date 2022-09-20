// 2022 09 20
#include<iostream>

int main (int argc, char **argv){
switch ( ((argc == 1) ? 'e': argv[1][1]) ) {
 	case 'i':
      		std::cout << "Ciao a tutti" << std::endl;
	break;
    
	case 'd':
	      std::cout << "Hallo zusammen" << std::endl;
	      break;
    
	case 'f':
	      std::cout << "Bonjour tout le monde" << std::endl;
	break;
    
	case '?':
    
	case 'h':
	      std::cout << "usage: " << argv[0] << " [-difeh?] " << std::endl;
	      break;
    
	case 'e':
	default:
	      std::cout << "Hello to everybody" << std::endl;
}
  
return 0;
 
}

