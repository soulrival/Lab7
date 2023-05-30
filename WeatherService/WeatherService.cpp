#include "JsonService.h"

int main()
{
	setlocale(LC_ALL, "RU");
	JsonService js;
	Weather w = js.getWeather("weather.json");
	cout << w;
}