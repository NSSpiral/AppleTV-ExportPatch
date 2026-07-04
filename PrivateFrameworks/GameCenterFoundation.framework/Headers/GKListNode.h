/* Runtime dump - GKListNode
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKListNode : NSObject
{
    id _value;
    GKListNode * _prevNode;
    GKListNode * _nextNode;
}

@property (nonatomic) GKListNode * nextNode;
@property (nonatomic) GKListNode * prevNode;
@property (retain, nonatomic) id value;

- (GKListNode *)initWithValue:(NSValue *)arg0;
- (void)dealloc;
- (NSString *)description;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (GKListNode *)nextNode;
- (GKListNode *)prevNode;
- (void)setPrevNode:(GKListNode *)arg0;
- (void)setNextNode:(GKListNode *)arg0;

@end
