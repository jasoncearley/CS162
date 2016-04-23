//
//  RoomTwo.hpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef RoomTwo_hpp
#define RoomTwo_hpp

#include <stdio.h>
#include "Room.hpp"
#include "Barbarian.hpp"

class RoomTwo: public Room
{    
public:
    RoomTwo(); // constructor
    virtual void special_feature(); // function used to apply a special feature of this room
    virtual void menu(); // room menu used to navigate to other rooms
};

#endif /* RoomTwo_hpp */
