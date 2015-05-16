#ifndef _Thruster_hpp_
#define _Thruster_hpp_

#include <Data\ResourceType.hpp>
#include <Data\Attachable.hpp>
#include <Data\Taggable.hpp>

#include <Utilities\Logger.hpp>
#include <Utilities\Conversion.hpp>

class Thruster : public Attachable, public Taggable
{
private:
	float thrust;
	ResourceType fuel;
	float isp;


public:
	Thruster();
	~Thruster();



	//SET
	void setThrust(float _thrust);
	void setFuel(ResourceType _fuel);
	void setISP(float _isp);
	//GET
	float getThrust();
	ResourceType getFuel();
	float getISP();
};

#endif // !_Thruster_hpp_