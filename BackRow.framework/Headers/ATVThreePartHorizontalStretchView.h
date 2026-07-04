/* Runtime dump - ATVThreePartHorizontalStretchView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRImageControl;
@interface ATVThreePartHorizontalStretchView : BRControl
{
    BRImageControl * _leftImageView;
    BRImageControl * _centerImageView;
    BRImageControl * _rightImageView;
    struct ? _minimumWidth;
    struct ? _padding;
    BRControl * _contentView;
}

@property (readonly, retain, nonatomic) BRImageControl * leftImageView;
@property (readonly, retain, nonatomic) BRImageControl * centerImageView;
@property (readonly, retain, nonatomic) BRImageControl * rightImageView;
@property (nonatomic) struct ? minimumWidth;
@property (nonatomic) struct ? padding;
@property (retain, nonatomic) BRControl * contentView;

- (void)layoutSubcontrols;
- (BRImageControl *)leftImageView;
- (BRImageControl *)centerImageView;
- (BRImageControl *)rightImageView;
- (ATVThreePartHorizontalStretchView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (BRControl *)contentView;
- (void)setContentView:(BRControl *)arg0;
- (NSString *)accessibilityLabel;
- (void)setMinimumWidth:(struct ?)arg0;
- (struct ?)minimumWidth;
- (void)setPadding:(struct ?)arg0;
- (struct ?)padding;
- (void).cxx_destruct;

@end
