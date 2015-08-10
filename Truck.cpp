//
// Created by voodoo on 8/7/15.
//

#include "Truck.h"

/* Default Constructor */
Truck::Truck() {
    setName("default");
    setOriginCity("default");
    setDestCity("default");
    setFullWeight(0.00);
}

/* Constructor */
Truck::Truck(string driver, double unloaded, string ocity, string dcity) {
    setName(driver);
    setUnloadedWeight(unloaded);
    setOriginCity(ocity);
    setDestCity(dcity);
}

/* Copy Constructor */
Truck::Truck(const Truck &orig) {
    setName(orig.getName());
    setUnloadedWeight(orig.getUnloadedWeight());
    setOriginCity(orig.getOriginCity());
    setDestCity(orig.getDestCity());
}

/* setName */
void Truck::setName(string pname) {
    name = pname;
}

/* setOriginCity */
void Truck::setOriginCity(string pcity) {
    ocity = pcity;
}

/* setDestCity */
void Truck::setDestCity(string pcity) {
    dcity = pcity;
}

/* setAltInfo */
void Truck::setAltInfo(string pinfo) {
    altinfo = pinfo;
}

/* setNumPackages */
void Truck::setNumPackages(int pnum) {
    numpackages = pnum;
}

/* setFullWeight */
void Truck::setFullWeight(double pweight) {
    full = pweight;
}

/* setUnloadedWeight */
void Truck::setUnloadedWeight(double pweight) {
    unloaded = pweight;
}

/* addCargo */
void Truck::addCargo(Package &pkg) {
    full+=pkg.getWeight();
    cargoList.push_back(pkg);
}

/* printCargo */
void Truck::printCargo() {
    cout << "Driver: " << getName() << endl;
    cout << "Truck Loaded Weight: " << getUnloadedWeight() + getFullWeight() << endl;
    list<Package>::iterator index;
    for(index = cargoList.begin(); index != cargoList.end(); index++) {
        cout << "Package: " << index->getName() << endl;
        cout << "Tracking Number: " << index->getTrackingNumber() << endl;
    }
}


