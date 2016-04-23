//
//  RoomThree.hpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef RoomThree_hpp
#define RoomThree_hpp

#include <stdio.h>
#include "Room.hpp"
#include "Reptile.hpp"

class RoomThree: public Room
{
public:
    RoomThree(); // constructor
    virtual void special_feature(); // function used to apply a special feature of this room
    virtual void menu(); // room menu used to navigate to other rooms
};

#endif /* RoomThree_hpp */
