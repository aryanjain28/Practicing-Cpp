#include <iostream>

class Entity
{
public:
    std::string virtual GetName() { return "Entity"; }
};

class Player : public Entity
{
public:
    Player(const std::string &name) : m_name(name) {}
    std::string GetName() { return m_name; }

private:
    std::string m_name;
};

void callingFunction(Entity *e)
{
    std::string name = e->GetName();
    std::cout << "The name is : " << name << std::endl;
}

int main()
{
    Entity *e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player *p = new Player("Aryan");
    std::cout << p->GetName() << std::endl;

    callingFunction(e);
    callingFunction(p);
}