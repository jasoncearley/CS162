//
//  RoomOne.hpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef RoomOne_hpp
#define RoomOne_hpp

#include <stdio.h>
#include "Room.hpp"

class RoomOne: public Room
{    
public:
    RoomOne(); // constructor
    virtual void special_feature(); // function used to apply a special feature of this room
    virtual void menu(); // room menu used to navigate to other rooms
};

#endif /* RoomOne_hpp */
