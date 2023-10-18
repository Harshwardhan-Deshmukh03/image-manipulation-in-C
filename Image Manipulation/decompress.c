#include "decompress.h"

//--------------------DECOMPRESSION FUNCTION----------------------------------//

void decompressImage(qtNode *node, pixels ***imageMatrix, int startX, int startY, int blockSize)
{
    int i, j;

    // already optimized tree
    if (node->topLeft == NULL && node->topRight == NULL && node->bottomLeft == NULL && node->bottomRight == NULL)
    {
        for (i = startY; i < startY + blockSize; i++)
        {
            for (j = startX; j < startX + blockSize; j++)
            {
                (*imageMatrix)[i][j].red = node->p.red;
                (*imageMatrix)[i][j].green = node->p.green;
                (*imageMatrix)[i][j].blue = node->p.blue;
            }
        }
    }
    // decompress till tree is optimized
    else
    {
        decompressImage(node->topLeft, imageMatrix, startX, startY, blockSize / 2);
        decompressImage(node->topRight, imageMatrix, startX + (blockSize / 2), startY, blockSize / 2);
        decompressImage(node->bottomRight, imageMatrix, startX + (blockSize / 2), startY + (blockSize / 2), blockSize / 2);
        decompressImage(node->bottomLeft, imageMatrix, startX, startY + (blockSize / 2), blockSize / 2);
    }
}

