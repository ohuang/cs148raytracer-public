#include "common/Scene/Lights/Directional/DirectionalLight.h"

void DirectionalLight::ComputeSampleRays(std::vector<Ray>& output, glm::vec3 origin) const
{
    const glm::vec3 rayDirection = -1.f * glm::vec3(GetForwardDirection());
    output.emplace_back(origin + rayDirection * LARGE_EPSILON, rayDirection);
}

float DirectionalLight::ComputeLightAttenuation(glm::vec3 origin) const
{
    return 1.f;
}