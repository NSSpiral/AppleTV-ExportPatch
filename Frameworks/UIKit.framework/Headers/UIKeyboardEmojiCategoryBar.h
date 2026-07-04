/* Runtime dump - UIKeyboardEmojiCategoryBar
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCategoryBar : UIKBKeyView <UIKeyboardEmojiCategoryControl>
{
    UIKeyboardEmojiCategoryController * _categoryController;
    int _selected;
    UIView * _scrubView;
    UIKeyboardEmojiGraphicsTraits * _emojiGraphicsTraits;
    char _isScrubbing;
    float _scrubStartXLocation;
}

@property int selectedIndex;
@property (retain, nonatomic) UIView * scrubView;
@property (retain, nonatomic) UIKeyboardEmojiGraphicsTraits * emojiGraphicsTraits;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (UIKeyboardEmojiGraphicsTraits *)emojiGraphicsTraits;
- (void)setCategory:(int)arg0;
- (UIKeyboardEmojiCategoryBar *)initWithFrame:(struct CGRect)arg0 keyplane:(struct CGSize)arg1 key:(NSString *)arg2;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg0;
- (void)receiveNotifictaion:(id)arg0;
- (UIView *)scrubView;
- (struct CGRect)categorySelectedCircleRect:(NSObject *)arg0;
- (void)animateScrubberToRect:(struct CGRect)arg0;
- (struct CGRect)frameForDivider:(id)arg0;
- (void)updateCategory;
- (void)setScrubView:(UIView *)arg0;
- (void)setEmojiGraphicsTraits:(UIKeyboardEmojiGraphicsTraits *)arg0;

@end
