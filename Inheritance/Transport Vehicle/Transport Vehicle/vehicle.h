/// @author Ðû÷êîâ Ð.Â.
/// Çàãîëîâî÷íûé ôàéë 



/////////////////////////////

#include <iostream>

using namespace std;

/// Êëàññ òðàíñïîðòíûå ñðåäñòâà
class Transport_Vehicle {
protected:
	string oil; /// Òîïëèâî òðàíñïîðòà
	string typeOfVehicle; /// Òèï òðàíñïîðòà
	string purpose; /// Íàçíà÷åíèå òðàíñïîðòà
	float weight; /// Ìàññà 
	float MaxSpeed; /// Ìàêñèìàëüíàÿ ñêîðîñòü
	

public:
	/// Êîíñòðóêòîð áåç ïàðàìåòðîâ
	Transport_Vehicle();

	/// Êîíñòðóêòîð ñ ïàðàìåòðàìè
	Transport_Vehicle(string oil1, string typeOfVehicle1, string purpose1, float weight1, float MaxSpeed1);

	/// Äåñòðóêòîð
	~Transport_Vehicle();

	/// Âèðòóàëüíûé âûâîä â îäíó ñòðîêó
	virtual string toString();

	/// Çàäàòü òèï òðàíñïîðòà
	void set_typeOfVehicle(string typeOfVehicle1);

	/// Ïîëó÷èòü òèï òðàíñïîðòà
	string get_typeOfVehicle();

	/// Çàäàòü íàçíà÷åíèå òðàíñïîðòà
	void set_purpose(string purpose1);

	/// Ïîëó÷èòü íàçíà÷åíèå òðàíñïîðòà
	string get_purpose();

	/// Çàäàòü òîïëèâî
	void set_oil(string oil1);

	/// Ïîëó÷èòü òîïëèâî
	string get_oil();

	/// Çàäàòü ìàññó
	void set_weight(float weight1);

	/// Ïîëó÷èòü ìàññó
	float get_weight() const;

	/// Çàäàòü ñêîðîñòü
	void set_speed(float MaxSpeed1);

	/// Ïîëó÷èòü ñêîðîñòü
	float get_speed() const;
};

/// Êëàññ âåðòîë¸ò
class Helicopter : public Transport_Vehicle {
private:
	float maxHigh; /// Ìàêñèìàëüíûé óðîâåíü ïîëåòà

public:
	/// Êîíñòðóêòîð áåç ïàðàìåòðîâ 
	Helicopter();

	/// Êîíñòðóêòîð ñ ïàðàìåòðàìè
	Helicopter(float maxHigh1);

	/// Äåñòðóêòîð 
	~Helicopter();

	/// Çàäàòü ïàðàìåòðû èç îñíîâíîãî êëàññà
	void set_parametr(string oil1, string typeOfVehicle1, string purpose1, float weight1, float MaxSpeed1);

	/// Âèðòóàëüíûé âûâîä â îäíó ñòðîêó
	string toString() override;

	/// Çàäàòü ìàêñèìàëüíûé óðîâåíü ïîëåòà
	void set_maxHigh(const float &maxHigh1);

	/// Ïîëó÷èòü ìàñêèìàëüíûé óðîâåíü ïîëåòà
	float get_maxHigh() const;
};

/// Êëàññ àâòîìîáèëü
class Auto : public Transport_Vehicle {
protected:
	float door; /// Êîëè÷åñòâî äâåðåé

public:
	/// Êîíñòðóêòîð áåç ïàðàìåòðîâ 
	Auto();

	/// Êîíñòðóêòîð ñ ïàðàìåòðàìè
	Auto(float door1);

	/// Äåñòðóêòîð
	~Auto();

	/// Çàäàòü ïàðàìåòðû èç îñíîâíîãî êëàññà
	void set_parametr(string oil1, string typeOfVehicle1, string purpose1, float weight1, float MaxSpeed1);

	/// Âèðòóàëüíûé âûâîä â îäíó ñòðîêó
	string toString() override;

	/// Çàäàòü êîëè÷åñòâî äâåðåé
	void set_door(const float &door1);

	/// Ïîëó÷èòü êîëè÷åñòâî äâåðåé
	float get_door() const;
};