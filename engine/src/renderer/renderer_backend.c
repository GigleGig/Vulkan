#include "renderer_backend.h"
#include "vulkan/vulkan_backend.h"

b8 render_backend_create(render_backend_type type, struct platform_state* plat_state, renderer_backend* out_renderer_backend) {
    out_renderer_backend->plat_state = plat_state;

    if(type == RENDERER_BACKEND_TYPE_VULKAN) {
        
        out_renderer_backend->initialize = vulkan_renderer_backend_initialize;
        out_renderer_backend->shutdown = vulkan_renderer_backend_shutdown;
        out_renderer_backend->begin_frame = vulkan_renderer_backend_begin_frame;
        out_renderer_backend->end_frame = vulkan_renderer_backend_end_frame;
        out_renderer_backend->resize = vulkan_renderer_backend_on_resize;

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