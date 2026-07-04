/* Runtime dump - SCRCStackQueue
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCStackQueue : NSObject
{
    struct _SCRCStackNode * _firstNode;
    struct _SCRCStackNode * _lastNode;
    unsigned int _count;
}

- (void)dealloc;
- (unsigned int)count;
- (void)removeAllObjects;
- (NSString *)description;
- (char)isEmpty;
- (NSEnumerator *)objectEnumerator;
- (void)pushObject:(NSObject *)arg0;
- (NSObject *)popObject;
- (id)dequeueObjectRetained;
- (void)enqueueObject:(NSObject *)arg0;
- (id)popObjectRetained;
- (void)pushArray:(NSArray *)arg0;
- (NSObject *)topObject;
- (NSObject *)dequeueObject;

@end
