/* Runtime dump - UIKeyboardEmojiCollectionViewCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell
{
    UILabel * _emojiLabel;
    UIKeyboardEmoji * _emoji;
}

@property (copy, nonatomic) UIKeyboardEmoji * emoji;
@property (nonatomic) int emojiFontSize;

- (UIKeyboardEmojiCollectionViewCell *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (NSString *)debugDescription;
- (UIKeyboardEmoji *)emoji;
- (void)setEmoji:(UIKeyboardEmoji *)arg0;
- (void)setEmojiFontSize:(int)arg0;
- (int)emojiFontSize;

@end
