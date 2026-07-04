/* Runtime dump - UIKBRenderFactory
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactory : NSObject
{
    UIKBRenderConfig * _renderConfig;
    NSMutableArray * _segmentTraits;
    float _rivenSizeFactor;
    char _lightweightFactory;
    float _scale;
    char _boldTextEnabled;
}

@property (nonatomic) float scale;
@property (readonly, nonatomic) UIKBRenderConfig * renderConfig;
@property (readonly, nonatomic) NSArray * segmentTraits;
@property (nonatomic) float rivenSizeFactor;
@property (nonatomic) char lightweightFactory;
@property (readonly, nonatomic) char boldTextEnabled;

+ (char)_enabled;
+ (int)_graphicsQuality;
+ (NSObject *)lightweightFactoryForVisualStyle:(struct ?)arg0 renderConfig:(UIKBRenderConfig *)arg1;
+ (UIKBRenderFactory *)factoryForVisualStyle:(struct ?)arg0 renderConfig:(UIKBRenderConfig *)arg1;
+ (NSString *)cacheKeyForString:(NSString *)arg0 withRenderFlags:(int)arg1 renderConfig:(UIKBRenderConfig *)arg2;
+ (UIColor *)segmentedControlColor:(char)arg0;
+ (Class)factoryClassForVisualStyle:(struct ?)arg0;

- (void)dealloc;
- (UIKBRenderConfig *)renderConfig;
- (float)scale;
- (void)setScale:(float)arg0;
- (id)backgroundTraitsForKeyplane:(id)arg0;
- (NSString *)defaultKeyBackgroundColorName;
- (NSString *)controlKeyBackgroundColorName;
- (NSString *)traitsHashStringForKey:(NSString *)arg0 withGeometry:(TSDInfoGeometry *)arg1 controlOpacities:(char)arg2;
- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (NSString *)lightKeycapsFontName;
- (void)_customizeTraits:(NSArray *)arg0 forPopupForKey:(NSString *)arg1 withRenderConfig:(UIKBRenderConfig *)arg2 keycapsFontName:(NSString *)arg3;
- (float)translucentGapWidth;
- (NSString *)lightTextFontName;
- (char)lightweightFactory;
- (NSString *)traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (char)shouldClearBaseDisplayStringForVariants:(id)arg0;
- (NSString *)lightPadKeycapsFontName;
- (void)modifyTraitsForDetachedInputSwitcher:(id)arg0 withKey:(NSString *)arg1;
- (NSString *)thinKeycapsFontName;
- (float)keyCornerRadius;
- (float)RivenFactor:(float)arg0;
- (NSString *)displayContentsForKey:(NSString *)arg0;
- (NSString *)_controlKeyBackgroundColorName;
- (int)enabledBlendForm;
- (void)removeAllLayoutSegments;
- (char)useBlueThemingForKey:(NSString *)arg0;
- (void)addLayoutSegment:(UIKBRenderFactoryLayoutSegment *)arg0;
- (int)lightHighQualityEnabledBlendForm;
- (NSString *)controlKeyForegroundColorName;
- (NSString *)multitapCompleteKeyImageName;
- (NSString *)muttitapReverseKeyImageName;
- (void)setupLayoutSegments;
- (void)scaleTraits:(NSArray *)arg0;
- (NSString *)shiftKeyImageName;
- (NSString *)shiftOnKeyImageName;
- (NSString *)shiftLockImageName;
- (UIKBRenderFactory *)initWithRenderConfig:(UIKBRenderConfig *)arg0 skipLayoutSegments:(char)arg1;
- (void)setLightweightFactory:(char)arg0;
- (float)emojiPopupDividerKeyOffset;
- (void)lowQualityTraits:(NSArray *)arg0;
- (NSArray *)segmentTraits;
- (NSObject *)hashStringElement;
- (NSString *)deleteKeyImageName;
- (float)skinnyKeyThreshold;
- (id)keyImageNameWithSkinnyVariation:(id)arg0;
- (NSString *)handwritingMoreKeyImageName;
- (NSString *)globalEmojiKeyImageName;
- (NSString *)globalKeyImageName;
- (NSString *)dismissKeyImageName;
- (NSString *)dictationKeyImageName;
- (NSString *)leftArrowKeyImageName;
- (NSString *)rightArrowKeyImageName;
- (NSString *)cutKeyImageName;
- (NSString *)copyKeyImageName;
- (NSString *)pasteKeyImageName;
- (NSString *)undoKeyImageName;
- (NSString *)boldKeyImageName;
- (NSString *)biuKeyImageName;
- (NSString *)defaultKeyShadowColorName;
- (void)modifyTraitsForDividerVariant:(id)arg0 withKey:(NSString *)arg1;
- (NSString *)controlKeyShadowColorName;
- (NSString *)thinTextFontName;
- (float)rivenSizeFactor;
- (void)setRivenSizeFactor:(float)arg0;
- (char)boldTextEnabled;
- (float)passcodeEdgeWeight;
- (NSString *)passcodeKeyEdgeColorName;
- (NSArray *)passcodeActiveControlKeyTraits;
- (void)modifyKeyTraitsForPasscode:(id)arg0 forKey:(NSString *)arg1 onKeyplane:(UIKBCacheToken_Keyplane *)arg2;
- (id)passcodeBackgroundTraitsForKeyplane:(id)arg0;
- (NSArray *)passcodeControlKeyTraits;
- (NSArray *)passcodeShiftedControlKeyTraits;
- (NSArray *)extraPasscodePaddleTraits;

@end
