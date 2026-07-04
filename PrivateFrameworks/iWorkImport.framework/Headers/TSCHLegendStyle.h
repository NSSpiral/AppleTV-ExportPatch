/* Runtime dump - TSCHLegendStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendStyle : TSCHBaseStyle

+ (NSObject *)presetStyleDescriptor;
+ (TSCHLegendStyle *)defaultStyleWithContext:(NSObject *)arg0;
+ (NSObject *)identifierForRoleIndex:(unsigned int)arg0;
+ (TSCHLegendStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (NSDictionary *)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg0;
+ (NSDictionary *)properties;

- (TSCHLegendStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSCHLegendStyle *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 overridePropertyMap:(TSSPropertyMap *)arg2 isVariation:(char)arg3;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSCHLegendStyle *)initFromPreUFFArchiveWithUnarchiver:(NSObject *)arg0;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg0;

@end
