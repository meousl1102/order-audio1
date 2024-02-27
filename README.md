# hướng dẫn sử dụng

Bước 1 : Download 2 thư viện sdl2 và sdl2_mixer

sudo apt-get update

sudo apt-get install libsdl2-dev libsdl2-mixer-dev

Bước 2 : Xoá 2 thư mục devel và build khi git clone về

catkin_make

source devel/setup.bash

Bước 4 : khởi chạy code

rosrun my_music_player music_player_node 001.mp3 128 -1

Với 001.mp3 là tên bài hát trong folder sound 

128 là 100% âm lượng 

-1 hoặc 0 là mode lập lại bài nhạc với -1 là lập lại nhiều lần và 0 là chạy một lần
