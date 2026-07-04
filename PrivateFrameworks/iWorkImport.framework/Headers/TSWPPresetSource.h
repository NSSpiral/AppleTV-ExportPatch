/* Runtime dump - TSWPPresetSource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPresetSource : NSObject <TSSPresetSource>

+ (TSWPPresetSource *)presetKinds;
+ (void)bootstrapPresetsOfKind:(NSString *)arg0 inTheme:(TSSTheme *)arg1 alternate:(int)arg2;
+ (void)bootstrapPresetsOfKind:(NSString *)arg0 inTheme:(TSSTheme *)arg1 alternate:(int)arg2 reservedCount:(unsigned int)arg3;
+ (TSWPPresetSource *)p_bootstrapStrokeInTheme:(id)arg0 alternate:(int)arg1 index:(unsigned int)arg2;
+ (void)p_bootstrapTextboxPresetsInTheme:(id)arg0 alternate:(int)arg1 reservedCount:(unsigned int)arg2;
+ (void)p_bootstrapShapePresetsInTheme:(id)arg0 alternate:(int)arg1 reservedCount:(unsigned int)arg2;
+ (void)p_bootstrapLinePresetsInTheme:(id)arg0 alternate:(int)arg1 reservedCount:(unsigned int)arg2;
+ (void)p_bootstrapListPresetsInTheme:(id)arg0 alternate:(int)arg1;
+ (void)p_bootstrapTextStylePresetsInTheme:(id)arg0 alternate:(int)arg1 reservedCount:(unsigned int)arg2;

@end
