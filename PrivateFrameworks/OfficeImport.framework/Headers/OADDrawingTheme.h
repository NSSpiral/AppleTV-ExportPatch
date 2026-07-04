/* Runtime dump - OADDrawingTheme
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADDrawingTheme : NSObject
{
    OADDefaultProperties * mShapeDefaults;
    OADDefaultProperties * mLineDefaults;
    OADDefaultProperties * mTextDefaults;
    OADStyleMatrix * mStyleMatrix;
    OADFontScheme * mFontScheme;
    OADColorScheme * mColorScheme;
    OADColorMap * mColorMap;
    <OADColorPalette> * mColorPalette;
}

@property (readonly, nonatomic) OADDefaultProperties * shapeDefaults;
@property (readonly, nonatomic) OADDefaultProperties * lineDefaults;
@property (readonly, nonatomic) OADDefaultProperties * textDefaults;
@property (readonly, nonatomic) OADStyleMatrix * styleMatrix;
@property (readonly, nonatomic) OADFontScheme * fontScheme;
@property (retain, nonatomic) OADColorScheme * colorScheme;
@property (readonly, nonatomic) OADColorMap * colorMap;
@property (retain, nonatomic) <OADColorPalette> * colorPalette;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (OADColorScheme *)colorScheme;
- (void)setColorScheme:(OADColorScheme *)arg0;
- (OADStyleMatrix *)styleMatrix;
- (OADColorMap *)colorMap;
- (OADFontScheme *)fontScheme;
- (<OADColorPalette> *)colorPalette;
- (void)setColorPalette:(<OADColorPalette> *)arg0;
- (OADDefaultProperties *)shapeDefaults;
- (OADDefaultProperties *)lineDefaults;
- (OADDefaultProperties *)textDefaults;
- (OADDrawingTheme *)initWithStyleMatrix:(OADStyleMatrix *)arg0 fontScheme:(OADFontScheme *)arg1 colorScheme:(OADColorScheme *)arg2 colorMap:(OADColorMap *)arg3 colorPalette:(<OADColorPalette> *)arg4;
- (OADDrawingTheme *)initWithTheme:(TSSTheme *)arg0 colorMap:(OADColorMap *)arg1 colorPalette:(<OADColorPalette> *)arg2;
- (void)applyThemeOverrides:(id)arg0 colorMapOverride:(id)arg1;

@end
