#include "renderer_backend.h"

b8 render_backend_create(render_backend_type type, struct platform_state* plat_state, renderer_backend* out_renderer_backend) {
    out_renderer_backend->plat_state = plat_state;

    if(type == RENDERER_BACKEND_TYPE_VULKAN) {
        // TODO: fill out 

        return TRUE;
    }

    return FALSE;
}


void renderer_backend_destory(renderer_backend* renderer_backend) {
    renderer_backend->initialize = 0;
    renderer_backend->shutdown = 0;
    renderer_backend->begin_frame = 0;
    renderer_backend->end_frame = 0;
    renderer_backend->resize = 0;
    
}