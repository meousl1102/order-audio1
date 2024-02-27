#include "my_music_player/music_player.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <song_filename>" << std::endl;
        return 1;
    }

    MusicPlayer player;

    // Get the song filename from command-line arguments
    const char* song_filename = argv[1];
    int volume = std::stoi(argv[2]);
    int mode = std::atoi(argv[3]);

    // Construct the full path using the current working directory
    std::string current_directory = "/home/robotics/Desktop/order-audio/src/my_music_player/sound";
    std::string full_path = current_directory + "/" + song_filename;

    // Play the song provided in the path
    player.playSong(full_path.c_str(), mode);

    // Set the volume for music
    player.setMusicVolume(volume);

    // Wait for a while (e.g., 3 seconds = 3000)
    SDL_Delay(3000);

    // Stop the song
    player.stopSong();

    return 0;
}