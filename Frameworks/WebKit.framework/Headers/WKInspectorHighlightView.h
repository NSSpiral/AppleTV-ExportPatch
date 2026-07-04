/* Runtime dump - WKInspectorHighlightView
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKInspectorHighlightView : UIView
{
    NSMutableArray * _layers;
}

- (void)_removeAllLayers;
- (WKInspectorHighlightView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)update:(struct Highlight *)arg0;
- (void)_createLayers:(unsigned int)arg0;
- (void)_layoutForNodeHighlight:(struct Highlight *)arg0;
- (void)_layoutForRectsHighlight:(struct Highlight *)arg0;

@end
