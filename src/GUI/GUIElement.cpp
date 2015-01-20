#include <GUI/GUIElement.hpp>
//CONSTRUCTORS
GUIElement::GUIElement()
{
    codeBox.Setup();
    button.Setup();
    label.Setup();
    horSlider.Setup();
    vertSlider.Setup();
    textBox.Setup();
    canvas.Setup();
    checkBox.Setup();
}
//DESTRUCTORS

//METHODS
void GUIElement::Show()
{
    isHidden = false;
}
void GUIElement::Hide()
{
    isHidden = true;
}

void GUIElement::update(int _x, int _y, std::string _mID)
{
    if(Type == "codebox")
    {
        codeBox.isActive = isActive;
        codeBox.Update(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "button")
    {
        button.isActive = isActive;
        button.Update(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "label")
    {
        label.isActive = isActive;
        label.Update(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "horslider")
    {
        horSlider.isActive = isActive;
        horSlider.Update(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "vertslider")
    {
        vertSlider.isActive = isActive;
        vertSlider.Update(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "textbox")
    {
        textBox.isActive = true;
        textBox.Update(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "canvas")
    {
        canvas.isActive = true;
        canvas.Update(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "checkbox")
    {
        checkBox.isActive = true;
        checkBox.Update(_x+X, _y+Y, ID, _mID);
    }
}
void GUIElement::render(int _x, int _y, std::string _mID)
{
    if(Type == "codebox")
    {
        codeBox.Render(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "button")
    {
        button.Render(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "label")
    {
        label.Render(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "horslider")
    {
        horSlider.Render(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "vertslider")
    {
        vertSlider.Render(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "textbox")
    {
        textBox.Render(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "canvas")
    {
        canvas.Render(_x+X, _y+Y, ID, _mID);
    }
    else if (Type == "checkbox")
    {
        checkBox.Render(_x+X, _y+Y, ID, _mID);
    }
}
void GUIElement::handleEvent(sf::Event* _event, int _x, int _y, std::string _mID)
{
    if(Type == "codebox")
    {
        codeBox.handleEvent(_event, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "button")
    {
        button.handleEvent(_event, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "horslider")
    {
        horSlider.handleEvent(_event, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "vertslider")
    {
        vertSlider.handleEvent(_event, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "label")
    {
        label.handleEvent(_event, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "textbox")
    {
        textBox.handleEvent(_event, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "canvas")
    {
        canvas.handleEvent(_event, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "checkbox")
    {
        checkBox.handleEvent(_event, _x+X, _y+Y, ID, _mID);
    }
}
void GUIElement::handleSoftEvent(std::list<std::string> _args, int _x, int _y, std::string _mID)
{
    if(Type == "codebox")
    {
        codeBox.handleSoftEvent(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "button")
    {
        button.handleSoftEvent(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "horslider")
    {
        horSlider.handleSoftEvent(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "vertslider")
    {
        vertSlider.handleSoftEvent(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "label")
    {
        label.handleSoftEvent(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "textbox")
    {
        textBox.handleSoftEvent(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "canvas")
    {
        canvas.handleSoftEvent(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "checkbox")
    {
        checkBox.handleSoftEvent(_args, _x+X, _y+Y, ID, _mID);
    }
}
void GUIElement::handleTask(std::list<std::string> _args, int _x, int _y, std::string _mID)
{
    if(Type == "codebox")
    {
        codeBox.handleTask(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "button")
    {
        button.handleTask(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "horslider")
    {
        horSlider.handleTask(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "vertslider")
    {
        vertSlider.handleTask(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "label")
    {
        label.handleTask(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "textbox")
    {
        textBox.handleTask(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "canvas")
    {
        canvas.handleTask(_args, _x+X, _y+Y, ID, _mID);
    }
    else if (Type == "checkbox")
    {
        checkBox.handleTask(_args, _x+X, _y+Y, ID, _mID);
    }
}
