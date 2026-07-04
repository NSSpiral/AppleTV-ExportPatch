/* Runtime dump - UICellHighlightingSupport
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICellHighlightingSupport : NSObject
{
    struct __CFDictionary * _unhighlightedStates;
    id _cell;
}

- (void)dealloc;
- (void)highlightView:(NSObject *)arg0;
- (void)applyState:(unsigned int)arg0 toView:(UIView *)arg1;
- (void)cacheState:(unsigned int)arg0 forView:(NSObject *)arg1;
- (UICellHighlightingSupport *)initWithCell:(NSObject *)arg0;

@end
