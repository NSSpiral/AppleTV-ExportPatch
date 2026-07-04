/* Runtime dump - UIKBRenderFactoryiPad
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone

- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (NSString *)lightKeycapsFontName;
- (void)_customizeTraits:(NSArray *)arg0 forPopupForKey:(NSString *)arg1 withRenderConfig:(UIKBRenderConfig *)arg2 keycapsFontName:(NSString *)arg3;
- (char)shouldClearBaseDisplayStringForVariants:(id)arg0;
- (NSString *)thinKeycapsFontName;
- (float)keyCornerRadius;
- (NSString *)displayContentsForKey:(NSString *)arg0;
- (NSString *)multitapCompleteKeyImageName;
- (NSString *)muttitapReverseKeyImageName;
- (void)setupLayoutSegments;
- (NSString *)shiftKeyImageName;
- (NSString *)shiftOnKeyImageName;
- (NSString *)shiftLockImageName;
- (float)spaceKeyFontSize;
- (float)deleteKeyFontSize;
- (float)moreKeyFontSize;
- (float)internationalKeyFontSize;
- (float)dictationKeyFontSize;
- (float)dismissKeyFontSize;
- (struct CGPoint)dismissKeyOffset;
- (NSString *)deleteKeyImageName;
- (float)skinnyKeyThreshold;
- (NSString *)globalKeyImageName;
- (NSString *)dismissKeyImageName;
- (NSString *)dictationKeyImageName;
- (struct CGPoint)internationalKeyOffset;
- (struct CGPoint)dictationKeyOffset;
- (struct CGPoint)deleteKeyOffset;
- (float)shiftKeyFontSize;
- (struct CGPoint)shiftKeyOffset;
- (float)stringKeyFontSize;
- (float)zhuyinFirstToneKeyFontSize;
- (void)_customizeSymbolStyle:(NSObject *)arg0 forKey:(NSString *)arg1 contents:(UIKBKeyDisplayContents *)arg2;
- (void)_customizeGeometry:(NSObject *)arg0 forKey:(NSString *)arg1 contents:(UIKBKeyDisplayContents *)arg2;
- (void)_customizePopupTraits:(NSArray *)arg0 forKey:(NSString *)arg1 onKeyplane:(UIKBCacheToken_Keyplane *)arg2;
- (struct UIEdgeInsets)variantDisplayFrameInsets;
- (struct UIEdgeInsets)variantSymbolFrameInsets;
- (int)rowLimitForKey:(NSString *)arg0;
- (NSObject *)variantGeometriesForGeometry:(NSObject *)arg0 variantCount:(unsigned int)arg1 rowLimit:(int)arg2;
- (float)_row4ControlSegmentWidth;
- (struct CGPoint)secondaryShiftKeyOffset;
- (float)keyInsetBottom;
- (float)symbolFrameInset;
- (struct CGRect)shiftKeySymbolFrame;
- (struct CGRect)dismissKeySymbolFrame;
- (float)returnKeySymbolFrameInset;
- (float)fontSizeAdjustmentForNonAlphanumericKeycaps;
- (float)dualStringKeyFontSizeAdjustment;
- (float)bottomRowDefaultFontSize;
- (float)fallbackFontSize;
- (float)smallKanaKeyFontSize;
- (float)emailDotKeyFontSize;
- (float)facemarkKeyFontSize;
- (struct CGSize)defaultVariantGeometrySize;
- (float)defaultVariantSizeThreshold;
- (struct CGPoint)dualStringKeyOffset;
- (float)dualStringKeyMiddleMargin;
- (float)defaultPathWeight;

@end
