//
//  RoomFive.hpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef RoomFive_hpp
#define RoomFive_hpp

#include <stdio.h>
#include "Room.hpp"
#include "Shadow.hpp"

class RoomFive: public Room
{
public:
    RoomFive(); // constructor
    virtual void special_feature(); // function used to apply a special feature of this room
    virtual void menu(); // room menu used to navigate to other rooms
};

#endif /* RoomFive_hpp */
