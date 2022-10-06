#ifndef DIRECTSHADER_H
#define DIRECTSHADER_H

#include "shader.h"

class DirectShader : public Shader
{
public:
    DirectShader();
    DirectShader(Vector3D color_, double maxDist_, Vector3D bgColor_);

    virtual Vector3D computeColor(const Ray &r,
                             const std::vector<Shape*> &objList,
                             const std::vector<PointLightSource> &lsList) const;


    double maxDist;
    Vector3D color;
};


#endif // DIRECTSHADER_H