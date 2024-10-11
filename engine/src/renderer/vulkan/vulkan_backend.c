#include "vulkan_backend.h"
#include "vulkan_types.inl"
#include "core/logger.h"
#include "containers/darray.h"
#include "core/kstrings.h"
#include "platform/platform.h"

// static vulkan context
static vulkan_context context;

b8 vulkan_renderer_backend_initialize(renderer_backend* backend, const char* application_name, struct platform_state* plat_state) {

    // TODO: custom allocator.
    context.allocator = 0;

    // Setup vulkan instance.
    VkApplicationInfo app_info = {VK_STRUCTURE_TYPE_APPLICATION_INFO};
    app_info.apiVersion = VK_API_VERSION_1_2;
    app_info.pApplicationName = application_name;
    app_info.apiVersion = VK_MAKE_VERSION(1,0,0);
    app_info.pEngineName = "Engine";
    app_info.engineVersion = VK_MAKE_VERSION(1,0,0);

    VkInstanceCreateInfo create_info = {VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
    create_info.pApplicationInfo = &app_info;

    // Obtain a list of required extensions.
    const char** required_extensions = darray_create(const char*);
    darray_push(required_extensions, &VK_KHR_SURFACE_EXTENSION_NAME); // Generic surface extension
    platform_get_required_extensions_name(&required_extensions); // Platform-specific extension(s)

#if defined(_DEBUG)
    darray_push(required_extensions, &VK_EXT_DEBUG_UTILS_EXTENSION_NAME); // debug utilities

    KDEBUG("Required extensions:");
    u32 length = darray_length(required_extensions);
    for (u32 i = 0; i < length; ++i) {
        KDEBUG(required_extensions[i]);
    }
#endif


    create_info.enabledExtensionCount = darray_length(required_extensions);
    create_info.enabledLayerCount = 0;
    create_info.ppEnabledExtensionNames = required_extensions;
    create_info.ppEnabledLayerNames = 0;  

    VkResult result = vkCreateInstance(&create_info, context.allocator, &context.instance);

    if(result != VK_SUCCESS) {
        KERROR("vkCreateInstance failed with result: %u", result);
        return FALSE;
    }

    KINFO("Vulkan renderer initialize successfully.");
    return TRUE;
}

void vulkan_renderer_backend_shutdown(renderer_backend* backend) {

}

void vulkan_renderer_backend_on_resize(renderer_backend* backend, u16 width, u16 height) {

}

b8 vulkan_renderer_backend_begin_frame(renderer_backend* backend, f32 delta_time) {
    return TRUE;
}   

b8 vulkan_renderer_backend_end_frame(renderer_backend* backend, f32 delta_time) {
    return TRUE;
}