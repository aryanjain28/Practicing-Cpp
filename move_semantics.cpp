#include <iostream>
#include <cstring>

using namespace std;

// Basically, move_semantics is the single,
// biggest use case of r-value-references.

// We use move_sematics to optimize out c++ code.
// Nothing else.

// Generally speaking, move_semantics allows us to "move",
// objects around.
// This was not possible before C++11, because,
// there was no r-value-reference.

// The basic idea is that when we are writing C++
// code, then there are many cases when we do not
// want to copy objects from one place to another.
// But, before move_semantics, that was the only way
// to get an object from one place to another.

// Move semantics allows us to "move" an object
// instead of creating a new copy inside memory.
// That's the biggest advantage.

// For eg. to get an object inside a function, I first
// have to create a copy of that object inside the
// function. And then I can get the data.

// creating a class
class String
{
public:
    String() = default;
    String(const char *string)
    {
        printf("Created!\n");
        m_size = strlen(string);
        m_data = new char[m_size];
        memcpy(m_data, string, m_size);
    }

    String(const String &other)
    {
        printf("Copied!\n");
        m_size = other.m_size;
        m_data = new char[m_size];
        memcpy(m_data, other.m_data, m_size);
    }

    // move constructor
    String(String &&other)
    {
        printf("Moved!\n");
        m_size = other.m_size;
        m_data = other.m_data;

        other.m_size = 0;
        other.m_data = nullptr;
    }

    ~String()
    {
        cout << "Destroyed!" << endl;
        delete[] m_data;
    }

    void Print()
    {
        for (int i = 0; i < m_size; i++)
        {
            printf("%c", m_data[i]);
        }
        cout << endl;
    }

private:
    char *m_data;
    int m_size;
};

class Entity
{
public:
    Entity(const String &name)
        : m_name(name)
    {
    }

    // move constructor.
    Entity(String &&name)
        : m_name(move(name))
    {
    }

    void printName()
    {
        m_name.Print();
    }

private:
    String m_name;
};

int main()
{
    // Entity entity(String("Aryan"));
    Entity entity("Aryan");
    entity.printName();

    // std::cin.get();
}