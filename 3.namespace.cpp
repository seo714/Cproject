include <iostream>
using namespace std;
// �ش� �ڵ忡���� std ���ӽ����̽��� ����ϰڴ�
// �� �ڵ带 ����� ��� std::cout�� �ᵵ �۵�

//using�� ���� �ڵ� ������ �ش� ���ӽ����̽��� ���Խ�Ű�°� ����

//namespace �����
// namespace ���ӽ����̽���
//{
//   ����;
//   �Լ�;
//   ����ü;
//   Ŭ����;
// }

// �ϼ��� ���� �������� ���ӽ����̽��� :: ����;, ���ӽ����̽��� :: �Լ�(); ó�� ����� �� ����
// ex) std:: string, std::cout


namespace Server
{
	void run()
	{
		cout << "���� ���� ���� ����" << endl;
	}
}

namespace Client
{
	void run()
	{
		cout << "Ŭ���̾�Ʈ ���� ����" << endl;
	}
}




int main()
{
	cout << "xofodi" << endl;
	std::cout << "tkfkdgo" << endl;


	//���ӽ����̽���::�Լ���();
	Server::run();
	Client::run();
		
	// main���� ���ӽ����̽� ���� ���
	using namespace Server;

	run();// �̶��� run()�� Server�� run






	return 0;
}