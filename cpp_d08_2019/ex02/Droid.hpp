/*
** EPITECH PROJECT, 2020
** Droid
** File description:
** Droid
*/

#ifndef Droid_
#define Droid_

#include <string>

class Droid {
	public:
		Droid(std::string serial);
		Droid(const Droid &other);
        std::string getId() const;
        void setId(std::string _id);
        size_t getEnergy() const;
        void setEnergy(size_t _energy);
        size_t getAttack() const;
        size_t getToughness() const;
        std::string getStatus() const;
        void setStatus(std::string *_status);
        void operator=(const Droid &droid);
        bool operator==(const Droid droid) const;
        bool operator!=(const Droid droid) const;
        void operator<<(size_t &_energy);
		~Droid();

	protected:
	private:
    std::string Id;
    size_t Energy = 50;
    const size_t Attack = 25;
    const size_t Toughness = 15;
    std::string *Status = new std::string("Stand-ing by");
};

std::ostream &operator<<(std::ostream &os, const Droid &obj);

#endif /* !Droid_ */