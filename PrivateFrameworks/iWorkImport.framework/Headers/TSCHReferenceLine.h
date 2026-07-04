/* Runtime dump - TSCHReferenceLine
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHReferenceLine : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning>
{
    TSCHChartModel * mModel;
    TSCHChartAxisID * mAxisID;
    TSCHReferenceLineStyle * mStyle;
    TSCHReferenceLineNonStyle * mNonStyle;
    NSUUID * mUUID;
    unsigned int mStyleSwapIndex;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) TSCHChartAxis * axis;
@property (readonly, nonatomic) NSUUID * uuid;
@property (readonly, nonatomic) char lineShowing;
@property (readonly, nonatomic) char labelShowing;
@property (readonly, nonatomic) char valueLabelShowing;
@property (readonly, nonatomic) unsigned int styleSwapIndex;
@property (readonly, copy, nonatomic) TSCHChartAxisID * axisID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (unsigned int)styleSwapOrStyleOwnerIndexFromAxisID:(NSObject *)arg0 refLineIndex:(unsigned int)arg1;
+ (NSObject *)p_lineLabelForType:(unsigned int)arg0;
+ (unsigned int)maxNumberOfReferenceLines;
+ (NSObject *)axisIDFromStyleSwapOrStyleOwnerIndex:(unsigned int)arg0;
+ (unsigned int)refLineIndexFromStyleSwapOrStyleOwnerIndex:(unsigned int)arg0;
+ (TSCHReferenceLine *)defaultNonStyleWithContext:(NSObject *)arg0 referenceLineType:(unsigned int)arg1 axis:(TSCHChartAxis *)arg2;
+ (unsigned char)styleOwnerPathType;

- (NSObject *)objectValueForProperty:(int)arg0;
- (TSCHChartAxisID *)axisID;
- (int)intValueForProperty:(int)arg0 defaultValue:(int)arg1;
- (NSDictionary *)chartInfo;
- (void)clearParent;
- (char)lineShowing;
- (NSObject *)g_genericToDefaultPropertyMap;
- (NSObject *)g_operationPropertyNameForGenericProperty:(int)arg0;
- (int)defaultPropertyForGeneric:(int)arg0;
- (NSObject *)p_genericToDefaultPropertyMap;
- (NSDictionary *)drawableInfo;
- (int)specificPropertyForGeneric:(int)arg0;
- (char)hasIntValueForProperty:(int)arg0 value:(int *)arg1;
- (char)hasFloatValueForProperty:(int)arg0 value:(float *)arg1;
- (char)hasObjectValueForProperty:(int)arg0 value:(id *)arg1;
- (NSObject *)operationPropertyNameFromGenericProperty:(int)arg0;
- (id)nonstyle;
- (id)swapTuplesForMutations:(id)arg0 forImport:(char)arg1;
- (id)swapTuplesForParagraphStyleMutations:(id)arg0 forReferencingProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg0 defaultValue:(float)arg1;
- (TSCHReferenceLine *)initWithModel:(NSObject *)arg0 axisID:(TSCHChartAxisID *)arg1 index:(unsigned int)arg2 uuid:(NSUUID *)arg3;
- (double)referenceLineAxisValue;
- (NSString *)localizedTypeName;
- (char)labelShowing;
- (char)valueLabelShowing;
- (unsigned int)styleSwapIndex;
- (void)setStyle:(NSObject *)arg0 nonStyle:(TSCHReferenceLineNonStyle *)arg1;
- (void)dealloc;
- (NSDictionary *)style;
- (NSString *)context;
- (TSCHChartAxis *)axis;
- (ABModel *)model;
- (void *)valueForProperty:(int)arg0;
- (NSUUID *)uuid;
- (NSDictionary *)defaultProperties;

@end
