//YOU MAY NOT MODIFY THIS DOCUMENT

#pragma once

#include <iostream>

class NodeInterface {

public:
    NodeInterface() = default;
	virtual ~NodeInterface() = default;

	/*
	* Returns the data that is stored in this node
	*
	* @return the data that is stored in this node.
	*/
	[[nodiscard]] virtual int getData() const = 0;

	/*
	* Returns the left child of this node or null if it doesn't have one.
	*
	* @return the left child of this node or null if it doesn't have one.
	*/
	[[nodiscard]] virtual NodeInterface* getLeftChild() const = 0;

	/*
	* Returns the right child of this node or null if it doesn't have one.
	*
	* @return the right child of this node or null if it doesn't have one.
	*/
	[[nodiscard]] virtual NodeInterface* getRightChild() const = 0;

};
