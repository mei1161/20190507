#include<tuple>
#include<cstdio>

int main()
{
    //tuple
    //�����̌^���P�̕ϐ��ň������Ƃ��ł���
    //�\���̂����܂ł��Ȃ��A�����̒l��n�������A�߂�l�Ƃ��Ď󂯎�肽���Ƃ��ɗ��p����
    //�e���v���[�g�ō���Ă���̂ŁA�\���̂�N���X�Ȃǂ��w��ł���(tuple������������)
    std::tuple<int, float>num = std::make_tuple( 10, 20.0F );

    //�A�N�Z�X
    //std::get�֐����g��<>�̒��ɐ擪���牽�Ԗڂ����w�肷��
    //�����ɂ͂ǂ̕ϐ������w��
    printf( "num:int=%d\n", std::get<0>( num ) );
    printf( "num:float=%f\n", std::get<1>( num ) );
}