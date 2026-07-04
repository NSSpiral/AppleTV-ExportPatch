/* Runtime dump - WebVideoFullscreenController
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebVideoFullscreenController : NSObject
{
    struct RefPtr<WebCore::HTMLMediaElement> _mediaElement;
    struct RefPtr<WebCore::WebVideoFullscreenInterfaceAVKit> _interface;
    struct RefPtr<WebCore::WebVideoFullscreenModelMediaElement> _model;
    struct WebVideoFullscreenControllerChangeObserver _changeObserver;
    struct RetainPtr<CALayer> _videoFullscreenLayer;
}

- (void)dealloc;
- (WebVideoFullscreenController *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setMediaElement:(struct HTMLMediaElement *)arg0;
- (struct HTMLMediaElement *)mediaElement;
- (void)enterFullscreen:(id)arg0;
- (void)exitFullscreen;
- (void)requestHideAndExitFullscreen;
- (void)didSetupFullscreen;
- (void)didEnterFullscreen;
- (void)didExitFullscreen;
- (void)didCleanupFullscreen;

@end
