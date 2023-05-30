#include "Weather.h"

Weather::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds)
{
	this->city = city;
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}

ostream& operator<<(ostream& os, Weather& f)
{
	os << f.city << "/" << f.lon << "/" << f.lat << "/" << f.temperature << "/" << f.weather << "/" << f.windSpeed << "/" << f.clouds;
	return os;
}
