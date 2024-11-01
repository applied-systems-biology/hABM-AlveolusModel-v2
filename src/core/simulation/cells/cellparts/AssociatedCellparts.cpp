//  Copyright by Christoph Saffer, Paul Rudolph, Sandra Timme, Marco Blickensdorf, Johannes Pollmächer
//  Research Group Applied Systems Biology - Head: Prof. Dr. Marc Thilo Figge
//  https://www.leibniz-hki.de/en/applied-systems-biology.html
//  HKI-Center for Systems Biology of Infection
//  Leibniz Institute for Natural Product Research and Infection Biology - Hans Knöll Insitute (HKI)
//  Adolf-Reichwein-Straße 23, 07745 Jena, Germany
//
//  This code is licensed under BSD 2-Clause
//  See the LICENSE file provided with this code for the full license.

#include "AssociatedCellparts.h"

AssociatedCellparts::AssociatedCellparts(Cell *mothercell, std::shared_ptr <Coordinate3D> connectionPoint) {
    this->mothercell = mothercell;
    this->mcConnectionPoint = std::move(connectionPoint);
}

Coordinate3D* AssociatedCellparts::getMcConnectionPoint(){
    return mcConnectionPoint.get();
}