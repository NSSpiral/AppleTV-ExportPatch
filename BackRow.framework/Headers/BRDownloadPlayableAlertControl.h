/* Runtime dump - BRDownloadPlayableAlertControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BREvent, BRMessageButton, BRReflectedImageControl, BRTextControl;
@interface BRDownloadPlayableAlertControl : BRControl
{
    BRReflectedImageControl * _imageControl;
    BRTextControl * _titleControl;
    BRTextControl * _clockStartWarningControl;
    BRTextControl * _directionsControl;
    BRMessageButton * _playButton;
    <BRImageProxy> * _imageProxy;
    NSString * _imageID;
    <BRMediaAsset> * _asset;
    double _activationTime;
    char _didAttemptPost;
    NSTimer * _imageLoadTimeout;
}

+ (void)postPlayableAlertForAsset:(NSSet *)arg0;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (NSArray *)accessibilityControls;
- (void)_imageUpdated:(id)arg0;
- (void)_playAsset;
- (NSObject *)_computeFramesForSize:(struct CGSize)arg0;
- (void)_postPlayableAlertForAsset:(NSSet *)arg0;
- (char)_dialogShouldBePosted;
- (void)_post;
- (char)_isVideoPlayerControlActive;
- (void)_imageNotAvailable:(id)arg0;
- (void)_attemptPost;
- (void)_postIfReady:(id)arg0;
- (void)_setAsset:(NSSet *)arg0;
- (void)dealloc;
- (BRDownloadPlayableAlertControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void)_setImage:(UIImage *)arg0;

@end
