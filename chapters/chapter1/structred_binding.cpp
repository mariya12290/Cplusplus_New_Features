#include <iostream>
#include <utility>
#include <string>
#include <tuple>
#include <map>

auto divide_remainder(int dividend, int divisor ){
 std::pair<float,int>results{};
 results.first = float(dividend)/divisor;
 results.second = dividend%divisor;
 return results;
}
struct employee{
    unsigned id;
    std::string name;
    std::string role;
    unsigned salary;
};

int main(){
//structured binding with pair
std::cout<<"===========strucured binding on pair==========="<<std::endl;
auto [fraction, remainder]= divide_remainder(16,3);
std::cout<<fraction<<" "<<remainder<<std::endl;

//structured bindings with tuples
std::cout<<"==============strucured binding on tuple============"<<std::endl;
std::tuple<int, float, std::string>tu{26,6.1,"surendra"};

auto[age, height, name]= tu;
std::cout<<age<<" "<<height<<" "<<name<<std::endl;

//structred binding with custom structure
std::cout<<"======strucured binding on struct============="<<std::endl;
employee emp{1,"surendra","student",0};
auto[id, name1, role, salary]= emp;

std::cout<<id<<" "<<name1<<" "<<role<<" "<<salary<<std::endl;

//using tie
std::cout<<"====== strucured binding vs std::tie==========="<<std::endl;
int remainder1{};
std::tie(std::ignore,remainder1 )= divide_remainder(16,3);
std::cout<<" just the remainder "<<remainder1<<std::endl;

/** See the difference between tie and structured binding here, 
 * In tie, we can ignore a variable, but not in structured binding */

//structured binding in map
std::cout<<"strucured binding on map"<<std::endl;
std::map<std::string, int>m{{"suri",10},{"kumar",20}};

for(const auto&[name, id]:m){
    std::cout<<name<<" "<<id<<std::endl;
}
}