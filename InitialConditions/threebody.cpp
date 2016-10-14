#include "threebody.h"
#include "../vec3.h"
#include "../system.h"
#include <cmath>


void ThreeBody::setupParticles(System &system) {
    /*
     * This is where you should implement the initialization of a three-body
     * system.
     *
     * You should start by impelmenting the two-body scheme in the
     * InitialiCondition::TwoBody class, and then implement the more
     * complicated three-body initialization only after you have a working
     * implementation of the two-body case.
     */

    //Particle* Sun = new Particle(vec3(0,0,0), vec3(0,0,0), 1.0);
    // initial positions for oct 12.
    Particle* Sun = new Particle(vec3(3.571526865010806E-03, 3.389038138932890E-03, 0), vec3(-1.970078468466432E-06, 6.846218005095042E-06, 0)*365.25, 1.0);

    //Earth initial velocity[AU/yr] and mass in masses of sun
    Particle* Earth= new Particle(vec3(9.479178499336547E-01, 3.261066313699268E-01,0), vec3(-5.849360690746023E-03*365, 1.621703296479702E-02*365, 0), 0.000003);
    //Mars
    Particle* Mars = new Particle(vec3(1.136999274118817E+00, -7.886673045811080E-01 ,0), vec3(8.545468568248289E-03*365, 1.267637022893171E-02*365 ,0), 3.2*pow(10,-7));
    //Jupiter
    Particle* Jupiter = new Particle(vec3(-5.430133496003112E+00, -4.320838090483172E-01, 0), vec3(5.120612945394301E-04, -7.165562916536973E-03, 0)*365.25, 9.545325625*pow(10,-4));

    system.addParticle(Sun);
    system.addParticle(Earth);
    //system.addParticle(Mars);
    system.addParticle(Jupiter);
}

std::string ThreeBody::getName() {
    return "Three-body";
}
