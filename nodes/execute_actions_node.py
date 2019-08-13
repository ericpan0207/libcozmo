#!/usr/bin/env python3

import rospy
from libcozmo.msg import OOAction

import cozmo

class ExecuteActionNode():
    def __init__(self, cozmo):
        self.cozmo = cozmo
        # self.generic_action_listener = rospy.Subscriber("")
        self.oo_action_listener = rospy.Subscribr("oo_action");
    def execute_action():

def cozmo_run(robot: cozmo.robot):
    node = ExecuteActionNode(robot)
    node.create_node()

if __name__ == '__main__':
    rospy.init_node('execute_action_node', anonymous=True)
    try:
        cozmo.run_program(cozmo_run)
    except rospy.ROSInterruptException:
        pass
