
#include <iostream>
#include "Errors.hpp"
#include "WaterReclaimer.hpp"

WaterReclaimer::WaterReclaimer()
    : _water(0),
      _started(false)
{
}

void
WaterReclaimer::start()
{
    if (_water == 0) {
        MissionCriticalError test("Not enough water to achieve the mission.", "WaterReclaimer");
        throw(test);
        return;
    }
    _started = true;
}

void
WaterReclaimer::useWater(int water)
{
    if (_started == false) {
        UserError error_("Cannot use water if the reclaimer hasn't started.", "WaterReclaimer");
        throw(error_);
        return;
    }
    if (water <= 0) {
        UserError error_("Water use should be positif.", "WaterReclaimer");
        throw(error_);
        return;
    }
    if (_water - water < 10) {
        LifeCriticalError error("Cannot use water, not enough in the reclaimer.", "WaterReclaimer");
        throw(error);
        return;
    }
    _water -= water;
}

void
WaterReclaimer::generateWater()
{
    if (_started == true) {
        NasaError error("Cannot generate water, reclaimer already full.", "WaterReclaimer");
        throw(error);
        return;
    }
    _water += 10;
}
