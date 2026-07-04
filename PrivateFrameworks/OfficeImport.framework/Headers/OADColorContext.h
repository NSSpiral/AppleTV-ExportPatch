/* Runtime dump - OADColorContext
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColorContext : NSObject
{
    OADColorScheme * mScheme;
    OADColorMap * mMap;
    <OADColorPalette> * mPalette;
}

@property (readonly, nonatomic) OADColorScheme * scheme;
@property (readonly, nonatomic) OADColorMap * map;
@property (readonly, nonatomic) <OADColorPalette> * palette;

+ (NSString *)colorContextWithScheme:(OADColorScheme *)arg0 map:(OADColorMap *)arg1 palette:(<OADColorPalette> *)arg2;

- (void)dealloc;
- (OADColorScheme *)scheme;
- (<OADColorPalette> *)palette;
- (OADColorContext *)initWithScheme:(OADColorScheme *)arg0 map:(OADColorMap *)arg1 palette:(<OADColorPalette> *)arg2;
- (OADColorMap *)map;

@end
