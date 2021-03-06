#ifndef _GUIMenu_hpp_
#define _GUIMenu_hpp_

#include <Assets\AssetManager.hpp>
#include <SFML\Graphics.hpp>
#include <SFML\Text.hpp>
#include <Data\Taggable.hpp>
#include <string>
#include <vector>
#include <GUI\GUIElement.hpp>

#include <Utilities\Logger.hpp>
#include <Utilities\Conversion.hpp>
#include <Utilities\UI.hpp>

class GUIMenu : public sf::Drawable, public Taggable, public Responsive
{
private:
	mutable sf::Mutex confmtx;

	int x;
	int y;
	int width;
	int height;
	std::string title;
	std::string font;
	sf::Color borderColor;
	sf::Color backColor;
	sf::Color titleColor;

	std::vector<GUIElement*> elements;

	struct Components {
		sf::RectangleShape titleRect;
		sf::RectangleShape bodyRect;
		Text titleText;
		sf::RectangleShape closeButtonRect;
		sf::VertexArray closeButtonCross;
	} components;
	struct State {
		bool titleHover = false;
		bool moving = false;
		sf::Vector2i lastPosition;
		bool closeButtonHover = false;
		bool open = true;
		bool quitting = false;
	} state;
public:
	GUIMenu(AssetManager* _assets);
	~GUIMenu();

	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	void handleEvent(sf::RenderWindow& target, sf::Event* _event);

	void show();
	void close();

	int addElement(GUIElement* _element);
	GUIElement* getElement(int);
	void removeElement(int);

	void setX(int);
	void setY(int);
	void setWidth(int);
	void setHeight(int);
	void setTitle(std::string);
	void setFont(std::string);
	void setBorderColor(sf::Color);
	void setBackColor(sf::Color);
	void setTitleColor(sf::Color);
	int getX();
	int getY();
	int getWidth();
	int getHeight();
	std::string getTitle();
	std::string getFont();
	sf::Color getBorderColor();
	sf::Color getBackColor();
	sf::Color getTitleColor();
};

#endif // !_GUIMenu_hpp_
