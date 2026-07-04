/* Runtime dump - TSTTableStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableStyle : TSSStyle <TSTTableStrokeProviding, TSDMixing>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) TSDStroke * defaultHorizontalBorderStroke;
@property (readonly, nonatomic) TSDStroke * defaultHorizontalBorderStrokeEvenIfNotVisible;
@property (readonly, nonatomic) TSDStroke * defaultVerticalBorderStroke;
@property (readonly, nonatomic) TSDStroke * bodyColumnStroke;
@property (readonly, nonatomic) TSDStroke * bodyRowStroke;
@property (readonly, nonatomic) TSDStroke * bodyRowStrokeEvenIfNotVisible;
@property (readonly, nonatomic) TSDStroke * headerColumnBorderStroke;
@property (readonly, nonatomic) TSDStroke * headerColumnBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke * headerColumnBodyRowStroke;
@property (readonly, nonatomic) TSDStroke * headerColumnSeparatorStroke;
@property (readonly, nonatomic) TSDStroke * headerRowBorderStroke;
@property (readonly, nonatomic) TSDStroke * headerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke * headerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke * headerRowSeparatorStroke;
@property (readonly, nonatomic) TSDStroke * footerRowBorderStroke;
@property (readonly, nonatomic) TSDStroke * footerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke * footerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke * footerRowSeparatorStroke;

+ (TSTTableStyle *)propertiesAllowingNSNull;
+ (NSDictionary *)nonEmphasisTableProperties;
+ (unsigned int)presetIDForStyleID:(NSObject *)arg0;
+ (NSSet *)styleIDForPreset:(unsigned int)arg0;
+ (void)initDefaultStrokePresetListInPropertyMap:(NSObject *)arg0 presetID:(unsigned int)arg1 colors:(struct ? *)arg2;
+ (void)initDefaultPropertyMap:(NSObject *)arg0 presetID:(unsigned int)arg1 colors:(struct ? *)arg2 alternate:(int)arg3;
+ (NSDictionary *)properties;

- (TSTTableStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSTTableStyle *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 overridePropertyMap:(TSSPropertyMap *)arg2 isVariation:(char)arg3;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (NSObject *)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform)arg2;
- (SEL)mapThemePropertyMapSelector;
- (TSDStroke *)headerRowSeparatorStroke;
- (TSDStroke *)bodyRowStroke;
- (TSDStroke *)footerRowSeparatorStroke;
- (TSDStroke *)headerColumnSeparatorStroke;
- (TSDStroke *)bodyColumnStroke;
- (TSDStroke *)headerRowBodyRowStroke;
- (TSDStroke *)headerRowBodyColumnStroke;
- (TSDStroke *)headerColumnBodyRowStroke;
- (TSDStroke *)headerColumnBodyColumnStroke;
- (TSDStroke *)footerRowBodyRowStroke;
- (TSDStroke *)footerRowBodyColumnStroke;
- (TSDStroke *)defaultHorizontalBorderStroke;
- (TSDStroke *)defaultVerticalBorderStroke;
- (TSDStroke *)defaultHorizontalBorderStrokeEvenIfNotVisible;
- (TSDStroke *)bodyRowStrokeEvenIfNotVisible;
- (TSDStroke *)headerColumnBorderStroke;
- (TSDStroke *)headerRowBorderStroke;
- (TSDStroke *)footerRowBorderStroke;
- (NSSet *)horizontalStrokeForStrokePreset:(unsigned int)arg0;
- (NSSet *)verticalStrokeForStrokePreset:(unsigned int)arg0;
- (NSSet *)exteriorStrokeForStrokePreset:(unsigned int)arg0;
- (unsigned int)maskForStrokePreset:(unsigned int)arg0;
- (unsigned int)maskForStrokePresets:(id)arg0;
- (void)loadTableStylePropertiesIntoPropertyMap:(NSObject *)arg0 fromArchive:(struct TableStylePropertiesArchive *)arg1 unarchiver:(struct TableStylePropertiesArchive)arg2;
- (void)saveTableStylePropertiesToArchive:(struct TableStylePropertiesArchive *)arg0 archiver:(NSObject *)arg1;
- (NSSet *)strokeForStrokePreset:(unsigned int)arg0;
- (void)dealloc;
- (void)validate;

@end
