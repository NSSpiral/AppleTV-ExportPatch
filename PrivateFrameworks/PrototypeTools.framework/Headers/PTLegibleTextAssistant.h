/* Runtime dump - PTLegibleTextAssistant
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTLegibleTextAssistant : NSObject
{
    char _effectsDisabled;
    PTLegibleTextAssistantSettings * _settings;
    float _alphaStrength;
    float _radiusStrength;
    float _largestShadowRadius;
    struct ? _imageStatistics;
}

@property (nonatomic) struct ? imageStatistics;
@property (retain, nonatomic) PTLegibleTextAssistantSettings * settings;
@property (nonatomic) float alphaStrength;
@property (nonatomic) float radiusStrength;
@property (nonatomic) char effectsDisabled;
@property (nonatomic) float largestShadowRadius;

- (PTLegibleTextAssistantSettings *)settings;
- (void)setSettings:(PTLegibleTextAssistantSettings *)arg0;
- (void).cxx_destruct;
- (void)setAlphaStrength:(float)arg0;
- (void)setRadiusStrength:(float)arg0;
- (float)alphaStrength;
- (float)radiusStrength;
- (void)setImageStatistics:(struct ?)arg0;
- (float)largestShadowRadius;
- (void)setLargestShadowRadius:(float)arg0;
- (struct CGRect)legibleTextAssistantViewFrameForText:(NSString *)arg0 font:(SEL)arg1;
- (char)effectsDisabled;
- (NSString *)generateForegroundImageForText:(NSString *)arg0 font:(UIFont *)arg1 imageSize:(struct CGSize)arg2;
- (NSString *)generateTextAssistantImageForText:(NSString *)arg0 font:(UIFont *)arg1 imageSize:(struct CGSize)arg2;
- (PTLegibleTextAssistant *)initWithImageStatistics:(struct ?)arg0;
- (NSString *)legibleTextAssistantViewForText:(NSString *)arg0 font:(UIFont *)arg1;
- (struct ?)imageStatistics;
- (void)setEffectsDisabled:(char)arg0;

@end
