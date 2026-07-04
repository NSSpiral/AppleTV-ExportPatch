/* Runtime dump - CUIStyleEffectConfiguration
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIStyleEffectConfiguration : NSObject <NSCopying>
{
    int _state;
    int _presentationState;
    int _value;
    char _useSimplifiedEffect;
    char _foregroundColorShouldTintEffects;
}

@property (nonatomic) int state;
@property (nonatomic) int presentationState;
@property (nonatomic) int value;
@property (nonatomic) char useSimplifiedEffect;
@property (nonatomic) char foregroundColorShouldTintEffects;

- (CUIStyleEffectConfiguration *)init;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (int)value;
- (void)setValue:(int)arg0;
- (CUIStyleEffectConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (void)setForegroundColorShouldTintEffects:(char)arg0;
- (char)useSimplifiedEffect;
- (char)shouldIgnoreForegroundColor;
- (char)shouldRespectOutputBlending;
- (void)setPresentationState:(int)arg0;
- (char)foregroundColorShouldTintEffects;
- (int)presentationState;
- (void)setUseSimplifiedEffect:(char)arg0;

@end
