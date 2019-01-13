#pragma once
#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

class Node
{
public:
	string m_tag;
	string m_val;
	list<Node*> m_children;
	int m_idNode;

	Node(string tag, string val, int idNode)
	{
		m_tag = tag;
		m_val = val;
		m_idNode = idNode;
	}

	Node() {};

	void AddChild(Node* child)
	{
		m_children.push_back(child);
	}

};