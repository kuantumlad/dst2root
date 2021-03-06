/**************************************/
/*																		*/
/*  Created by Nick Tyler             */
/*	University Of South Carolina      */
/**************************************/

#ifndef CONSTANTS_H_GUARD
#define CONSTANTS_H_GUARD

static const double PI = ROOT::Math::Pi();
static const double D2R = PI / 180.0;
static const int POSITIVE = 1;
static const int NEGATIVE = -1;

// particle codes
static const int PROTON = 2212;
static const int NEUTRON = 2112;
static const int PIP = 211;
static const int PIM = -211;
static const int PI0 = 111;
static const int KP = 321;
static const int KM = -321;
static const int PHOTON = 22;
static const int ELECTRON = 11;

// PDG particle masses in GeV/c2
static const double MASS_P = 0.93827203;
static const double MASS_N = 0.93956556;
static const double MASS_E = 0.000511;
static const double MASS_PIP = 0.13957018;
static const double MASS_PIM = 0.13957018;
static const double MASS_PI0 = 0.1349766;
static const double MASS_KP = 0.493677;
static const double MASS_KM = 0.493677;
static const double MASS_G = 0.0;
static const double MASS_OMEGA = 0.78265;

double massFromPID(int pid) {
  switch (pid) {
    case PROTON:
      return MASS_P;
    case NEUTRON:
      return MASS_N;
    case PIP:
      return MASS_PIP;
    case PIM:
      return MASS_PIM;
    case PI0:
      return MASS_PI0;
    case KP:
      return MASS_KP;
    case KM:
      return MASS_KM;
    case PHOTON:
      return MASS_G;
    case ELECTRON:
      return MASS_E;
    default:
      return std::nanf("-9999");
  }
}

#endif
