#include <entry.h>

// Define the function to create a game.
b8 create_game(game *out_game) {

    // Application configuration
    application_config config;
    out_game->app_config.start_pos_x = 100;
    out_game->app_config.start_pos_y = 100;
    out_game->app_config.start_width = 1280;
    out_game->app_config.start_height = 720;
    out_game->app_config.name = "Engine Tested";
}
