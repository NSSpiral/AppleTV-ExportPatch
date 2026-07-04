/* Runtime dump - BWReverseBreadthFirstEnumerator
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWReverseBreadthFirstEnumerator : BWNodeEnumerator
{
    NSMutableArray * _queue;
}

- (void)dealloc;
- (NSObject *)nextObject;
- (BWReverseBreadthFirstEnumerator *)initWithGraph:(BWGraph *)arg0;

@end
