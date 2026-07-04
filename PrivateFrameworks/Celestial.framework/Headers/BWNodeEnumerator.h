/* Runtime dump - BWNodeEnumerator
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeEnumerator : NSEnumerator
{
    BWGraph * _graph;
    unsigned int _depth;
    NSMutableDictionary * _nodeVisitCountMap;
}

+ (void)initialize;

- (void)dealloc;
- (BWNodeEnumerator *)initWithGraph:(BWGraph *)arg0;
- (unsigned int)_updateVisitedCount:(NSObject *)arg0;
- (NSNumber *)_visitedCount:(NSObject *)arg0;

@end
