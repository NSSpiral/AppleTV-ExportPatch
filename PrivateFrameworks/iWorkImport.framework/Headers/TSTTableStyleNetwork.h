/* Runtime dump - TSTTableStyleNetwork
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableStyleNetwork : TSPObject <NSFastEnumeration>
{
    int mPresetIndex;
    TSTTableStyle * mTableStyle;
    TSTCellStyle * mBodyCellStyle;
    TSTCellStyle * mHeaderRowCellStyle;
    TSTCellStyle * mHeaderColumnCellStyle;
    TSTCellStyle * mFooterRowCellStyle;
    TSWPParagraphStyle * mBodyTextStyle;
    TSWPParagraphStyle * mHeaderRowTextStyle;
    TSWPParagraphStyle * mHeaderColumnTextStyle;
    TSWPParagraphStyle * mFooterRowTextStyle;
    TSWPParagraphStyle * mTableNameStyle;
    TSWPShapeStyle * mTableNameShapeStyle;
}

@property (retain, nonatomic) TSTTableStyle * tableStyle;
@property (readonly, nonatomic) TSTCellStyle * bodyCellStyle;
@property (readonly, nonatomic) TSTCellStyle * headerColumnCellStyle;
@property (readonly, nonatomic) TSTCellStyle * footerRowCellStyle;
@property (readonly, nonatomic) TSTCellStyle * headerRowCellStyle;
@property (readonly, nonatomic) TSWPParagraphStyle * bodyTextStyle;
@property (readonly, nonatomic) TSWPParagraphStyle * headerColumnTextStyle;
@property (readonly, nonatomic) TSWPParagraphStyle * footerRowTextStyle;
@property (readonly, nonatomic) TSWPParagraphStyle * headerRowTextStyle;
@property (retain, nonatomic) TSWPParagraphStyle * tableNameStyle;
@property (retain, nonatomic) TSWPShapeStyle * tableNameShapeStyle;
@property (nonatomic) unsigned int presetID;

+ (NSObject *)networkFromTableModel:(NSObject *)arg0;
+ (TSTTableStyleNetwork *)networkFromTheme:(id)arg0 presetID:(unsigned int)arg1;
+ (NSString *)networkWithContext:(NSObject *)arg0 presetID:(unsigned int)arg1 colors:(struct ? *)arg2 alternate:(int)arg3;
+ (NSObject *)createStylesInStylesheet:(NSObject *)arg0 presetID:(unsigned int)arg1 colors:(struct ? *)arg2 alternate:(int)arg3;
+ (TSTTableStyleNetwork *)curatedTextStylePropertySetForCrossDocumentPasteMasterComparison;
+ (TSTTableStyleNetwork *)curatedTableStylePropertySetForCrossDocumentPasteMasterComparison;
+ (NSSet *)tableNameStyleIDForPreset:(unsigned int)arg0;
+ (TSTTableStyleNetwork *)defaultTableNameShapeStyleWithContext:(NSObject *)arg0;
+ (NSSet *)tableNameShapeStyleIDForPreset:(unsigned int)arg0;
+ (NSObject *)networkFromStylesheet:(NSObject *)arg0 presetID:(unsigned int)arg1;
+ (TSTTableStyleNetwork *)networkFromTheme:(id)arg0 presetIndex:(unsigned int)arg1;
+ (NSObject *)identifiersForPresetID:(unsigned int)arg0;

- (void)setTableStyle:(TSTTableStyle *)arg0;
- (TSTTableStyleNetwork *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct TableStyleNetworkArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTTableStyleNetwork *)initWithArchive:(struct TableStyleNetworkArchive *)arg0 unarchiver:(struct TableStyleNetworkArchive)arg1;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (NSObject *)copyWithZone:(struct _NSZone *)arg0 context:(NSObject *)arg1;
- (TSTCellStyle *)bodyCellStyle;
- (TSTCellStyle *)headerRowCellStyle;
- (TSTCellStyle *)headerColumnCellStyle;
- (TSTCellStyle *)footerRowCellStyle;
- (TSWPParagraphStyle *)headerRowTextStyle;
- (TSWPParagraphStyle *)headerColumnTextStyle;
- (TSWPParagraphStyle *)footerRowTextStyle;
- (TSWPParagraphStyle *)tableNameStyle;
- (TSWPShapeStyle *)tableNameShapeStyle;
- (void)setTableNameStyle:(TSWPParagraphStyle *)arg0;
- (void)setTableNameShapeStyle:(TSWPShapeStyle *)arg0;
- (id)cellStyleForTableArea:(unsigned int)arg0;
- (void)setCellStyle:(TSTCellStyle *)arg0 forTableArea:(unsigned int)arg1;
- (id)textStyleForTableArea:(unsigned int)arg0;
- (void)setTextStyle:(NSObject *)arg0 forTableArea:(unsigned int)arg1;
- (void)setBodyCellStyle:(TSTCellStyle *)arg0;
- (void)setHeaderRowCellStyle:(TSTCellStyle *)arg0;
- (void)setHeaderColumnCellStyle:(TSTCellStyle *)arg0;
- (void)setFooterRowCellStyle:(TSTCellStyle *)arg0;
- (void)setHeaderRowTextStyle:(TSWPParagraphStyle *)arg0;
- (void)setHeaderColumnTextStyle:(TSWPParagraphStyle *)arg0;
- (void)setFooterRowTextStyle:(TSWPParagraphStyle *)arg0;
- (NSArray *)styleArray;
- (TSTTableStyleNetwork *)initWithContext:(NSObject *)arg0 fromArray:(NSArray *)arg1 presetID:(unsigned int)arg2;
- (void)setStylesFromTableModel:(NSObject *)arg0;
- (void)loadFromArchive:(struct TableStyleNetworkArchive *)arg0 withUnarchiver:(struct TableStyleNetworkArchive)arg1;
- (char)stylesInStylesheet:(NSObject *)arg0;
- (NSSet *)dictionaryWithPreset:(unsigned int)arg0;
- (TSTTableStyleNetwork *)initWithContext:(NSObject *)arg0 fromDictionary:(NSDictionary *)arg1 withPreset:(unsigned int)arg2;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (TSTTableStyleNetwork *)copy;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSTTableStyleNetwork *)copyWithZone:(struct _NSZone *)arg0;
- (TSTTableStyleNetwork *)initWithContext:(TSPObjectContext *)arg0;
- (char)valid;
- (unsigned int)presetID;
- (void)setPresetID:(unsigned int)arg0;
- (TSTTableStyle *)tableStyle;
- (void)setBodyTextStyle:(TSWPParagraphStyle *)arg0;
- (TSWPParagraphStyle *)bodyTextStyle;

@end
