#include "Aquarium.hpp"
using namespace std;

Aquarium::Aquarium(){}

ListObj<Guppy> Aquarium::getList_Guppy() const{return list_guppy;}
ListObj<Piranha> Aquarium::getList_Piranha() const{return list_piranha;}
ListObj<Food> Aquarium::getList_Food() const{return list_food;}
ListObj<Snail> Aquarium::getList_Snail() const{return list_snail;}
ListObj<Coin> Aquarium::getList_Coin() const{return list_coin;}
static int Aquarium::getLength_Display(){return length_display;}
static int Aquarium::getWidth_Display(){return width_display;}

void Aquarium::setList_Guppy(ListObj<Guppy> &newlist){list_guppy=newlist;}
void Aquarium::setList_Piranha(ListObj<Piranha> &newlist){list_piranha=newlist;}
void Aquarium::setList_Food(ListObj<Food> &newlist){list_food=newlist;}
void Aquarium::setList_Snail(ListObj<Snail> &newlist){list_snail=newlist;}
void Aquarium::setList_Coin(ListObj<Coin> &newlist){list_coin=newlist;}


void Aquarium::add(const Guppy &newguppy){list_guppy.add(newguppy);} //menambahkan Guppy ke dalam aquarium
void Aquarium::add(const Piranha &newpiranha){list_piranha.add(newpiranha);} //menambahkan Piranha ke dalam aquarium
void Aquarium::add(const Snail &newsnail){list_snail.add(newsnail);} //menambahkan Snail ke dalam aquarium
void Aquarium::add(const Coin &newcoin){list_coin.add(newcoin);} //menambahkan Coin ke dalam aquarium
void Aquarium::add(const Food &newfood){list_food.add(newfood);} //menambahkan Food ke dalam aquarium
void Aquarium::del(Guppy &guppy){list_guppy.remove(guppy);} //menghapus Guppy dari dalam aquarium
void Aquarium::del(Piranha &piranha){list_piranha.remove(piranha);} //menghapus Piranha dari dalam aquarium
void Aquarium::del(Snail &snail){list_snail.remove(snail);} //menghapus Snail dari dalam aquarium
void Aquarium::del(Coin &coin){list_coin.remove(coin);} //menghapus Coin dari dalam aquarium
void Aquarium::del(Food &food){list_food.remove(food);} //menghapus Food dari dalam aquarium
void Aquarium::showAll(){} //menampilkan semua summonable yang ada pada aquarium ??GIMANA
void Aquarium::moveAll(){} //menggerakkan semua summonable yang ada pada aquarium ??GIMANA

