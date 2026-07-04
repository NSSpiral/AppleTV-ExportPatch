/* Runtime dump - ATVPhotoPlayerSwapView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl;
@interface ATVPhotoPlayerSwapView : BRControl
{
    BRControl * _imageControl;
    BRControl * _playerView;
    BRControl * _centerBadge;
    BRControl * _transportView;
    struct ? _shadowWidth;
    BRControl * _leftShadow;
    BRControl * _rightShadow;
    BRControl * _centerBadgeContainer;
    BRControl * _blurControl;
}

@property (retain, nonatomic) BRControl * imageControl;
@property (retain, nonatomic) BRControl * playerView;
@property (retain, nonatomic) BRControl * centerBadge;
@property (retain, nonatomic) BRControl * transportView;
@property (nonatomic) struct ? shadowWidth;
@property (retain, nonatomic) BRControl * leftShadow;
@property (retain, nonatomic) BRControl * rightShadow;
@property (retain, nonatomic) BRControl * centerBadgeContainer;
@property (retain, nonatomic) BRControl * blurControl;

- (void)layoutSubcontrols;
- (BRControl *)imageControl;
- (void)setImageControl:(BRControl *)arg0;
- (void)setTransportView:(BRControl *)arg0;
- (BRControl *)transportView;
- (BRControl *)leftShadow;
- (BRControl *)rightShadow;
- (BRControl *)centerBadge;
- (void)setShadowWidth:(struct ?)arg0;
- (void)setPlayerView:(BRControl *)arg0;
- (struct ?)shadowWidth;
- (UIImage *)photoCarouselUIDelegateCenterBadge;
- (id)photoCarouselUIDelegateLeftShadow;
- (id)photoCarouselUIDelegateRightShadow;
- (BRControl *)centerBadgeContainer;
- (void)setCenterBadge:(BRControl *)arg0;
- (void)setLeftShadow:(BRControl *)arg0;
- (void)setRightShadow:(BRControl *)arg0;
- (void)setCenterBadgeContainer:(BRControl *)arg0;
- (BRControl *)blurControl;
- (void)setBlurControl:(BRControl *)arg0;
- (BRControl *)playerView;
- (ATVPhotoPlayerSwapView *)init;
- (void).cxx_destruct;

@end
