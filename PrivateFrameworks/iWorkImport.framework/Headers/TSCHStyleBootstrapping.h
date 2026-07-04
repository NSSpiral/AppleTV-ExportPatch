/* Runtime dump - TSCHStyleBootstrapping
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleBootstrapping : NSObject <TSSPresetSource>

+ (TSCHStyleBootstrapping *)presetKinds;
+ (void)bootstrapPresetsOfKind:(NSString *)arg0 inTheme:(TSSTheme *)arg1 alternate:(int)arg2;
+ (NSObject *)p_defaultStyleOfClass:(Class)arg0 stylesheet:(TSSStylesheet *)arg1 identifier:(NSString *)arg2;
+ (NSObject *)p_defaultParagraphStyleOfClass:(Class)arg0 stylesheet:(TSSStylesheet *)arg1 identifier:(NSString *)arg2;
+ (NSString *)p_bootstrappedStylePresetInContext:(NSObject *)arg0 stylesheet:(TSSStylesheet *)arg1 presetIndex:(unsigned int)arg2;
+ (void)bootstrapPresetsOfKind:(NSString *)arg0 inTheme:(TSSTheme *)arg1 alternate:(int)arg2 reservedCount:(unsigned int)arg3;
+ (NSObject *)stylePresetForStylesheet:(NSObject *)arg0 roleIndex:(unsigned int)arg1;
+ (void)bootstrapStylesInStylesheet:(NSObject *)arg0 numberOfPresets:(unsigned int)arg1;

@end
