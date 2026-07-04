/* Runtime dump - PBColorScheme
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBColorScheme : NSObject

+ (void)addColorWithIndex:(int)arg0 fromScheme:(struct PptColorSchemeAtom *)arg1 colorTransform:(/* block */ id * *)arg2 atIndex:(/* block */ id)arg3 inScheme:(int)arg4;
+ (void)addColorWithIndex:(int)arg0 fromScheme:(struct PptColorSchemeAtom *)arg1 atIndex:(/* block */ id * *)arg2 inScheme:(/* block */ id)arg3;
+ (void)readFromColorScheme:(struct PptColorSchemeAtom *)arg0 toColorScheme:(/* block */ id * *)arg1 colorMap:(/* block */ id)arg2 state:(int)arg3;

@end
