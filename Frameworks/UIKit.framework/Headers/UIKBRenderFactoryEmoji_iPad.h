/* Runtime dump - UIKBRenderFactoryEmoji_iPad
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryEmoji_iPad : UIKBRenderFactoryEmoji_iPhone

- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (NSString *)lightKeycapsFontName;
- (void)_customizeTraits:(NSArray *)arg0 forPopupForKey:(NSString *)arg1 withRenderConfig:(UIKBRenderConfig *)arg2 keycapsFontName:(NSString *)arg3;
- (float)emojiInternationalKeySize;
- (struct CGPoint)emojiInternationalKeyOffset;
- (struct CGPoint)emojiPopupTextOffset;
- (char)shouldClearBaseDisplayStringForVariants:(id)arg0;
- (NSString *)thinKeycapsFontName;
- (float)keyCornerRadius;

@end
