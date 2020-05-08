include "hokuyo.inc"

define pioneer3at position
(
	color "red"          # Default color.
	drive "diff"         # Differential steering model.
	gui_nose 1           # Draw a nose on the robot so we can see which way it points
	obstacle_return 1    # Can hit things.
	laser_return 1       # reflects sonar beams

	# alternative odometric localization with simple error model
	odom_error [0.01 0.01 0 2]
	localization "odom"

	# four DOF kinematics limits [ xmin xmax ymin ymax zmin zmax amin amax ]
	velocity_bounds     [-1.5 1.5 0 0 0 0 -70.0 70.0 ]
	acceleration_bounds [-1.8 1.8 0 0 0 0 -70.0 70.0 ]

	# Actual size
	size [0.2 0.2 0.4]

	# The pioneer's center of rotation is offset from its center of area
	origin [0 0 0 0]

	# Estimated mass in KG
	mass 30.0

	hokuyolaser()
)


