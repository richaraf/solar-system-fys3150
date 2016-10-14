#include "twobody.h"
#include "../vec3.h"
#include "../system.h"
#include <cmath>


void TwoBody::setupParticles(System &system) {
    /*
     * Here, two bodies are created at a distance r=1.0 apart from eachother.
     * A heavy body is placed in the origin, while a lighter body is placed
     * in (1,0,0) with an initial velocity of (0,1,0). The larger body is given
     * a mass of 1.0, while the mass of the smaller body is set to 0.1.
     *
     * Please note that these are NOT the values needed in order to achieve a
     * circular orbit (Sun-Earth-like). It is up to you to find the correct
     * masses, distances, and velocities.
     *
     * Note that the constructor of the Particle class takes three inputs,
     * a vec3-vector of positions values, a vec3-vector of velocity values,
     * and the mass--a double. As an example:
     *
     *      Particle* p = new Particle(vec3(1,2,3), vec3(4,5,6), 7.0);
     *                                  ^            ^            ^
     *                               Position     Velocity      Mass
     */

    // initial positions for oct 12.
    Particle* Sun = new Particle(vec3(3.571526865010806E-03, 3.389038138932890E-03, 0), vec3(-1.970078468466432E-06, 6.846218005095042E-06, 0)*365.25, 1.0);
    //Earth initial velocity[AU/yr] and mass
    Particle* smallBody = new Particle(vec3(9.479178499336547E-01, 3.261066313699268E-01,0), vec3(-5.849360690746023E-03*365, 1.621703296479702E-02*365, 0), 0.000001);
    system.addParticle(largeBody);
    system.addParticle(smallBody);
}

std::string TwoBody::getName() {
    return "Two-body";
}
