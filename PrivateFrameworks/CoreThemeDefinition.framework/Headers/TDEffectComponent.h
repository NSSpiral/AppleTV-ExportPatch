/* Runtime dump - TDEffectComponent
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDEffectComponent : NSManagedObject

@property (retain, nonatomic) TDEffectRenditionSpec * rendition;
@property (retain, nonatomic) NSSet * parameters;
@property (retain, nonatomic) TDEffectType * effectType;
@property (nonatomic) char isEnabled;

- (void)setEffectParametersFromPreset:(NSSet *)arg0 atIndex:(unsigned int)arg1 withDocument:(NSObject *)arg2;
- (void)updatePresetParameters:(NSDictionary *)arg0 atIndex:(unsigned int)arg1;

@end
