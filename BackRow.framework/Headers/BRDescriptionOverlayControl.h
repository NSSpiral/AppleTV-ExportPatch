/* Runtime dump - BRDescriptionOverlayControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRMediaPlayer;
@interface BRDescriptionOverlayControl : BRControl
{
    BRControl * _customOverlay;
    struct CGColor * _fillColor;
    BRMediaPlayer * _player;
    <BRMediaAsset> * _asset;
    NSString * _imageID;
    ATVImage * _image;
    <BRImageProxy> * _imageProxy;
    ATVImage * _ratingImage;
    NSAttributedString * _title;
    NSAttributedString * _publisher;
    NSAttributedString * _description;
    NSAttributedString * _pressAndHoldDescription;
    char _showPressAndHoldDescription;
    NSTimer * _fadeTimer;
}

+ (struct CGRect)defaultFrameWithBounds:(id)arg0;

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)_imageUpdated:(id)arg0;
- (void)setOffer:(NSDictionary *)arg0;
- (void)hideOverlay;
- (void)showOverlayWithLongTimeoutFromTouchRemote;
- (void)showOverlayWithLongTimeout;
- (void)showOverlayWithShortTimeout;
- (void)_updateCurrentMediaInfo;
- (void)_setPublisher:(MSPublisher *)arg0;
- (void)_setDescription:(NSString *)arg0;
- (void)_setRatingSystem:(id)arg0 name:(NSString *)arg1;
- (void)_setImageForSize:(int)arg0 withImageProxy:(<BRImageProxy> *)arg1;
- (char)_pressAndHoldOptionAvailable;
- (void)_hideOverlay;
- (void)_showOverlayWithTimeout:(float)arg0;
- (void)_showOverlay;
- (void)_fadeOverlay:(NSObject *)arg0;
- (NSDictionary *)_pressAndHoldDescriptionAttributes;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (BRDescriptionOverlayControl *)init;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (NSString *)accessibilityLabel;
- (char)hasContent;
- (void)_setTitle:(NSString *)arg0;
- (char)isAccessibilityElement;
- (void)setAsset:(<BRMediaAsset> *)arg0;
- (void)_setImage:(UIImage *)arg0;
- (void)setPlayer:(BRMediaPlayer *)arg0;

@end
