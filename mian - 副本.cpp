
#include"SEQ.h"

int main()
{
	SlistNode* plist = NULL;
	SListpushback(&plist, 100);
	SListpushback(&plist, 200);
	SListpushback(&plist, 300);
	SListpushback(&plist, 400);
	SListpushback(&plist, 500);
	SListpushback(&plist, 600);
	SListpushback(&plist, 700);
	/*SlistPrintf(plist);*/
	//SListpophback(&plist);
	SlistNode* pos= FindList(plist, 300);
	//if (pos != NULL)//找到数据的结点并且改动数据内容；
	//{
	//	pos->data = 3000;
	//}
	//SlistInserAfter(&pos, 5000);
	SlistEraseAfter(&pos);
	SlistPrintf(plist);
	return 0;
}
