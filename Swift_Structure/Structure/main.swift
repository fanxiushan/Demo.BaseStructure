//
//  main.swift
//  Structure
//
//  Created by Xiushan Fan on 2021/4/1.
//

import Foundation

print("Hello, World!")

var node:Node? = BinaryTree.buildBinaryTree()
BinaryTree.preTraverse(node: node)
print("---")
node = BinaryTree.reverseNode(node: node)
BinaryTree.preTraverse(node: node)

