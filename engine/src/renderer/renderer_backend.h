#pragma once

#include "renderer_types.inl"

struct plateform_state;

b8 render_backend_create(render_backend_type type, struct platform_state* plat_state, renderer_backend* out_renderer_backend);
void renderer_backend_destory(renderer_backend* renderer_backend);