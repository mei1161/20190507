
#include<cstdio>
#include<array>
struct Test
{
    int num;
};
int main()
{
    
    int data[] = { 1,2,3 };
    //通常のループ
    for( int i = 0; i < 3; i++ )
    {
        printf( "%d\n", data[ i ] );
    }
    //Range based for
    //auto→型の導出
    //添え字がない
    //ループを回す配列を指定
    for( auto i : data )
    {
        printf( "%d\n", i );
    }
    //int型の[3]配列na
    //STLにも使える
    std::array<int, 3>na;
    //要素初期化
    na.at( 0 ) = 1;
    na.at( 1 ) = 2;
    na.at( 2 ) = 3;
    for( auto i : na )
    {
        printf( "%d\n", i );
    }
    //構造体などにも利用できる
    //添え字を使わない処理に有効(すべて同じ処理をする場合)
    //参照渡しにしてあげないと、中身が書き換わらない
    //普段はコピーが渡されている
    Test obj[3];
    for( auto& i : obj )
    {
        i.num = 100;
        printf( "%d\n", i );
    }
    //不定値が表示される(参照渡しではない場合)
    printf( "%d\n", obj[ 0 ] );





}