/* Runtime dump - TSTCellStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellStyle : TSSStyle <TSDMixing>

+ (TSTCellStyle *)propertiesAllowingNSNull;
+ (TSTCellStyle *)regionStringForTableArea:(unsigned int)arg0;
+ (void)p_initBodyRegionPropertyMap:(NSObject *)arg0 presetID:(unsigned int)arg1 colors:(struct ? *)arg2 alternate:(int)arg3;
+ (void)p_initHeaderRowRegionPropertyMap:(NSObject *)arg0 presetID:(unsigned int)arg1 colors:(struct ? *)arg2 alternate:(int)arg3;
+ (void)p_initHeaderColumnRegionPropertyMap:(NSObject *)arg0 presetID:(unsigned int)arg1 colors:(struct ? *)arg2 alternate:(int)arg3;
+ (void)p_initFooterRowRegionPropertyMap:(NSObject *)arg0 presetID:(unsigned int)arg1 colors:(struct ? *)arg2 alternate:(int)arg3;
+ (NSDictionary *)nonEmphasisCellProperties;
+ (NSSet *)styleIDForPreset:(unsigned int)arg0 andTableArea:(unsigned int)arg1;
+ (NSSet *)textStyleIDForPreset:(unsigned int)arg0 andTableArea:(unsigned int)arg1;
+ (void)initDefaultPropertyMap:(NSObject *)arg0 forTableArea:(unsigned int)arg1 presetID:(unsigned int)arg2 colors:(struct ? *)arg3 alternate:(int)arg4;
+ (NSDictionary *)properties;

- (TSTCellStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (SEL)mapThemePropertyMapSelector;
- (void)loadCellStylePropertiesIntoPropertyMap:(NSObject *)arg0 fromArchive:(struct CellStylePropertiesArchive *)arg1 unarchiver:(struct CellStylePropertiesArchive)arg2;
- (void)saveCellStylePropertiesToArchive:(struct CellStylePropertiesArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadCellStyleFromArchive:(struct CellStyleArchive *)arg0 unarchiver:(struct CellStyleArchive)arg1;
- (void)saveCellStyleToArchive:(struct CellStyleArchive *)arg0 archiver:(NSObject *)arg1;
- (void)tstMapCellStylePropertyMap:(NSObject *)arg0;
- (void)dealloc;
- (void)validate;

@end
