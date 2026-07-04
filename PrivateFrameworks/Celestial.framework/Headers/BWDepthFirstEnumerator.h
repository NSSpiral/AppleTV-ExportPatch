/* Runtime dump - BWDepthFirstEnumerator
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDepthFirstEnumerator : BWNodeEnumerator
{
    NSMutableArray * _stack;
    unsigned int _currentSourceIndex;
}

- (void)dealloc;
- (NSObject *)nextObject;
- (BWDepthFirstEnumerator *)initWithGraph:(BWGraph *)arg0;

@end
