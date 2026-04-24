#include "Monster.h"
#include<string>

using namespace std;

Monster::Monster(const string &name, int baseHp, int attackPower, int defense, int speed, int level = 1)
: name(name), hp(hp), maxHp(maxHp), attackPower(attackPower), defense(defense), speed(speed), level(level)
{
    maxHp = baseHp * level * 2;
    hp = maxHp;
    attackPower = baseAttack * level * 1.5;
    defense = baseDefense * level * 1.5;
    speed = baseSpeed * level * 1.5;
}

Monster::~Monster(){}

string Monster::getName() const
{
    return name;
}