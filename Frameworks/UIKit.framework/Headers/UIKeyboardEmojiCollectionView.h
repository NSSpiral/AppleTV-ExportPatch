/* Runtime dump - UIKeyboardEmojiCollectionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCollectionView : UICollectionView
{
    UITouch * _activeTouch;
    UIKeyboardEmojiView * _touched;
    UIKeyboardEmojiView * _pendingDisplay;
    UIKeyboardEmojiView * _onDisplay;
    UIKBRenderConfig * _renderConfig;
    UIKeyboardEmojiInputController * _inputController;
    UIView * _pressIndicator;
    UIKeyboardEmojiGraphicsTraits * _emojiGraphicsTraits;
    UIResponder * _hitTestResponder;
}

@property (retain) UIKeyboardEmojiInputController * inputController;
@property (nonatomic) UIResponder * hitTestResponder;
@property (readonly, retain) UIKeyboardEmojiGraphicsTraits * emojiGraphicsTraits;
@property (retain) UITouch * activeTouch;
@property (retain) UIKeyboardEmojiView * touched;
@property (retain) UIKeyboardEmojiView * pendingDisplay;
@property (retain) UIKeyboardEmojiView * onDisplay;
@property (retain) UIKBRenderConfig * renderConfig;

- (void)dealloc;
- (void)layoutSubviews;
- (UIKBRenderConfig *)renderConfig;
- (UIKeyboardEmojiCollectionView *)initWithFrame:(struct CGRect)arg0 collectionViewLayout:(struct CGSize)arg1 renderConfig:(UIKBRenderConfig *)arg2 inputController:(UIKeyboardEmojiInputController *)arg3 emojiGraphicsTraits:(UIKeyboardEmojiGraphicsTraits *)arg4;
- (void)setHitTestResponder:(UIResponder *)arg0;
- (UIKeyboardEmojiInputController *)inputController;
- (NSObject *)closestCellForPoint:(struct CGPoint)arg0;
- (UIKeyboardEmojiGraphicsTraits *)emojiGraphicsTraits;
- (UIResponder *)hitTestResponder;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (float)_currentScreenScale;
- (UIKeyboardEmojiView *)touched;
- (void)setTouched:(UIKeyboardEmojiView *)arg0;
- (UITouch *)activeTouch;
- (void)setActiveTouch:(UITouch *)arg0;
- (UIKeyboardEmojiView *)pendingDisplay;
- (void)setPendingDisplay:(UIKeyboardEmojiView *)arg0;
- (UIKeyboardEmojiView *)onDisplay;
- (void)setOnDisplay:(UIKeyboardEmojiView *)arg0;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (void)setInputController:(UIKeyboardEmojiInputController *)arg0;

@end
