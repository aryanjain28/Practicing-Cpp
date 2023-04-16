#include <iostream>

class Entity
{
public:
    virtual std::string GetName() = 0; // = 0 makes it "pure virtual", an interface!
    // v-table.
};

class Person : public Entity
{
public:
    Person(const std::string &name) { this->m_name = name; };
    std::string GetName() override { return m_name; }

private:
    std::string m_name;
};

void printName(Entity *e)
{
    std::cout << e->GetName() << std::endl;
}

int main()
{
    // cannot instantiate an Interface!
    // Entity *e = new Entity();
    Person *p = new Person("Aryan"); // needs to implement the interface!

    // std::cout << e->GetName() << std::endl;
    std::cout << p->GetName() << std::endl;

    // printName(e);
    printName(p);
}