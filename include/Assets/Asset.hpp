#ifndef _Asset_hpp_
#define _Asset_hpp_

#include <string>

using namespace std;
extern void ug::log(std::string);

class Asset
{
protected:
	string* id;
	string* path;
	sf::Clock* lastget;

public:
	Asset();
	Asset(string* _id, string* _path);
	~Asset();
};

#endif // !_Asset_hpp_