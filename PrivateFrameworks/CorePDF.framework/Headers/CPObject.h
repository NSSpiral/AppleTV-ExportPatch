/* Runtime dump - CPObject
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPObject : NSObject <NSCopying, CPCopying>
{
    CPObject * parent;
    NSMutableArray * children;
    CPDocument * document;
    CPPage * page;
    long zOrder;
}

- (unsigned int)indexOf:(PSSpecifierGroupIndex *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (CPObject *)init;
- (char)isEqual:(NSObject *)arg0;
- (void)performSelector:(SEL)arg0;
- (CPObject *)copyWithZone:(struct _NSZone *)arg0;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (NSObject *)lastChild;
- (NSObject *)firstChild;
- (id)previousSibling;
- (CPDocument *)document;
- (CPPage *)page;
- (void)setPage:(CPPage *)arg0;
- (void)remove;
- (id)nextSibling;
- (void)setDocument:(CPDocument *)arg0;
- (void)removeAll;
- (long)zOrder;
- (NSObject *)copyAndSplitChildrenAtIndex:(unsigned int)arg0;
- (void)recomputeZOrder;
- (void)updateZOrder:(long)arg0;
- (void)add:(int)arg0 atIndex:(unsigned int)arg1;
- (void)addChildrenOf:(TSPUnknownFieldTreeNodeWithChildren *)arg0;
- (NSArray *)newTakeChildren;
- (id)newTakeChildrenAmong:(id)arg0;
- (void)accept:(id)arg0;
- (void)disposeDescendants;
- (NSArray *)copyWithoutChildren;
- (NSObject *)ancestorOfClass:(Class)arg0;
- (NSObject *)descendantsOfClass:(Class)arg0 deep:(char)arg1;
- (void)descendantsOfClass:(Class)arg0 to:(NSObject *)arg1;
- (NSObject *)descendantsOfClass:(Class)arg0 omitTraversing:(Class)arg1;
- (NSObject *)firstDescendantOfClass:(Class)arg0;
- (NSObject *)lastDescendantOfClass:(Class)arg0;
- (unsigned int)countOfFirstDescendantsOfClass:(Class)arg0;
- (void)setZOrder:(long)arg0;
- (void)clearCachedInfo;
- (NSObject *)firstDescendantsOfClass:(Class)arg0;
- (CPObject *)initSuper;
- (unsigned int)countOfClass:(Class)arg0;
- (id)lastSibling;
- (id)firstSibling;
- (void)removeFirstChild;
- (void)removeLastChild;
- (void)promoteChildren;
- (void)childrenOfClass:(Class)arg0 into:(id)arg1;
- (NSObject *)childrenOfClass:(Class)arg0;
- (NSObject *)childrenNotOfClass:(Class)arg0;
- (void)map:(SEL)arg0 target:(NSObject *)arg1 childrenOfClass:(Class)arg2 last:(char)arg3;
- (void)map:(SEL)arg0 target:(NSObject *)arg1 childrenOfClass:(Class)arg2;
- (void)mapSafely:(SEL)arg0 target:(NSObject *)arg1 childrenOfClass:(Class)arg2;
- (void)map:(SEL)arg0 target:(NSObject *)arg1;
- (void)map:(SEL)arg0 target:(NSObject *)arg1 last:(char)arg2;
- (NSObject *)descendantsOfClass:(Class)arg0;
- (NSObject *)shallowDescendantsOfClass:(Class)arg0;
- (void)addChildren:(NSArray *)arg0;
- (NSObject *)childAtIndex:(unsigned int)arg0;
- (int)depth;
- (CPObject *)parent;
- (void)setParent:(CPObject *)arg0;
- (void)add:(int)arg0;
- (void)remove:(NSIndexSet *)arg0;
- (NSMutableArray *)children;

@end
