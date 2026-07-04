/* Runtime dump - SBLockOverlayStyleProperties
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBLockOverlayStyleProperties : NSObject
{
    UIColor * _primaryColor;
    UIColor * _secondaryColor;
    UIColor * _tintColor;
    float _tintAlpha;
    float _blurRadius;
    unsigned int _style;
    int _quality;
    _UIBackdropViewSettings * _settings;
}

@property (readonly, nonatomic) float tintAlpha;
@property (readonly, nonatomic) UIColor * tintColor;
@property (readonly, nonatomic) float blurRadius;
@property (readonly, nonatomic) unsigned int style;
@property (readonly, nonatomic) int graphicsQuality;

- (void)dealloc;
- (NSString *)description;
- (float)blurRadius;
- (unsigned int)style;
- (UIColor *)tintColor;
- (int)graphicsQuality;
- (void)_configure;
- (SBLockOverlayStyleProperties *)initWithStyle:(unsigned int)arg0 quality:(int)arg1;
- (NSObject *)_stringForStyle;
- (NSString *)_stringForQuality;
- (NSObject *)_settingsForStyle;
- (float)tintAlpha;

@end
