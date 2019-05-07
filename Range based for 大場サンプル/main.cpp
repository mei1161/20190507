#include <cstdio>
#include <array>

struct Test
{
    int num;
};

int main()
{
    int data[] = { 1, 2, 3 };

    // �ʏ�̃��[�v
    for( int i = 0; i < 3; i++ )
    {
        printf( "%d\n", data[ i ] );
    }

    // Range based for�i�͈�for���j
    // �擪���疖���܂ŏ������s�������ꍇ�Ɏg����
    // �v�f�ԍ����s�v�ɂȂ�A���[�v���Ȍ��ɏ�����
    // �v�f�ԍ������Z�Ɏg�������ꍇ�͒ʏ��for�����g�p����
    for( auto i : data )
    {
        printf( "%d\n", i );
    }

    // STL�ɂ��g����i�C�e���[�^�Ɠ�������������j
    // �����I��begin�֐���end�֐����Ăяo���Ă���
    std::array<int, 3> na;
    na.at( 0 ) = 1;
    na.at( 1 ) = 2;
    na.at( 2 ) = 3;

    for( auto i : na )
    {
        printf( "%d\n", i );
    }

    // �\���̂Ȃǂɂ����p�ł���
    Test obj[ 3 ];

    for( auto i : obj )
    {
        i.num = 100;
    }

    // Range based for�̍�Ɨp�ϐ���
    // �R�s�[���n�����i�l�n���j
    printf( "%d\n", obj[ 0 ].num );

    // ���[�v�̒��Œl���������������ꍇ�͎Q�Ƃɂ���
    for( auto& i : obj )
    {
        i.num = 100;
    }

    // �Q�Ƃŏ�������Ώ��������
    printf( "%d\n", obj[ 0 ] );
}