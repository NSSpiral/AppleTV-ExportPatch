/* Runtime dump - UIKBRenderFactoryEmoji_iPhone
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryEmoji_iPhone : UIKBRenderFactory_Emoji

- (NSString *)traitsHashStringForKey:(NSString *)arg0 withGeometry:(TSDInfoGeometry *)arg1 controlOpacities:(char)arg2;
- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (float)emojiInternationalKeySize;
- (struct CGPoint)emojiInternationalKeyOffset;
- (struct CGPoint)emojiPopupTextOffset;
- (char)shouldClearBaseDisplayStringForVariants:(id)arg0;

@end
