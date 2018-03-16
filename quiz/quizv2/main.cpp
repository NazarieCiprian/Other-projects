#include "quizv2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Repository repo{ "questions.txt" };
	Question q{ "a cheetah is","mamal","reptile","bird","fish","","mamal","easy",10 };
	//repo.addQuestion(q);
	Controller ctrl{ repo };
	quizv2 w{ ctrl };
	w.show();
	return a.exec();
}
