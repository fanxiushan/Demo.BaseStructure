//
//  Node.swift
//  Structure
//
//  Created by Xiushan Fan on 2021/4/1.
//

import Cocoa

class Node {
    var left:Node?
    var right:Node?
    var value:Int = -1
    //
    init(left:Node?, right:Node?, value:Int) {
        self.left = left
        self.right = right
        self.value = value
    }
}
