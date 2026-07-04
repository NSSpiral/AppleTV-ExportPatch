/* Runtime dump - TSKTreeNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKTreeNode : TSPObject
{
    NSString * mDisplayName;
    id mObject;
    NSMutableArray * mChildren;
}

@property (retain, nonatomic) id dataObject;
@property (retain, nonatomic) NSMutableArray * children;
@property (retain, nonatomic) NSString * name;

- (TSKTreeNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSObject *)dataObject;
- (void)setDataObject:(NSObject *)arg0;
- (void)enumerateAllChildrenWithBlock:(id /* block */)arg0;
- (NSObject *)nodeWithObject:(NSObject *)arg0;
- (int)indexOfNodeWithObject:(NSObject *)arg0;
- (char)hasChildWithName:(NSString *)arg0;
- (void)addChildWithName:(NSString *)arg0 object:(NSObject *)arg1;
- (void)addObject:(struct objc_method *)arg0 atIndex:(unsigned int)arg1;
- (void)addNode:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)removeChildWithName:(NSString *)arg0;
- (void)removeChildWithDataObject:(NSObject *)arg0;
- (void)removeChildAtIndex:(unsigned int)arg0;
- (void)removeAllChildren;
- (void)dealloc;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (TSKTreeNode *)initWithContext:(TSPObjectContext *)arg0;
- (void)setChildren:(NSMutableArray *)arg0;
- (NSEnumerator *)childEnumerator;
- (NSObject *)shallowCopy;
- (NSObject *)nodeAtIndex:(unsigned int)arg0;
- (NSMutableArray *)children;

@end
