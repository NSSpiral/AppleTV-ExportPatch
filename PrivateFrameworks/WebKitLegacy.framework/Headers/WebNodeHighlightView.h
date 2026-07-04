/* Runtime dump - WebNodeHighlightView
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebNodeHighlightView : WAKView
{
    WebNodeHighlight * _webNodeHighlight;
    NSMutableArray * _layers;
}

- (void)_removeAllLayers;
- (void)dealloc;
- (char)isFlipped;
- (void)layoutSublayers:(id)arg0;
- (WebNodeHighlightView *)initWithWebNodeHighlight:(WebNodeHighlight *)arg0;
- (void)detachFromWebNodeHighlight;
- (void)_attach:(id)arg0 numLayers:(unsigned int)arg1;
- (void)_layoutForNodeHighlight:(struct Highlight *)arg0 parent:(struct Color)arg1;
- (void)_layoutForRectsHighlight:(struct Highlight *)arg0 parent:(struct Color)arg1;
- (WebNodeHighlight *)webNodeHighlight;

@end
