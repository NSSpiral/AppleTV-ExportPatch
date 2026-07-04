/* Runtime dump - WebAVVideoLayer
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVVideoLayer : CALayer <AVVideoLayer>
{
    struct RetainPtr<WebAVPlayerController> _avPlayerController;
    struct RetainPtr<AVPlayerViewController> _avPlayerViewController;
    struct RetainPtr<CALayer> _videoSublayer;
    int _videoLayerGravity;
    char _readyForDisplay;
    struct CGRect _videoRect;
}

@property (nonatomic) int videoLayerGravity;
@property (nonatomic) char readyForDisplay;
@property (nonatomic) struct CGRect videoRect;
@property (retain, nonatomic) CALayer * videoSublayer;

+ (CALayer *)videoLayer;

- (WebAVVideoLayer *)init;
- (void)setBounds:(struct CGRect)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)videoRect;
- (void)setVideoLayerGravity:(int)arg0;
- (void)setPlayerController:(BRController *)arg0;
- (int)videoLayerGravity;
- (char)isReadyForDisplay;
- (void)setPlayerViewController:(AVPlayerViewController *)arg0;
- (void)setVideoSublayer:(CALayer *)arg0;
- (CALayer *)videoSublayer;
- (void)setReadyForDisplay:(char)arg0;
- (void)setVideoRect:(struct CGRect)arg0;

@end
