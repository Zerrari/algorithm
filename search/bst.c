#include "stdio.h"
#include <i386/endian.h>
#include <stdlib.h>

typedef struct BitNode
{
		int data;
		struct BitNode *lchild,*rchild;
}BitNode,* BiTree;
_Bool Delete(BiTree *);
_Bool search_BST(BiTree T,int key,BiTree f,BiTree *p)
{
		if (T == NULL)
		{
				*p = f;
				return 0;
		}
		if (T->data < key)
		{
				search_BST(T->rchild, key, T, p);
		}
		else if (T->data > key)
		{
				search_BST(T->lchild, key,T,p);
		}
		else
		{
				*p = T;
				return 1;
		}
		return 1;

}

_Bool insert_BST(BiTree *T,int key)
{
		BiTree s,p;
		if (!search_BST(*T, key, NULL, &p) )
		{
				s = (BiTree)malloc(sizeof(BitNode));
				s->data = key;
				s->lchild = NULL;
				s->rchild = NULL;
				if (p == NULL)
						*T = s;
				else if (key < p->data)
				{
						p->lchild = s;
				}
				else
						p->rchild = s;
				return 1;
		}
		else
				return 0;

}

_Bool delete_BST(BiTree *T,int key)
{
		if (!*T)
				return 0;
		else
		{
				if (key == (*T)->data)
						Delete(T);
				else if (key < (*T)->data)
						delete_BST(&(*T)->lchild, key);
				else
						delete_BST(&(*T)->rchild, key);
		}
		return 1;
}

_Bool Delete(BiTree *T)
{
		BiTree q,s;
		if ((*T)->lchild == NULL)
		{
				q = *T;
				*T = (*T)->rchild;
				free(q);
		}
		else if ((*T)->rchild == NULL)
		{
				q = *T;
				*T = (*T)->lchild;
				free(q);
		}
		else
		{
				q = *T;
				s = q->lchild;
				while (s->rchild != NULL)
				{
						q = s;
						s = s->rchild;
				}
				(*T)->data = s->data;
				if (q != *T)
				{
						q->rchild = s->lchild;
				}
				else {
						q->lchild = s->lchild;
				}

		}
		return 0;
}
