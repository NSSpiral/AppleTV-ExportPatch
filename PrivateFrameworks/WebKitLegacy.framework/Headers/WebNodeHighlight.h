/* Runtime dump - WebNodeHighlight
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebNodeHighlight : NSObject
{
    WAKView * _targetView;
    WebHighlightLayer * _highlightLayer;
    WebNodeHighlightView * _highlightView;
    struct InspectorController * _inspectorController;
    id _delegate;
}

- (void)dealloc;
- (void)setNeedsDisplay;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)detach;
- (void)attach;
- (WebNodeHighlightView *)highlightView;
- (WAKView *)targetView;
- (WebNodeHighlight *)initWithTargetView:(WAKView *)arg0 inspectorController:(struct InspectorController *)arg1;
- (struct InspectorController *)inspectorController;

@end
