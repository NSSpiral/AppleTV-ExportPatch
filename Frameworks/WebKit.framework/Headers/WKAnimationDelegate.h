/* Runtime dump - WKAnimationDelegate
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKAnimationDelegate : NSObject
{
    unsigned long long _layerID;
    struct RemoteLayerTreeHost * _layerTreeHost;
}

- (void)invalidate;
- (void)animationDidStart:(CAAnimation *)arg0;
- (WKAnimationDelegate *)initWithLayerID:(unsigned long long)arg0 layerTreeHost:(struct RemoteLayerTreeHost *)arg1;

@end
