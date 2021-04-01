//
//  BinaryTree.swift
//  Structure
//
//  Created by Xiushan Fan on 2021/4/1.
//

import Cocoa



class BinaryTree {
    
    /// 前序遍历二叉树
    static func preTraverse(node:Node?) {
        guard let tnode = node else { return }
        print("node \(tnode.value)")
        preTraverse(node: tnode.left)
        preTraverse(node: tnode.right)
    }
    
    /// 中序遍历二叉树
    static func midTraverse(node:Node?) {
        guard let tnode = node else { return }
        preTraverse(node: tnode.left)
        print("node \(tnode.value)")
        preTraverse(node: tnode.right)
    }
    
    /// 后序遍历二叉树
    static func postTraverse(node:Node?) {
        guard let tnode = node else { return }
        preTraverse(node: tnode.left)
        preTraverse(node: tnode.right)
        print("node \(tnode.value)")
    }
    
    /// 二叉树最大深度
    static func maxDepth(node:Node?) -> Int {
        return 0
    }
    
    
    ///  翻转二叉树
    @discardableResult
    static func reverseNode(node:Node?) -> Node? {
        guard let _ = node?.left, let _ = node?.right else {
            return node
        }
        reverseNode(node: node?.left)
        reverseNode(node: node?.right)
        let tnode = node?.left
        node?.left = node?.right
        node?.right = tnode
        return node
    }

}

extension BinaryTree {
    //  5
    // 3 4
    //1 2
    static func buildBinaryTree() -> Node {
        let node1 = Node.init(left: nil, right: nil, value: 1)
        let node2 = Node.init(left: nil, right: nil, value: 2)
        let node3 = Node.init(left: node1, right: node2, value: 3)
        let node4 = Node.init(left: nil, right: nil, value: 4)
        let node5 = Node.init(left: node3, right: node4, value: 5)
        return node5
    }
}


