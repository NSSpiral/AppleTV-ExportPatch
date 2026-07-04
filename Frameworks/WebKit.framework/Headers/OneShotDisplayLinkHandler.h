/* Runtime dump - OneShotDisplayLinkHandler
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface OneShotDisplayLinkHandler : NSObject
{
    struct RemoteLayerTreeDrawingAreaProxy * _drawingAreaProxy;
    CADisplayLink * _displayLink;
}

- (void)dealloc;
- (void)invalidate;
- (OneShotDisplayLinkHandler *)initWithDrawingAreaProxy:(struct RemoteLayerTreeDrawingAreaProxy *)arg0;
- (void)displayLinkFired:(id)arg0;
- (void)schedule;

@end
