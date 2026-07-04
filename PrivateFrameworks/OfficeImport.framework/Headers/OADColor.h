/* Runtime dump - OADColor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColor : NSObject <NSCopying>
{
    NSMutableArray * mTransforms;
}

+ (UIColor *)tsuColorWithColor:(UIColor *)arg0 colorMap:(OADColorMap *)arg1 colorScheme:(OADColorScheme *)arg2 colorPalette:(<OADColorPalette> *)arg3;
+ (UIColor *)basicMapOfColor:(UIColor *)arg0 colorMap:(OADColorMap *)arg1 colorScheme:(OADColorScheme *)arg2 colorPalette:(<OADColorPalette> *)arg3;
+ (OADColor *)tsuColorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2;
+ (UIColor *)tsuColorWithRgbColor:(UIColor *)arg0;
+ (int)mapSchemeColorID:(int)arg0 colorMap:(OADColorMap *)arg1;
+ (UIColor *)mapAdjustedColor:(UIColor *)arg0 colorMap:(OADColorMap *)arg1 colorScheme:(OADColorScheme *)arg2 colorPalette:(<OADColorPalette> *)arg3;
+ (UIColor *)rgbColorWithColor:(UIColor *)arg0 colorMap:(OADColorMap *)arg1 colorScheme:(OADColorScheme *)arg2 colorPalette:(<OADColorPalette> *)arg3;
+ (float)alphaWithColor:(UIColor *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADColor *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)transforms;
- (void)addTransform:(NSObject *)arg0;
- (UIColor *)colorForStyleColor:(UIColor *)arg0;
- (void)setTransforms:(TSCH3DLabelsRendererTransforms *)arg0;
- (void)addTransformOfType:(int)arg0;
- (void)addTransformOfType:(int)arg0 value:(float)arg1;

@end
