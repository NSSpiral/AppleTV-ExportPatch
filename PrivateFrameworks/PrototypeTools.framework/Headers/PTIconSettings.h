/* Runtime dump - PTIconSettings
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTIconSettings : _UISettings
{
    char _on;
    float _alphaStrength;
    float _radiusStrength;
}

@property (nonatomic) char on;
@property (nonatomic) float alphaStrength;
@property (nonatomic) float radiusStrength;

+ (NSObject *)archivedSettingsGroup;

- (NSDictionary *)settingsHUDConfiguration;
- (void)setDefaultValues;
- (char)on;
- (void)setOn:(char)arg0;
- (void)setAlphaStrength:(float)arg0;
- (void)setRadiusStrength:(float)arg0;
- (void)settingsResetByHUD;
- (float)alphaStrength;
- (float)radiusStrength;

@end
