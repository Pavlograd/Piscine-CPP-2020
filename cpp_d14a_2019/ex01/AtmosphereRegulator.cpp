#include "Errors.hpp"
#include "AtmosphereRegulator.hpp"

AtmosphereRegulator::AtmosphereRegulator()
{
    NasaError error("Not implemented.", "AtmosphereRegulator");
    throw(error);
    return;
}

AtmosphereRegulator::~AtmosphereRegulator()
{
}
