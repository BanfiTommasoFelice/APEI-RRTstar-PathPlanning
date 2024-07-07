#include "grid.hpp"

// Constructor for the Grid class
Grid::Grid(int d, int SIZE_X, int SIZE_Y, int SIZE_Z, int obs_num, int max_size, int min_size, int seedTest)
{
    int x, y, z, size;
    dim = d;
    seed = seedTest;

    // Set the seed for random number generation
    if (seed == -1)
        seed = time(NULL);
    srand(seed);

    if (dim == 2)
    {
        // Initialize 2D grid
        grid2d = grid2D(SIZE_X, vector<bool>(SIZE_Y, false));

        // Generate obstacles in the 2D grid
        for (int i = 0; i < obs_num; i++)
        {
            x = rand() % SIZE_X;
            y = rand() % SIZE_Y;
            size = (rand() % (max_size - min_size)) + min_size;

            obstacle o = obstacle(point(x, y, 0), size);
            obstacles.push_back(o);

            // Mark obstacle positions in the grid
            for (int j = x; (j < x + size && j < SIZE_X); j++)
            {
                for (int t = y; (t < y + size && t < SIZE_Y); t++)
                {
                    grid2d[j][t] = true;
                }
            }
        }

        // Clear START and GOAL areas after placing obstacles
        int clear_margin_x = SIZE_X * 0.2;
        int clear_margin_y = SIZE_Y * 0.2;

        for (int j = clear_margin_x; j < clear_margin_x + 0.1 * SIZE_X; j++)
        {
            for (int t = clear_margin_y; t < clear_margin_y + 0.1 * SIZE_Y; t++)
            {
                grid2d[j][t] = false;
            }
        }
        for (int j = SIZE_X - clear_margin_x; j < SIZE_X - clear_margin_x + 0.1 * SIZE_X; j++)
        {
            for (int t = SIZE_Y - clear_margin_y; t < SIZE_Y - clear_margin_y + 0.1 * SIZE_Y; t++)
            {
                grid2d[j][t] = false;
            }
        }
    }
    else if (dim == 3)
    {
        // Initialize 3D grid
        grid3d = grid3D(SIZE_X, vector<vector<bool>>(SIZE_Y, vector<bool>(SIZE_Z, false)));

        // Generate obstacles in the 3D grid
        for (int i = 0; i < obs_num; i++)
        {
            x = rand() % SIZE_X;
            y = rand() % SIZE_Y;
            z = rand() % SIZE_Z;
            size = (rand() % (max_size - min_size)) + min_size;

            obstacle o = obstacle(point(x, y, z), size);
            obstacles.push_back(o);

            // Mark obstacle positions in the grid
            for (int dx = x; (dx < x + size && dx < SIZE_X); dx++)
            {
                for (int dy = y; (dy < y + size && dy < SIZE_Y); dy++)
                {
                    for (int dz = z; (dz < z + size && dz < SIZE_Z); dz++)
                    {
                        grid3d[dx][dy][dz] = true;
                    }
                }
            }
        }

        // Clear START and GOAL areas after placing obstacles
        int clear_margin_x = SIZE_X * 0.2;
        int clear_margin_y = SIZE_Y * 0.2;
        int clear_margin_z = SIZE_Z * 0.2;

        for (int dx = clear_margin_x; dx < clear_margin_x + 0.1 * SIZE_X; dx++)
        {
            for (int dy = clear_margin_y; dy < clear_margin_y + 0.1 * SIZE_Y; dy++)
            {
                for (int dz = clear_margin_z; dz < clear_margin_z + 0.1 * SIZE_Z; dz++)
                {
                    grid3d[dx][dy][dz] = false;
                }
            }
        }
        for (int dx = SIZE_X - clear_margin_x; dx < SIZE_X - clear_margin_x + 0.1 * SIZE_X; dx++)
        {
            for (int dy = SIZE_Y - clear_margin_y; dy < SIZE_Y - clear_margin_y + 0.1 * SIZE_Y; dy++)
            {
                for (int dz = SIZE_Z - clear_margin_z; dz < SIZE_Z - clear_margin_z + 0.1 * SIZE_Z; dz++)
                {
                    grid3d[dx][dy][dz] = false;
                }
            }
        }
    }
}
