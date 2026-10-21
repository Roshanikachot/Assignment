#include <stdio.h>

int main() {
    char*playlistName = "Bollywood 2026";
    int totalSongs = 25;
    float avgDuration = 3.45f;

    
    printf("My favorite Spotify playlist is '%s', which contains %d songs with an average duration of %.2f minutes per song.\n", 
           playlistName, totalSongs, avgDuration);

    return 0;
}