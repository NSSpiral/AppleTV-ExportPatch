/* Runtime dump - UIWebSelectionNode
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectionNode : NSObject
{
    UIWebSelectionNode * _fromTopByExpanding;
    UIWebSelectionNode * _fromTopByContracting;
    UIWebSelectionNode * _fromBottomByExpanding;
    UIWebSelectionNode * _fromBottomByContracting;
    UIWebSelectionNode * _fromRightByExpanding;
    UIWebSelectionNode * _fromRightByContracting;
    UIWebSelectionNode * _fromLeftByExpanding;
    UIWebSelectionNode * _fromLeftByContracting;
    UIWebSelectionGraph * _sharedGraph;
    UIWebSelection * _selection;
    char _invalid;
}

@property (retain) UIWebSelection * selection;

- (void)dealloc;
- (void)invalidate;
- (UIWebSelection *)selection;
- (void)setSelection:(UIWebSelection *)arg0;
- (id)nodeByMovingEdge:(int)arg0 outwards:(char)arg1;
- (id *)nodeByReferenceFromEdge:(int)arg0 outwards:(char)arg1;
- (UIWebSelectionNode *)initWithSelection:(UIWebSelection *)arg0 inGraph:(NSObject *)arg1;
- (int)oppositeEdge:(int)arg0;

@end
