/* Runtime dump - BRMetadataTitleControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface BRMetadataTitleControl : BRControl
{
    BRTextControl * _title;
    BRTextControl * _titleSubtext;
    BRImageControl * _rating;
    BRImageControl * _rightImage;
    BRImageControl * _rightImage2;
    BRImageControl * _leftImage;
    char _ratingSnapsToTitle;
    struct ? _rightImageHeight;
    char _rightImageFollowsColor;
    UIColor * _titleColor;
    UIColor * _titleSubtextColor;
}

@property (retain, nonatomic) UIColor * titleColor;
@property (retain, nonatomic) UIColor * titleSubtextColor;

- (void)layoutSubcontrols;
- (struct CGSize)renderedSize;
- (void)setTitleSubtext:(BRTextControl *)arg0;
- (void)setRightImage:(BRImageControl *)arg0;
- (void)setRatingSystem:(NSString *)arg0 name:(NSString *)arg1;
- (void)setRatingSnapsToTitle:(char)arg0;
- (void)setTitleSubtextColor:(UIColor *)arg0;
- (void)setRightImageFollowsColor:(char)arg0;
- (void)setRightImage2:(BRImageControl *)arg0;
- (void)setRightImageFixedHeight:(struct ?)arg0;
- (UIColor *)titleSubtextColor;
- (void)_layoutSubcontrolsWithSize:(struct CGSize)arg0;
- (void)setLeftImage:(BRImageControl *)arg0;
- (void)dealloc;
- (BRMetadataTitleControl *)init;
- (void)setTitle:(BRTextControl *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (UIColor *)titleColor;
- (void)setTitleColor:(UIColor *)arg0;
- (void)setRating:(BRImageControl *)arg0;

@end
