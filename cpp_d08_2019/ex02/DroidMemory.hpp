/*
** EPITECH PROJECT, 2020
** DroidMemory
** File description:
** DroidMemory
*/

#ifndef DroidMemory_
#define DroidMemory_

#include <string>

class DroidMemory {
	public:
		DroidMemory();
		~DroidMemory();
        size_t getFingerprint();
        size_t getExp();
        void setFingerprint(size_t _fingerprint);
        void setExp(size_t _exp);
        void operator<<(DroidMemory &mem);
        void operator>>(DroidMemory &mem);
        void operator+=(size_t size);
        void operator+=(DroidMemory &mem);
        DroidMemory operator+(DroidMemory mem);
        DroidMemory operator=(DroidMemory &mem);
        bool operator==(DroidMemory &droid);
        bool operator!=(DroidMemory &droid);
        bool operator<(DroidMemory &droid);
        bool operator>(DroidMemory &droid);
        bool operator<=(DroidMemory &droid);
        bool operator>=(DroidMemory &droid);
        bool operator<(size_t exp);
        bool operator>(size_t exp);
        bool operator<=(size_t exp);
        bool operator>=(size_t exp);
	protected:
	private:
    size_t Fingerprint;
    size_t Exp = 0;
};

std::ostream &operator<<(std::ostream &os, DroidMemory &obj);

#endif /* !DroidMemory_ */