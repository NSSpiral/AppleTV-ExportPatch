/* Runtime dump - EDColorsCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDColorsCollection : EDCollection <OADColorPalette>
{
    unsigned int mDefaultColorsCount;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)systemColorIdFromIndex:(unsigned int)arg0;
+ (BOOL)isSystemColorId:(unsigned int)arg0;
+ (unsigned int)xlColorIndexFromTCSystemColorIDEnum:(int)arg0;
+ (int)oadSchemeColorIdFromThemeIndex:(int)arg0;

- (OITSUColor *)colorWithIndex:(unsigned int)arg0;
- (void)setupDefaults;
- (unsigned int *)defaultPalette;
- (void)addColors:(unsigned int *)arg0 count:(unsigned int)arg1 defaultColors:(unsigned long)arg2 defaultCount:(unsigned int *)arg3;
- (EDColorsCollection *)initWithDefaultSetup:(BOOL)arg0;
- (unsigned int)defaultColorsCount;
- (unsigned int)addOrEquivalentColorExcludingDefaults:(id)arg0;
- (void)addDefaultPalette;
- (void)addPalette:(unsigned int *)arg0 paletteSize:(unsigned int)arg1 paletteX:(unsigned long)arg2 paletteXSize:(unsigned int *)arg3;

@end
