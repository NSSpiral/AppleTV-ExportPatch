/* Runtime dump - UIVisualEffect
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding>
{
    _UIVisualEffectConfig * _effectConfig;
    _UIBackdropViewSettings * _effectSettings;
}

@property (readonly, nonatomic) _UIVisualEffectConfig * effectConfig;
@property (readonly, nonatomic) _UIBackdropViewSettings * effectSettings;

+ (char)supportsSecureCoding;

- (UIVisualEffect *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIVisualEffect *)copyWithZone:(struct _NSZone *)arg0;
- (_UIVisualEffectConfig *)effectConfig;
- (_UIBackdropViewSettings *)effectSettings;

@end
