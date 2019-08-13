////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2019,  Brian Lee, Vinitha Ranganeni
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     1. Redistributions of source code must retain the above copyright notice
//        this list of conditions and the following disclaimer.
//     2. Redistributions in binary form must reproduce the above copyright
//        notice, this list of conditions and the following disclaimer in the
//        documentation and/or other materials provided with the distribution.
//     3. Neither the name of the copyright holder nor the names of its
//        contributors may be used to endorse or promote products derived from
//        this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
////////////////////////////////////////////////////////////////////////////////

#include <action_space/generic_action_space.hpp>
#include <exception>
#include <iostream>


namespace libcozmo {
namespace actionspace {

bool GenericActionSpace::action_similarity(
        const int& action_id1,
        const int& action_id2,
        double* similarity) const {

    if (!(is_valid_action_id(action_id1) &&
        is_valid_action_id(action_id2))) {
        return false;
    } else {
        *similarity = sqrt(
        pow((m_actions[action_id1]->m_speed -
            m_actions[action_id2]->m_speed), 2) +
        pow((m_actions[action_id1]->m_duration -
            m_actions[action_id2]->m_duration), 2) +
        pow((m_actions[action_id1]->m_heading -
            m_actions[action_id2]->m_heading), 2));
        return true;
    }
}
// boolean get_action(const int& action_id, Action* action)
bool GenericActionSpace::get_action(const int& action_id,  ActionSpace::Action* action) const {
    // if (!is_valid_action_id(action_id)) {
    //     return false;    
    // } else {
    //     // auto action_val = *m_actions[action_id];
    //     // Action* _action = static_cast<Action*>(action);
    //     // *_action = Action(action_val.m_speed, action_val.m_duration, action_val.m_direction);
    //     return true;
    // }
}

bool GenericActionSpace::is_valid_action_id(const int& action_id) const {
    // return ((action_id < m_actions.size() && action_id >= 0));
}

void GenericActionSpace::publish_action(const int& action_id, const ros::Publisher& publisher) const {
    // libcozmo::ActionMsg msg;
    // Action* action;
    // get_action(action_id, action);
    // msg.speed = action->m_speed;
    // Eigen::Vector2d direction = action->m_direction;
    // msg.heading = atan(direction.y() / direction.x());
    // msg.duration = action->m_duration;
    // publisher.publish(msg);
}
}  // namespace actionspace
}  // namespace libcozmo
