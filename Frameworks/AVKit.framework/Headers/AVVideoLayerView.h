/* Runtime dump - AVVideoLayerView
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVVideoLayerView : UIView
{
    CALayer<AVVideoLayer> * _videoLayer;
    AVVideoLayerDelegate * _videoLayerDelegate;
    AVPlayerController * _playerController;
}

@property (retain, nonatomic) AVPlayerController * playerController;
@property (nonatomic) int videoLayerGravity;
@property (readonly, nonatomic) char readyForDisplay;
@property (readonly, nonatomic) struct CGRect videoRect;
@property (nonatomic) char videoScaled;

+ (NSObject *)keyPathsForValuesAffectingVideoRect;
+ (AVVideoLayerView *)keyPathsForValuesAffectingVideoGravity;
+ (NSObject *)keyPathsForValuesAffectingReadyForDisplay;
+ (AVVideoLayerView *)keyPathsForValuesAffectingVideoScaled;

- (AVVideoLayerView *)initWithFrame:(struct CGRect)arg0 videoLayer:(struct CGSize)arg1;
- (char)_isPlayingOnSecondScreen;
- (char)isVideoScaled;
- (void)setVideoScaled:(char)arg0;
- (AVVideoLayerView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSublayersOfLayer:(CALayer *)arg0;
- (void).cxx_destruct;
- (AVPlayerController *)playerController;
- (struct CGRect)videoRect;
- (void)setVideoLayerGravity:(int)arg0;
- (void)setPlayerController:(AVPlayerController *)arg0;
- (int)videoLayerGravity;
- (char)isReadyForDisplay;

@end
