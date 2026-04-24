#pragma once
#include<string>

using namespace std;

class Monster
{
protected:
    string name;
    int hp, baseHp, maxHp;
    int attackPower;
    int defense;
    int speed;
    int level;
public:
    Monster(const string& name, int hp, int maxHP, int attackPower, int defense, int speed, int level);
    virtual ~Monster();
    
    string getName() const;
    virtual void Attack(Monster* target);
    void TakeDamage(int damage);
    bool IsDead();
};
