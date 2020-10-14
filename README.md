# cub3D

This is a graphical project for 42 school.

The idea is to simulate a 3 dimension render based on a 2 dimension map, using the raycasting.
The user must be able to move throughtout the map (using WASD keys for movement, left and right
arrows for rotation). You can open the subject.pdf file for better insight on what is mandatory.

The Minilibix library as well as the libft are used for this project.

In order to understand what the project is about, here is a brief preview of raycasting :
The main idea is to "cast rays", all starting at the player position, and sent to every
pixel, in the x axis of the screen. As soon a the ray encounters a wall, we can define the
distance between the hit point and the player. Based on this distance, we render the wall
in a specific size. This simulates perspective in a 3 dimension world.

