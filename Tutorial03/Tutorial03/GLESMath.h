//
//  GLESMath.h
//  Tutorial03
//
//  Created by kesalin@gmail.com on 12-11-26.
//  Copyright (c) 2012年 Created by kesalin@gmail.com on. All rights reserved.
//

#ifndef GLESMATH_H
#define GLESMATH_H

#include <OpenGLES/ES2/gl.h>

#ifdef __cplusplus
extern "C" {
#endif
    
    typedef struct
    {
        GLfloat   m[4][4];
    } KSMatrix4;
    
    //
    /// multiply matrix specified by result with a scaling matrix and return new matrix in result
    /// result Specifies the input matrix.  Scaled matrix is returned in result.
    /// sx, sy, sz Scale factors along the x, y and z axes respectively
    //
    void ksScale(KSMatrix4 *result, GLfloat sx, GLfloat sy, GLfloat sz);
    
    //
    /// multiply matrix specified by result with a translation matrix and return new matrix in result
    /// result Specifies the input matrix.  Translated matrix is returned in result.
    /// tx, ty, tz Scale factors along the x, y and z axes respectively
    //
    void ksTranslate(KSMatrix4 *result, GLfloat tx, GLfloat ty, GLfloat tz);
    
    //
    /// multiply matrix specified by result with a rotation matrix and return new matrix in result
    /// result Specifies the input matrix.  Rotated matrix is returned in result.
    /// angle Specifies the angle of rotation, in degrees.
    /// x, y, z Specify the x, y and z coordinates of a vector, respectively
    //
    void ksRotate(KSMatrix4 *result, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);

    //
    /// perform the following operation - result matrix = srcA matrix * srcB matrix
    /// result Returns multiplied matrix
    /// srcA, srcB Input matrices to be multiplied
    //
    void ksMatrixMultiply(KSMatrix4 *result, KSMatrix4 *srcA, KSMatrix4 *srcB);
    
    //
    //// return an indentity matrix 
    //// result returns identity matrix
    //
    void ksMatrixLoadIdentity(KSMatrix4 *result);
    
    //
    /// multiply matrix specified by result with a perspective matrix and return new matrix in result
    /// result Specifies the input matrix.  new matrix is returned in result.
    /// fovy Field of view y angle in degrees
    /// aspect Aspect ratio of screen
    /// nearZ Near plane distance
    /// farZ Far plane distance
    //
    void ksPerspective(KSMatrix4 *result, float fovy, float aspect, float nearZ, float farZ);
    
    //
    /// multiply matrix specified by result with a perspective matrix and return new matrix in result
    /// result Specifies the input matrix.  new matrix is returned in result.
    /// left, right Coordinates for the left and right vertical clipping planes
    /// bottom, top Coordinates for the bottom and top horizontal clipping planes
    /// nearZ, farZ Distances to the near and far depth clipping planes.  These values are negative if plane is behind the viewer
    //
    void ksOrtho(KSMatrix4 *result, float left, float right, float bottom, float top, float nearZ, float farZ);
    
    //
    // multiply matrix specified by result with a perspective matrix and return new matrix in result
    /// result Specifies the input matrix.  new matrix is returned in result.
    /// left, right Coordinates for the left and right vertical clipping planes
    /// bottom, top Coordinates for the bottom and top horizontal clipping planes
    /// nearZ, farZ Distances to the near and far depth clipping planes.  Both distances must be positive.
    //
    void ksFrustum(KSMatrix4 *result, float left, float right, float bottom, float top, float nearZ, float farZ);
    
#ifdef __cplusplus
}
#endif

#endif // GLESMATH_H
