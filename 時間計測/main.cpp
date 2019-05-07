#include <cstdio>
#include <chrono>
#include <Windows.h>

using namespace std::chrono;

int main()
{
    // 時間計測
    // clock関数
    // Ｃ言語の関数
    // プログラムの実行開始から現在までの時間を返す

    // timeGetTime関数
    // WindowsAPIの関数
    // ＰＣが起動してから現在までの時刻を返す

    // QueryPerformanceCounter関数
    // WindowsAPIの関数
    // ＰＣが起動してから現在までの時刻を返す
    // timeGetTime関数より精度が高い

    // std::chrono
    // Ｃ＋＋で実装されているライブラリ関数

    // 現在の時刻を取得
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // 適当に止める
    Sleep( 1000 );

    // 現在の時刻を取得
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // 差分を取得して表示
    std::chrono::seconds elapsed = std::chrono::duration_cast<std::chrono::seconds>(end - start);
    printf( "経過時間は%lld秒です。\n", elapsed.count() );


    // 普段はautoでよい(using指令を使ってstd::chronoの省略も可）
    auto start2 = high_resolution_clock::now();
    Sleep( 2000 );
    auto end2 = high_resolution_clock::now();

    milliseconds elapsed2 = duration_cast<milliseconds>(end2 - start2);
    printf( "経過時間は%lldミリ秒です。\n", elapsed2.count() );

    // 精度は自由に選べる
    // seconds　　　…秒
    // milliseconds…ミリ秒が
    // microseconds…マイクロ秒
    // nanoseconds　…ナノ秒
}
