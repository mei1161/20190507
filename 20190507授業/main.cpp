
#include<cstdio>
#include<array>
struct Test
{
    int num;
};
int main()
{
    
    int data[] = { 1,2,3 };
    //�ʏ�̃��[�v
    for( int i = 0; i < 3; i++ )
    {
        printf( "%d\n", data[ i ] );
    }
    //Range based for
    //auto���^�̓��o
    //�Y�������Ȃ�
    //���[�v���񂷔z����w��
    for( auto i : data )
    {
        printf( "%d\n", i );
    }
    //int�^��[3]�z��na
    //STL�ɂ��g����
    std::array<int, 3>na;
    //�v�f������
    na.at( 0 ) = 1;
    na.at( 1 ) = 2;
    na.at( 2 ) = 3;
    for( auto i : na )
    {
        printf( "%d\n", i );
    }
    //�\���̂Ȃǂɂ����p�ł���
    //�Y�������g��Ȃ������ɗL��(���ׂē�������������ꍇ)
    //�Q�Ɠn���ɂ��Ă����Ȃ��ƁA���g�����������Ȃ�
    //���i�̓R�s�[���n����Ă���
    Test obj[3];
    for( auto& i : obj )
    {
        i.num = 100;
        printf( "%d\n", i );
    }
    //�s��l���\�������(�Q�Ɠn���ł͂Ȃ��ꍇ)
    printf( "%d\n", obj[ 0 ] );





}