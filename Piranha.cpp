#include "Piranha.hpp"
#include "ListObj.hpp"
#include <iostream>

using namespace std;

static const int value_piranha = 100;

Piranha::Piranha() : Fish("piranha", value_piranha) {
}

Guppy Piranha::move(ListObj<Guppy> _l) {
    if (count_move == hunger_time) {
        hungry = true;
        count_move = 0;
    } else if (count_move == change_move) {
        count_move = 0;
        setChange_Move();
    }

    if (hungry) {
        if (!_l.isEmpty()) {
            double closest_food = _l.get(0).position.distanceTo(position);
            int idx_food = 0;
            for (int i = 0; i < _l.size(); i++) {
                double temp = _l.get(i).getPosition().distanceTo(position);
                if (temp < closest_food) {
                    closest_food = temp;
                    idx_food = i;
                }
            }

            if (closest_food <= speed_fish) {
                Guppy g = _l.get(idx_food);
                position = g.getPosition();
                return g;
            } else {
                
            }
        }
    } else {
        count_move++;

        return NULL;
    }
}    

void Piranha::eat() {
    hungry = false;
}

Coin Piranha::dropCoin(const Guppy& _g) {
    int val = (_g.getPhase() + 1) * _g.getValue();
    Coin _c(val);    

    return _c;
}

void Piranha::show() {

}