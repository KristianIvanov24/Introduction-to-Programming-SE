#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Invalid n!";
        return 0;
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            // To solve this problem, we need to figure out which "layer" each number belongs to in the spiral.
            // Think of the spiral like a bunch of squares inside eachother.
            // Each square is a layer. The outermost layer is the biggest square (layer 0)
            // as you go inward, the squares get smaller and smaller.
            // Each layer is essentially a "frame" that surrounds the previous layer.
            // We can figure out which number to print if we find out:
            // 1) Which layer we are on.
            // 2) Which is the biggest number in the upper layer.
            // 2) Where exactly in the layer we are.

            // For example if n = 5
            // Layer 0 (outer layer) - 1-16
            // Layer 1 (inner layer) - 17-24
            // Layer 2 (most inner layer) - 25

            // 1  2  3  4  5
            // 16 17 18 19 6
            // 15 24 25 20 7
            // 14 23 22 21 8
            // 13 12 11 10 9
            // And if we look at each number's corresponding layer
            // 0  0  0  0  0
            // 0  1  1  1  0
            // 0  1  2  1  0
            // 0  1  1  1  0
            // 0  0  0  0  0

            // Calculate the distance to each edge of the square
            int distanceTop = row;
            int distanceRight = n - 1 - col;
            int distanceBottom = n - 1 - row;
            int distanceLeft = col;

            // We determine the layer of the spiral by the minimum distance to any of the edges
            int layer = distanceTop;
            if (distanceBottom < layer)
            {
                layer = distanceBottom;
            }
            if (distanceLeft < layer)
            {
                layer = distanceLeft;
            }
            if (distanceRight < layer)
            {
                layer = distanceRight;
            }

            // Side length of the current layer
            int sideLength = n - 2 * layer;
            // The largest number in the upper layer
            int upperLayerLastNumber = 4 * layer * (n - layer);
            // The starting number for the current layer
            int startNumber = upperLayerLastNumber + 1;
            
            if (sideLength == 1)  // Center of the spiral
            {
                std::cout << startNumber << " ";
                continue;
            }
            
            int layerTopBorder = layer;
            int layerRightBorder = n - 1 - layer;
            int layerBottomBorder = n - 1 - layer;
            int layerLeftBorder = layer;
            
            // This will store the current position within the layer
            int positionInLayer;

            if (row == layerTopBorder)  // The number is in the upper row of the current layer
            {
                positionInLayer = col - layerLeftBorder;
            }
            else if (col == layerRightBorder)  // The number is in the right column of the current layer
            {
                positionInLayer = row - layerTopBorder + (sideLength - 1);
            }
            else if (row == layerBottomBorder)  // The number is in the bottom row of the current layer
            {
                positionInLayer = layerRightBorder - col + (sideLength - 1) * 2;
            }
            else  // The number is in the left column of the current layer
            {
                positionInLayer = layerBottomBorder - row + (sideLength - 1) * 3;
            }

            std::cout << startNumber + positionInLayer << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}