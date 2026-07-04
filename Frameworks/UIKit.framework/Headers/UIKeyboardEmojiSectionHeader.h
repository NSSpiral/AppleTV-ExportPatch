/* Runtime dump - UIKeyboardEmojiSectionHeader
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView
{
    UILabel * _emojiSectionHeader;
}

@property (copy, nonatomic) NSString * headerName;
@property (copy, nonatomic) UIColor * headerTextColor;
@property (nonatomic) float headerFontSize;
@property (nonatomic) float headerOpacity;
@property (nonatomic) char useVibrantBlend;

- (UIKeyboardEmojiSectionHeader *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setHeaderName:(NSString *)arg0;
- (void)setHeaderFontSize:(float)arg0;
- (void)setHeaderTextColor:(UIColor *)arg0;
- (void)setHeaderOpacity:(float)arg0;
- (void)setUseVibrantBlend:(char)arg0;
- (NSString *)headerName;
- (UIColor *)headerTextColor;
- (float)headerFontSize;
- (float)headerOpacity;
- (char)useVibrantBlend;

@end
