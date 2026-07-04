/* Runtime dump - ATVLikesBadgeView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface ATVLikesBadgeView : BRControl
{
    BRTextControl * _textControl;
    BRImageControl * _imageControl;
}

@property (retain, nonatomic) BRTextControl * textControl;
@property (retain, nonatomic) BRImageControl * imageControl;

+ (ATVLikesBadgeView *)likesBadgeWithNumberOfLikes:(int)arg0 numberOfDislikes:(int)arg1;
+ (ATVLikesBadgeView *)likesBadgeWithNumberOfLikes:(int)arg0 numberOfDislikes:(int)arg1 textAttributes:(NSDictionary *)arg2 imageAlpha:(float)arg3;

- (void)layoutSubcontrols;
- (BRTextControl *)textControl;
- (BRImageControl *)imageControl;
- (void)setTextControl:(BRTextControl *)arg0;
- (void)setImageControl:(BRImageControl *)arg0;
- (ATVLikesBadgeView *)initWithNumberOfLikes:(int)arg0 numberOfDislikes:(int)arg1 textAttributes:(NSDictionary *)arg2 imageAlpha:(float)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;

@end
