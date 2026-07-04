/* Runtime dump - TDEffectRenditionSpec
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDEffectRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) NSNumber * effectScale;
@property (retain, nonatomic) NSSet * components;

- (id)createCSIRepresentationWithCompression:(char)arg0 colorSpaceID:(unsigned int)arg1 document:(NSObject *)arg2;
- (void)setComponentsFromEffectPreset:(NSSet *)arg0 withDocument:(NSObject *)arg1;
- (CUIShapeEffectPreset *)effectPreset;

@end
