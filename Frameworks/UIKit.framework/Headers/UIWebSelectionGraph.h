/* Runtime dump - UIWebSelectionGraph
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectionGraph : NSObject
{
    NSMutableArray * _selectionNodes;
}

- (void)dealloc;
- (UIWebSelectionGraph *)init;
- (void)clearNodes;
- (id)addNodeFromSelection:(id)arg0;
- (void)exploreFromNode:(NSObject *)arg0 outwards:(char)arg1 maxDepth:(int)arg2;
- (void)exploreFromNode:(NSObject *)arg0;

@end
