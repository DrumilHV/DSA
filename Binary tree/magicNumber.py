# class Node:
#     def __init__(self, data):
#         self.data = data
#         self.left = None
#         self.right = None

# def is_leaf(node):
#     return node.left is None and node.right is None

# def magic_parent(node):
#     if node is None or is_leaf(node):
#         return 0, 0

#     left_even, left_odd = magic_parent(node.left)
#     right_even, right_odd = magic_parent(node.right)

#     total_sum = left_even + left_odd + right_even + right_odd + node.data

#     if (left_even + right_odd) % 2 == 0 and (left_odd + right_even) % 2 == 1:
#         return total_sum, 1
#     else:
#         return total_sum, 0

# def build_tree(root, relationships):
#     nodes = {root: Node(root)}
    
#     for relation, child in relationships:
#         parent = relation[:-1]
#         direction = relation[-1]
        
#         new_node = Node(child)
#         if direction == 'L':
#             nodes[parent].left = new_node
#         else:
#             nodes[parent].right = new_node
        
#         nodes[child] = new_node

#     return nodes[root]

# def main():
#     N = int(input())
#     root = int(input())
    
#     relationships = []
#     for _ in range(N - 1):
#         relation, child = input().split()
#         relationships.append((relation, int(child)))
    
#     root_node = build_tree(root, relationships)
#     total_sum, _ = magic_parent(root_node)
    
#     print(total_sum)

# if __name__ == "__main__":
#     main()
class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def is_leaf(node):
    return node.left is None and node.right is None

def magic_parent(node):
    if node is None or is_leaf(node):
        return 0, 0

    left_even, left_odd = magic_parent(node.left)
    right_even, right_odd = magic_parent(node.right)

    total_sum = left_even + left_odd + right_even + right_odd + node.data

    if (left_even + right_odd) % 2 == 0 and (left_odd + right_even) % 2 == 1:
        return total_sum, 1
    else:
        return total_sum, 0

def build_tree(root, relationships):
    nodes = {root: Node(root)}
    
    for relation, child in relationships:
        parent = relation[:-1]
        direction = relation[-1]
        
        if parent not in nodes:
            nodes[parent] = Node(parent)
        
        new_node = Node(child)
        if direction == 'L':
            nodes[parent].left = new_node
        else:
            nodes[parent].right = new_node
        
        nodes[child] = new_node

    return nodes[root]

def main():
    N = int(input())
    root = int(input())
    
    relationships = []
    for _ in range(N - 1):
        relation, child = input().split()
        relationships.append((relation, int(child)))
    
    root_node = build_tree(root, relationships)
    total_sum, _ = magic_parent(root_node)
    
    print(total_sum)

if __name__ == "__main__":
    main()
