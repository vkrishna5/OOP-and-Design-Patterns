#include <iostream>
#include <cstring>

using namespace std;

class Button
{
public:
    virtual void paint() = 0;
};

class MacButton : public Button
{
public:
    void paint()
    {
        cout << "MacOS button" << endl;
    }
};

class WindowsButton : public Button
{
public:
    void paint()
    {
        cout << "Windows button" << endl;
    }
};

class GUIFactory
{
public:
    virtual Button *createButton(char const *) = 0;
};

class Factory : public GUIFactory
{
public:
    Button *createButton(char const *type)
    {
        if (strcmp(type, "Windows") == 0)
        {
            return new WindowsButton;
        }
        else if (strcmp(type, "Mac") == 0)
        {
            return new MacButton;
        }
        return NULL;
    }
};

int main()
{
    GUIFactory *guiFactory;
    Button *btn;

    guiFactory = new Factory;

    btn = guiFactory->createButton("Mac");
    btn->paint();
    btn = guiFactory->createButton("Windows");
    btn->paint();

    return 0;
}