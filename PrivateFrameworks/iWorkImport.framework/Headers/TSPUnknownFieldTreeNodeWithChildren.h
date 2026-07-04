/* Runtime dump - TSPUnknownFieldTreeNodeWithChildren
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownFieldTreeNodeWithChildren : TSPUnknownFieldTreeNode
{
    struct map<int, TSPUnknownFieldTreeNode *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TSPUnknownFieldTreeNode *> > > _children;
}

- (NSNumber *)childNodeForFieldNumber:(int)arg0;
- (char)addChildNode:(NSObject *)arg0 forFieldNumber:(int)arg1;
- (void)saveToArchiver:(NSObject *)arg0 message:(struct Message *)arg1;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
