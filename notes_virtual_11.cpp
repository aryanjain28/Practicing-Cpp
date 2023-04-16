#include <iostream>

class Entity
{
public:
    virtual std::string GetName() { return "Entity"; }
};

class Player : public Entity
{
public:
    // Player(std::string name) : m_name(name) {}
    Player(const std::string &name) : m_name(name) {}
    std::string GetName() override { return m_name; }

private:
    std::string m_name;
};

// This happends because the compiler calls the function
// of the type provided, "Entity";
void callingFunction(Entity *e)
{
    std::string name = e->GetName();
    std::cout << "The name is : " << name << std::endl;
}

// obsessed with l-value and r-value!!
void testing(const int &name)
{
    std::cout << name << std::endl;
}

int main()
{
    Entity *e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player *p = new Player("Aryan");
    std::cout << p->GetName() << std::endl;

    callingFunction(e);
    callingFunction(p);

    int a = 1;
    testing(a + 1);
}