#include "rotate.h"

// flip the image along the vertical axis
void getWaterImage(qtNode **t)
{
    if ((*t)->topLeft != NULL && (*t)->topLeft != NULL && (*t)->topLeft != NULL && (*t)->topLeft != NULL)
    {
        qtNode *temp;

        getWaterImage(&(*t)->topLeft);
        getWaterImage(&(*t)->topRight);
        getWaterImage(&(*t)->bottomRight);
        getWaterImage(&(*t)->bottomLeft);

        temp = (*t)->topLeft;
        (*t)->topLeft = (*t)->bottomLeft;
        (*t)->bottomLeft = temp;

        temp = (*t)->topRight;
        (*t)->topRight = (*t)->bottomRight;
        (*t)->bottomRight = temp;
    }
    // empty tree condition
    else
    {
        return;
    }
}

// flip the image along the horizontal axis
void getMirrorImage(qtNode **node)
{
    if ((*node)->topLeft != NULL && (*node)->topLeft != NULL && (*node)->topLeft != NULL && (*node)->topLeft != NULL)
    {
        qtNode *temp;

        getMirrorImage(&(*node)->topLeft);
        getMirrorImage(&(*node)->topRight);
        getMirrorImage(&(*node)->bottomRight);
        getMirrorImage(&(*node)->bottomLeft);

        temp = (*node)->topLeft;
        (*node)->topLeft = (*node)->topRight;
        (*node)->topRight = temp;

        temp = (*node)->bottomLeft;
        (*node)->bottomLeft = (*node)->bottomRight;
        (*node)->bottomRight = temp;
    }
    // empty tree condition
    else
    {
        return;
    }
}

// rotate the image to the left by 90 degrees
void rotateLeft(qtNode **t)
{
    if ((*t)->topLeft != NULL && (*t)->topLeft != NULL && (*t)->topLeft != NULL && (*t)->topLeft != NULL)
    {
        qtNode *temp1;
        qtNode *temp2;
        qtNode *temp3;
        qtNode *temp4;

        rotateLeft(&(*t)->topLeft);
        rotateLeft(&(*t)->topRight);
        rotateLeft(&(*t)->bottomLeft);
        rotateLeft(&(*t)->bottomRight);

        temp1 = (*t)->topLeft;
        temp2 = (*t)->topRight;
        temp3 = (*t)->bottomLeft;
        temp4 = (*t)->bottomRight;

        (*t)->topLeft = temp2;
        (*t)->topRight = temp4;
        (*t)->bottomLeft = temp1;
        (*t)->bottomRight = temp3;
    }
    else
    {
        return;
    }
}

// rotate the image to the right by 90 degrees
void rotateRight(qtNode **t)
{
    if ((*t)->topLeft != NULL && (*t)->topLeft != NULL && (*t)->topLeft != NULL && (*t)->topLeft != NULL)
    {
        qtNode *temp1;
        qtNode *temp2;
        qtNode *temp3;
        qtNode *temp4;

        rotateRight(&(*t)->topLeft);
        rotateRight(&(*t)->topRight);
        rotateRight(&(*t)->bottomLeft);
        rotateRight(&(*t)->bottomRight);

        temp1 = (*t)->topLeft;
        temp2 = (*t)->topRight;
        temp3 = (*t)->bottomLeft;
        temp4 = (*t)->bottomRight;

        (*t)->topLeft = temp3;
        (*t)->topRight = temp1;
        (*t)->bottomLeft = temp4;
        (*t)->bottomRight = temp2;
    }
    else
    {
        return;
    }
}

// rotate the image 180 degrees
void rotate180(qtNode **t)
{
    if ((*t)->topLeft != NULL && (*t)->topLeft != NULL && (*t)->topLeft != NULL && (*t)->topLeft != NULL)
    {
        qtNode *temp1;
        qtNode *temp2;
        qtNode *temp3;
        qtNode *temp4;

        rotate180(&(*t)->topLeft);
        rotate180(&(*t)->topRight);
        rotate180(&(*t)->bottomLeft);
        rotate180(&(*t)->bottomRight);

        temp1 = (*t)->topLeft;
        temp2 = (*t)->topRight;
        temp3 = (*t)->bottomLeft;
        temp4 = (*t)->bottomRight;

        (*t)->topLeft = temp4;
        (*t)->topRight = temp3;
        (*t)->bottomLeft = temp2;
        (*t)->bottomRight = temp1;
    }
    else
    {
        return;
    }
}

