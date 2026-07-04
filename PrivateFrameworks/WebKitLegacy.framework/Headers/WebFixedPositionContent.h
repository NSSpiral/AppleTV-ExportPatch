/* Runtime dump - WebFixedPositionContent
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFixedPositionContent : NSObject
{
    struct WebFixedPositionContentData * _private;
}

- (void)dealloc;
- (char)hasFixedOrStickyPositionLayers;
- (void)scrollOrZoomChanged:(struct CGRect)arg0;
- (void)didFinishScrollingOrZooming;
- (void)overflowScrollPositionForLayer:(id)arg0 changedTo:(struct CGPoint)arg1;
- (WebFixedPositionContent *)initWithWebView:(WebView *)arg0;
- (void)setViewportConstrainedLayers:(struct /* ? */ *)arg0 stickyContainerMap:(int)arg1;
- (float)minimumOffsetFromFixedPositionLayersToAnchorEdge:(int)arg0 ofRect:(struct CGRect)arg1 inLayer:(struct CGSize)arg2;

@end
