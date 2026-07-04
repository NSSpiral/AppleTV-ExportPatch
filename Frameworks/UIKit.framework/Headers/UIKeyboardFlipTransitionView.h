/* Runtime dump - UIKeyboardFlipTransitionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView
{
    CALayer * _container;
    CALayer * _frontFace;
    CALayer * _backFace;
    CALayer * _frontDarkening;
    CALayer * _backDarkening;
    CALayer * _backDarkeningLeft;
    CALayer * _backDarkeningRight;
    char _showingFrontFace;
    UIKBCacheToken * _startKeyplaneToken;
    UIKBCacheToken * _endKeyplaneToken;
    NSMutableDictionary * _controlKeys;
    struct ? _rebuildFlags;
}

@property (nonatomic) char showingFrontFace;

- (UIKeyboardFlipTransitionView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)rebuildTransitionForSplitStyleChange:(NSDictionary *)arg0;
- (char)transitionIsVisible;
- (struct CGImage *)defaultKeyboardImage;
- (struct CGImage *)splitKeyboardImage;
- (void)rebuildFromKeyplane:(id)arg0 toKeyplane:(UIKBCacheToken_Keyplane *)arg1 keyboardType:(int)arg2 orientation:(int)arg3;
- (void)rebuildControlKeys:(unsigned long long)arg0;
- (void)_flipToFront:(char)arg0 animated:(char)arg1;
- (void)rebuildControlSlicesForKeyName:(NSString *)arg0;
- (void)updateMoreIntlKey:(NSString *)arg0 asStart:(char)arg1 withRect:(struct CGRect)arg2 showIntl:(struct CGSize)arg3 showDictKey:(NSString *)arg4;
- (void)rebuildTransition;
- (void)rebuildMoreIntlKeys;
- (void)rebuildShiftSlices;
- (void)rebuildReturnSlices;
- (void)updateTransition;
- (void)setShowingFrontFace:(char)arg0;
- (void)rebuildBackgroundTransition;
- (void)_delayedUpdateTransition;
- (char)isShowingFrontFace;

@end
