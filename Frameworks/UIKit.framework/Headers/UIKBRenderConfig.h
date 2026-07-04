/* Runtime dump - UIKBRenderConfig
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderConfig : NSObject <NSCopying>
{
    char _useEmojiStyles;
    char _lightKeyboard;
    float _blurRadius;
    float _blurSaturation;
    float _keycapOpacity;
    float _lightKeycapOpacity;
}

@property (nonatomic) char lightKeyboard;
@property (nonatomic) float blurRadius;
@property (nonatomic) float blurSaturation;
@property (nonatomic) float keycapOpacity;
@property (nonatomic) float lightKeycapOpacity;
@property (readonly, nonatomic) char whiteText;
@property (readonly, nonatomic) int backdropStyle;

+ (int)backdropStyleForStyle:(int)arg0;
+ (UIKBRenderConfig *)defaultConfig;
+ (UIKBRenderConfig *)defaultEmojiConfig;
+ (NSObject *)darkConfig;
+ (NSObject *)configForAppearance:(int)arg0 inputMode:(UITextInputMode *)arg1;

- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (char)whiteText;
- (UIKBRenderConfig *)copyWithZone:(struct _NSZone *)arg0;
- (float)blurRadius;
- (void)setBlurRadius:(float)arg0;
- (int)backdropStyle;
- (void)setBlurSaturation:(float)arg0;
- (void)setLightKeyboard:(char)arg0;
- (void)setKeycapOpacity:(float)arg0;
- (void)setLightKeycapOpacity:(float)arg0;
- (char)lightKeyboard;
- (float)keycapOpacity;
- (float)lightKeycapOpacity;
- (float)blurSaturation;

@end
