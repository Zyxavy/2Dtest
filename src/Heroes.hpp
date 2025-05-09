#ifndef HEROES_HPP
#define HEROES_HPP

#include "raylib.h"
#include "GameFunctions.hpp"
#include <string>

class Hero
{
    private:
    std::string name, type;
    int x, y;
    int health, maxHealth, healthPotions; 
    int damageMin, damageMax, defense, experience, level, money;
    eZones zone;  
    bool isAlive, isPassable;

    public:
    
    //Constructors
    Hero(std::string name, std::string type, int x, int y, int health, int maxHealth, int damageMin, int damageMax, int defense, int experience,
       int level, int money, eZones zone, bool isAlive, bool isPassable );

    //Getters
    std::string GetName() const;
    std::string GetType() const;
    int GetX() const;
    int GetY() const;
    int GetHealth() const;
    int GetMaxHealth() const;
    int GetRemainingHealthPotions() const;
    int GetDamageMin() const;
    int GetDamageMax() const;
    int GetDefense() const;
    int GetExperience() const;
    int GetLevel() const;
    int GetMoney() const;
    eZones GetZone() const;
    bool IsAlive() const;
    bool IsPassable() const;
    
    //setters
    void SetX(int x);
    void SetY(int y);
    void SetHealth(int amount);
    void SetMaxHealth(int amount);
    void SetDamageMin(int amount);
    void SetDamageMax(int amount);
    void SetHealthPotions(int amount);
    void SetDefense(int amount);
    void GiveExperience(int amount);
    void SetLevel(int amount);
    void SetMoney(int amount);
    void SetZone(eZones zone);
    void SetAlive(bool state);
    void SetPermeation(bool state);
    
};

extern Hero Knight, Wizard, Rouge, Player;

#endif // HEROES_HPP