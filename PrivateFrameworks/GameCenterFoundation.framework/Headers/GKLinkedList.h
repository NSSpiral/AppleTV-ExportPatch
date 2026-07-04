/* Runtime dump - GKLinkedList
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLinkedList : NSObject
{
    GKListNode * _headNode;
    GKListNode * _tailNode;
}

@property (nonatomic) GKListNode * headNode;
@property (nonatomic) GKListNode * tailNode;

- (void)dealloc;
- (GKLinkedList *)init;
- (NSString *)description;
- (void)insertNode:(NSObject *)arg0 before:(id)arg1;
- (char)isConsistent;
- (id)nodeForInsertionWithValue:(id)arg0;
- (void)insertNodeAtBeginning:(id)arg0;
- (id)insertNodeAtBeginningWithValue:(id)arg0 forKey:(NSString *)arg1;
- (GKListNode *)tailNode;
- (void)removeAllNodes;
- (GKListNode *)headNode;
- (void)setHeadNode:(GKListNode *)arg0;
- (void)setTailNode:(GKListNode *)arg0;
- (char)hasCycle;
- (void)removeNode:(NSObject *)arg0;

@end
