/* Runtime dump - UIKBRenderFactoryNumberPad
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryNumberPad : UIKBRenderFactory

- (NSString *)controlKeyBackgroundColorName;
- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (NSString *)defaultKeyDividerColorName;
- (NSString *)controlKeyDividerColorName;
- (int)lightHighQualityEnabledBlendForm;
- (NSString *)controlKeyForegroundColorName;
- (void)setupLayoutSegments;
- (struct CGPoint)deleteGlyphOffset;
- (struct CGPoint)dictationGlyphOffset;
- (struct CGPoint)loneZeroOffset;
- (float)numberFontSize;
- (float)letterFontSize;
- (struct CGPoint)leftColumnNumberOffset;
- (struct CGPoint)leftColumnLetterOffset;
- (struct CGPoint)rightColumnNumberOffset;
- (struct CGPoint)rightColumnLetterOffset;
- (struct CGPoint)centerColumnNumberOffset;
- (struct CGPoint)centerColumnLetterOffset;
- (void)_customizeSymbolStyle:(NSObject *)arg0 secondaryStyle:(NSObject *)arg1 forKey:(NSString *)arg2 contents:(UIKBKeyDisplayContents *)arg3;

@end
