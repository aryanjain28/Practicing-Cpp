#include <iostream>
#include <cstring>

using namespace std;

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
        delete m_data;
    }

    void Print()
    {
        // cout << "m_data" << m_data;
        // cout << "m_data[0]" << m_data[0];
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