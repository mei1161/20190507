#include <cstdio>
#include <array>

struct Test
{
    int num;
};

int main()
{
    int data[] = { 1, 2, 3 };

    // 通常のループ
    for( int i = 0; i < 3; i++ )
    {
        printf( "%d\n", data[ i ] );
    }

    // Range based for（範囲for文）
    // 先頭から末尾まで処理を行いたい場合に使える
    // 要素番号が不要になり、ループが簡潔に書ける
    // 要素番号を演算に使いたい場合は通常のfor文を使用する
    for( auto i : data )
    {
        printf( "%d\n", i );
    }

    // STLにも使える（イテレータと同じ動きをする）
    // 内部的にbegin関数とend関数を呼び出している
    std::array<int, 3> na;
    na.at( 0 ) = 1;
    na.at( 1 ) = 2;
    na.at( 2 ) = 3;

    for( auto i : na )
    {
        printf( "%d\n", i );
    }

    // 構造体などにも利用できる
    Test obj[ 3 ];

    for( auto i : obj )
    {
        i.num = 100;
    }

    // Range based forの作業用変数は
    // コピーが渡される（値渡し）
    printf( "%d\n", obj[ 0 ].num );

    // ループの中で値を書き換えたい場合は参照にする
    for( auto& i : obj )
    {
        i.num = 100;
    }

    // 参照で処理すれば書き換わる
    printf( "%d\n", obj[ 0 ] );
}