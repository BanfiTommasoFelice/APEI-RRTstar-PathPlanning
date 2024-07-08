#ifndef GRID_HPP
#define GRID_HPP

#include <vector>
#include <cmath>
#include <ctime>

/* MAP PARAMETERS FROM MAIN
#define DEPTH 10
#define SIZE_X (DEPTH * 500) // meters
#define SIZE_Y (DEPTH * 500) // meters
#define SIZE_Z (DEPTH * 1)   // meters
#define MAX_STEP (3 * DEPTH) // meters
*/

using namespace std;

// Forward declaration of the point structure
struct point;

// Type definitions for 2D and 3D grids
typedef vector<vector<vector<bool>>> grid3D;
typedef vector<vector<bool>> grid2D;

// Structure for representing obstacles
struct obstacle {
    point p;
    int size;
    obstacle(point p, int size) : p(p), size(size) {}
};

// Declaration of the Grid class
class Grid {
public:
    grid2D grid2d;
    grid3D grid3d;
    int dim;
    int seed;
    vector<obstacle> obstacles;

    // Constructor for the Grid class
    Grid(int d, int SIZE_X, int SIZE_Y, int SIZE_Z = 0, int obs_num = 100, int max_size = 10, int min_size = 1, int seedTest = -1);
};

#endif // GRID_HPP
