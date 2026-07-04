/* Runtime dump - UIKBRenderFactoryiPhone
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryiPhone : UIKBRenderFactory

- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (NSArray *)controlKeyTraits;
- (NSArray *)activeControlKeyTraits;
- (NSArray *)shiftedControlKeyTraits;
- (int)lightHighQualityEnabledBlendForm;
- (NSString *)multitapCompleteKeyImageName;
- (NSString *)muttitapReverseKeyImageName;
- (void)setupLayoutSegments;
- (NSString *)shiftKeyImageName;
- (NSString *)shiftOnKeyImageName;
- (NSString *)shiftLockImageName;
- (float)returnKeyFontSize;
- (float)deleteKeyFontSize;
- (float)moreKeyFontSize;
- (struct CGPoint)dismissKeyOffset;
- (NSString *)deleteKeyImageName;
- (float)skinnyKeyThreshold;
- (NSString *)globalKeyImageName;
- (NSString *)dictationKeyImageName;
- (struct CGPoint)internationalKeyOffset;
- (struct CGPoint)realEmojiKeyOffset;
- (struct CGPoint)dictationKeyOffset;
- (struct CGPoint)deleteKeyOffset;
- (float)shiftKeyFontSize;
- (struct CGPoint)shiftKeyOffset;
- (float)hintNoneKeyFontSize;
- (struct CGPoint)stringKeyOffset;
- (float)stringKeyFontSize;
- (struct CGPoint)more123KeyOffset;
- (float)moreABCKeyFontSize;
- (struct CGPoint)moreABCKeyOffset;
- (struct CGPoint)returnKeyOffset;
- (float)assistKeyFontSize;
- (struct CGPoint)cutKeyOffset;
- (struct CGPoint)copyKeyOffset;
- (struct CGPoint)pasteKeyOffset;
- (struct CGPoint)boldKeyOffset;
- (struct CGPoint)undoKeyOffset;
- (struct CGPoint)leftArrowKeyOffset;
- (struct CGPoint)rightArrowKeyOffset;
- (float)zhuyinFirstToneKeyFontSize;
- (struct CGPoint)zhuyinFirstToneKeyOffset;
- (float)popupFontSize;
- (struct CGPoint)popupSymbolTextOffset;
- (struct UIEdgeInsets)wideShadowPaddleInsets;
- (struct CGPoint)variantSymbolTextOffset;
- (void)_customizeSymbolStyle:(NSObject *)arg0 forKey:(NSString *)arg1 contents:(UIKBKeyDisplayContents *)arg2;
- (void)_customizeGeometry:(NSObject *)arg0 forKey:(NSString *)arg1 contents:(UIKBKeyDisplayContents *)arg2;
- (char)_popupMenuStyleForKey:(NSString *)arg0;
- (void)_customizePopupTraits:(NSArray *)arg0 forKey:(NSString *)arg1 onKeyplane:(UIKBCacheToken_Keyplane *)arg2;
- (char)_popupStyleForKey:(NSString *)arg0;
- (struct UIEdgeInsets)variantDisplayFrameInsets;
- (struct UIEdgeInsets)variantSymbolFrameInsets;
- (struct UIEdgeInsets)variantPaddedFrameInsets;
- (char)isTallPopup;
- (int)rowLimitForKey:(NSString *)arg0;
- (NSObject *)variantGeometriesForGeometry:(NSObject *)arg0 variantCount:(unsigned int)arg1 rowLimit:(int)arg2;
- (float)dualStringBottomAdditionalOffsetForDisplayContents:(id)arg0;
- (NSArray *)shiftLockControlKeyTraits;
- (float)_row4ControlSegmentWidth;
- (NSArray *)shiftDeleteGlyphTraits;
- (struct CGPoint)secondaryShiftKeyOffset;

@end
