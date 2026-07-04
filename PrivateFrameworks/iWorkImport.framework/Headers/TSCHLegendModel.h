/* Runtime dump - TSCHLegendModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendModel : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning, TSDMixing, NSCopying>
{
    TSCHChartInfo * mChartInfo;
    struct CGRect mLegendFrame;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) TSCHChartInfo * chartInfo;
@property (nonatomic) struct CGPoint legendOffset;
@property (nonatomic) struct CGSize legendSize;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (unsigned char)styleOwnerPathType;

- (void)willModify;
- (NSObject *)objectValueForProperty:(int)arg0;
- (int)intValueForProperty:(int)arg0 defaultValue:(int)arg1;
- (TSCHChartInfo *)chartInfo;
- (void)clearParent;
- (NSObject *)g_genericToDefaultPropertyMap;
- (NSObject *)g_operationPropertyNameForGenericProperty:(int)arg0;
- (int)defaultPropertyForGeneric:(int)arg0;
- (NSObject *)p_genericToDefaultPropertyMap;
- (int)specificPropertyForGeneric:(int)arg0;
- (char)hasIntValueForProperty:(int)arg0 value:(int *)arg1;
- (char)hasFloatValueForProperty:(int)arg0 value:(float *)arg1;
- (char)hasObjectValueForProperty:(int)arg0 value:(id *)arg1;
- (NSObject *)operationPropertyNameFromGenericProperty:(int)arg0;
- (id)nonstyle;
- (id)swapTuplesForMutations:(id)arg0 forImport:(char)arg1;
- (id)swapTuplesForParagraphStyleMutations:(id)arg0 forReferencingProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg0 defaultValue:(float)arg1;
- (void)setLegendOffset:(struct CGPoint)arg0;
- (void)setLegendSize:(struct CGSize)arg0;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (void)setChartInfo:(TSCHChartInfo *)arg0;
- (struct CGPoint)legendOffset;
- (struct CGSize)legendSize;
- (void)loadFromPreUFFArchive:(struct LegendModelArchive *)arg0;
- (void)loadFromUnityArchive:(struct ChartArchive *)arg0;
- (void)saveToUnityArchive:(struct ChartArchive *)arg0;
- (void)dealloc;
- (TSCHLegendModel *)init;
- (TSCHLegendModel *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)style;
- (NSString *)context;
- (ABModel *)model;
- (void *)valueForProperty:(int)arg0;
- (NSDictionary *)defaultProperties;

@end
