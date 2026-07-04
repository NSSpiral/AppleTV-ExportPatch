/* Runtime dump - UIKBRenderFactoryiPadSplit
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryiPadSplit : UIKBRenderFactoryiPad

- (id)backgroundTraitsForKeyplane:(id)arg0;
- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (void)_customizeTraits:(NSArray *)arg0 forPopupForKey:(NSString *)arg1 withRenderConfig:(UIKBRenderConfig *)arg2 keycapsFontName:(NSString *)arg3;
- (float)keyCornerRadius;
- (NSString *)multitapCompleteKeyImageName;
- (NSString *)muttitapReverseKeyImageName;
- (NSString *)shiftKeyImageName;
- (NSString *)shiftOnKeyImageName;
- (NSString *)shiftLockImageName;
- (struct CGPoint)dismissKeyOffset;
- (NSString *)deleteKeyImageName;
- (float)skinnyKeyThreshold;
- (NSString *)globalEmojiKeyImageName;
- (NSString *)globalKeyImageName;
- (NSString *)dismissKeyImageName;
- (NSString *)dictationKeyImageName;
- (struct CGPoint)deleteKeyOffset;
- (struct CGPoint)shiftKeyOffset;
- (void)_customizeSymbolStyle:(NSObject *)arg0 forKey:(NSString *)arg1 contents:(UIKBKeyDisplayContents *)arg2;
- (void)_customizeGeometry:(NSObject *)arg0 forKey:(NSString *)arg1 contents:(UIKBKeyDisplayContents *)arg2;
- (NSObject *)variantGeometriesForGeometry:(NSObject *)arg0 variantCount:(unsigned int)arg1 rowLimit:(int)arg2;
- (float)keyInsetBottom;
- (float)symbolFrameInset;
- (float)defaultPathWeight;

@end
