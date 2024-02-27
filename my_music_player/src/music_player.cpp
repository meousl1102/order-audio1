#include "my_music_player/music_player.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>


MusicPlayer::MusicPlayer() {
    // Initialize SDL
    SDL_Init(SDL_INIT_AUDIO);

    // Initialize SDL2_mixer
    Mix_Init(MIX_INIT_MP3);
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
}

void MusicPlayer::playSong(const char* filePath, int mode) {
    // Load an MP3 file
    Mix_Music* music = Mix_LoadMUS(filePath);

    if (music == NULL) {
        printf("Unable to load MP3 file! SDL_mixer Error: %s\n", Mix_GetError());
        return;
    }

    // Play the loaded MP3 file
    Mix_PlayMusic(music , mode); // 0 to one time ; -1 to repeat
}

void MusicPlayer::stopSong() {
    // Halt any currently playing music
    Mix_HaltMusic();
}

void MusicPlayer::setMusicVolume(int volume) {
    // Set the volume for music
    Mix_VolumeMusic(volume);
}

MusicPlayer::~MusicPlayer() {
    // Quit SDL2_mixer and SDL
    Mix_CloseAudio();
    Mix_Quit();
    SDL_Quit();
}