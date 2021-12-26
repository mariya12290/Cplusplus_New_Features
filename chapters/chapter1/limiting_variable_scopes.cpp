#include <iostream>
#include <vector>
#include <map>

int main(){
//limiting the variable scope in if statement
std::cout<<"============limiting the variable in if statement========== "<<std::endl;
std::map<std::string, int>m{{"Suri",10},{"Kumar",20}};

if(auto itr{m.find("Suri")};itr!=m.end()){
    std::cout<<"Found "<<itr->first<<" in map "<<std::endl;
}
else{
    std::cout<<" did not find Suri in m"<<std::endl;
}

std::cout<<"============limiting the variable in switch statement========== "<<std::endl;

switch (int i{};std::cin>>i;i){
    case 1:
        std::cout<<"it is one"<<std::endl;
        break;
     case 2:
        std::cout<<"it is two"<<std::endl;
        break;
     case 3:
        std::cout<<"it is three"<<std::endl;
        break;

}

}