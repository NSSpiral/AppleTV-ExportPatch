/* Runtime dump - OABFill
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABFill : NSObject

+ (void)readGradientFill:(id)arg0 fromFillPropertiesManager:(NSObject *)arg1 colorPalette:(<OADColorPalette> *)arg2;
+ (void)readImageFill:(id)arg0 fromFillPropertiesManager:(NSObject *)arg1 colorPalette:(<OADColorPalette> *)arg2;
+ (NSObject *)readFillFromFillPropertiesManager:(NSObject *)arg0 colorPalette:(<OADColorPalette> *)arg1;
+ (void)addStopsFromArray:(struct OABGradientStop *)arg0 stopCount:(struct OABGradientStop)arg1 inverted:(int)arg2 startPos:(char)arg3 endPos:(float)arg4 toGradientFill:(float)arg5 fillPropertiesManager:(NSObject *)arg6;

@end
