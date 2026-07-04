/* Runtime dump - UIVibrancyEffect
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVibrancyEffect : UIVisualEffect
{
    int _blurStyle;
}

+ (char)supportsSecureCoding;
+ (NSObject *)effectForBlurEffect:(NSObject *)arg0;

- (UIVibrancyEffect *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIVibrancyEffect *)copyWithZone:(struct _NSZone *)arg0;
- (_UIVisualEffectConfig *)effectConfig;
- (id)effectConfigForQuality:(int)arg0;
- (NSObject *)_lowQualityEffectConfig;
- (NSObject *)_highQualityEffectConfig;

@end
