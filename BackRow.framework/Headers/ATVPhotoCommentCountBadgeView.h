/* Runtime dump - ATVPhotoCommentCountBadgeView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface ATVPhotoCommentCountBadgeView : BRControl
{
    int _commentStyle;
    int _commentCount;
    int _style;
    BRTextControl * _textControl;
    BRImageControl * _imageControl;
}

@property (nonatomic) int style;
@property (retain, nonatomic) BRTextControl * textControl;
@property (retain, nonatomic) BRImageControl * imageControl;

+ (NSObject *)badgeViewWithStyle:(int)arg0;

- (void)layoutSubcontrols;
- (BRTextControl *)textControl;
- (BRImageControl *)imageControl;
- (void)setTextControl:(BRTextControl *)arg0;
- (void)setImageControl:(BRImageControl *)arg0;
- (void)setCommentStyle:(int)arg0;
- (void)setCount:(unsigned int)arg0 unread:(char)arg1;
- (ATVPhotoCommentCountBadgeView *)initWithBadgeStyle:(int)arg0;
- (void)_updateImageForUnreadState:(char)arg0;
- (ATVPhotoCommentCountBadgeView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (int)style;
- (NSString *)accessibilityLabel;
- (void)setStyle:(int)arg0;
- (void).cxx_destruct;

@end
