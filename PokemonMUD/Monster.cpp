#include "Monster.h"
#include<iostream>
#include<string>

using namespace std;

Monster::Monster(const string &name, int hp, int attackPower, int defense, int speed, int level)
: name(name), hp(hp), maxHp(hp * 2), attackPower(attackPower), defense(defense), speed(speed), level(level)
{}

Monster::~Monster(){}

string Monster::getName() const
{
    return name;
}

void Monster::Attack(Monster* target)
{
    cout << "\n[" << name << "의 공격!]\n";
    
    int damage = attackPower - target->defense;
    
    // 방어력이 너무 높아서 데미지가 마이너스가 되는 것 방지 (최소 1 데미지)
    if (damage <= 0)
    {
        damage = 1; 
    }
    
    // 대상에게 데미지 적용
    target->TakeDamage(damage);
}

void Monster::TakeDamage(int damage)
{
    hp -= damage;
    
    if (hp < 0)
    {
        hp = 0;
    }
    
    cout << name << "은(는) " << damage << "의 피해를 입었다!\n";
    cout << "(남은 체력: " << hp << " / " << maxHp << ")\n";
}

// 6. 사망 체크 함수
bool Monster::IsDead()
{
    return hp <= 0; 
}