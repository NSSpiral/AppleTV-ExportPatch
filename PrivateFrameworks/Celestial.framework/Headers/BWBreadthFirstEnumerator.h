/* Runtime dump - BWBreadthFirstEnumerator
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWBreadthFirstEnumerator : BWNodeEnumerator
{
    NSMutableArray * _queue;
    NSMutableArray * _holdQueue;
}

- (void)dealloc;
- (NSObject *)nextObject;
- (BWBreadthFirstEnumerator *)initWithGraph:(BWGraph *)arg0;
- (void)addChildren:(NSArray *)arg0;

@end
