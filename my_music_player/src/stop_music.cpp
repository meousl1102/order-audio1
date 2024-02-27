#include "stop_music.h"
#include <atomic>

std::atomic<bool> stopMusic(false);

void stopMusicPlayback() {
    stopMusic = true; // Set the flag to stop the music
}
