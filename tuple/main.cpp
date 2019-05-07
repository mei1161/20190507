#include<tuple>
#include<cstdio>

int main()
{
    //tuple
    //複数の型を１つの変数で扱うことができる
    //構造体を作るまでもない、複数の値を渡したい、戻り値として受け取りたいときに利用する
    //テンプレートで作られているので、構造体やクラスなども指定できる(tupleも持たせられる)
    std::tuple<int, float>num = std::make_tuple( 10, 20.0F );

    //アクセス
    //std::get関数を使う<>の中に先頭から何番目かを指定する
    //引数にはどの変数かを指定
    printf( "num:int=%d\n", std::get<0>( num ) );
    printf( "num:float=%f\n", std::get<1>( num ) );
}