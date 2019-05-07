#include <cstdio>
#include <chrono>
#include <Windows.h>

using namespace std::chrono;

int main()
{
    // ���Ԍv��
    // clock�֐�
    // �b����̊֐�
    // �v���O�����̎��s�J�n���猻�݂܂ł̎��Ԃ�Ԃ�

    // timeGetTime�֐�
    // WindowsAPI�̊֐�
    // �o�b���N�����Ă��猻�݂܂ł̎�����Ԃ�

    // QueryPerformanceCounter�֐�
    // WindowsAPI�̊֐�
    // �o�b���N�����Ă��猻�݂܂ł̎�����Ԃ�
    // timeGetTime�֐���萸�x������

    // std::chrono
    // �b�{�{�Ŏ�������Ă��郉�C�u�����֐�

    // ���݂̎������擾
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // �K���Ɏ~�߂�
    Sleep( 1000 );

    // ���݂̎������擾
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // �������擾���ĕ\��
    std::chrono::seconds elapsed = std::chrono::duration_cast<std::chrono::seconds>(end - start);
    printf( "�o�ߎ��Ԃ�%lld�b�ł��B\n", elapsed.count() );


    // ���i��auto�ł悢(using�w�߂��g����std::chrono�̏ȗ����j
    auto start2 = high_resolution_clock::now();
    Sleep( 2000 );
    auto end2 = high_resolution_clock::now();

    milliseconds elapsed2 = duration_cast<milliseconds>(end2 - start2);
    printf( "�o�ߎ��Ԃ�%lld�~���b�ł��B\n", elapsed2.count() );

    // ���x�͎��R�ɑI�ׂ�
    // seconds�@�@�@�c�b
    // milliseconds�c�~���b��
    // microseconds�c�}�C�N���b
    // nanoseconds�@�c�i�m�b
}
