/* Runtime dump - TSCHStyleSwapUndoTuple
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleSwapUndoTuple : NSObject
{
    TSPObject<TSCHStyleSwapSupporting> * mStyleSwapSupporting;
    int mSwapType;
    unsigned int mIndex;
    TSSStyle * mOldValue;
    TSSStyle * mNewValue;
    NSUUID * mRefLineUUID;
    TSSPropertySet * mMutatedProperties;
}

@property (readonly) TSSStyle * beforeValue;
@property (readonly) TSSStyle * afterValue;
@property (readonly) int swapType;
@property (readonly) unsigned int index;
@property (readonly) TSSPropertySet * mutatedProperties;
@property (readonly) NSUUID * refLineUUID;
@property (readonly) TSCHStyleOwnerReference * styleOwnerReference;
@property (readonly) TSCHStyleSemanticTag * semanticTag;
@property (readonly) TSSPropertyMap * forwardDelta;
@property (readonly) TSSPropertyMap * reverseDelta;
@property (readonly, retain, nonatomic) TSPObject<TSCHStyleSwapSupporting> * styleSwapSupporting;

- (void)saveToArchive:(struct StyleSwapUndoTupleArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCHStyleSwapUndoTuple *)initWithArchive:(struct StyleSwapUndoTupleArchive *)arg0 unarchiver:(struct StyleSwapUndoTupleArchive)arg1;
- (TSCHStyleSwapUndoTuple *)initWithChartInfo:(NSDictionary *)arg0 swapType:(int)arg1 index:(unsigned int)arg2 oldValue:(int)arg3 newValue:(NSValue *)arg4;
- (id)p_initWithPersistentStyleSwapSupporting:(id)arg0 swapType:(int)arg1 index:(unsigned int)arg2 oldValue:(int)arg3 newValue:(NSValue *)arg4 refLineUUID:(NSUUID *)arg5;
- (TSCHStyleSwapUndoTuple *)initWithChartInfo:(NSDictionary *)arg0 swapType:(int)arg1 index:(unsigned int)arg2 oldValue:(int)arg3 newValue:(NSValue *)arg4 refLineUUID:(NSUUID *)arg5;
- (int)swapType;
- (TSSStyle *)afterValue;
- (TSSStyle *)beforeValue;
- (NSUUID *)refLineUUID;
- (NSObject *)p_deltaFrom:(NSObject *)arg0 to:(NSObject *)arg1;
- (TSCHStyleSwapUndoTuple *)initWithChartStylePreset:(NSSet *)arg0 swapType:(int)arg1 index:(unsigned int)arg2 oldValue:(int)arg3 newValue:(NSValue *)arg4;
- (char)isSwappingSameStyleObject:(NSObject *)arg0;
- (char)isSwappingSameStyleValues:(NSArray *)arg0;
- (NSObject *)p_nonequalPropertiesFromMap:(NSObject *)arg0 toMap:(NSObject *)arg1;
- (TSSPropertySet *)mutatedProperties;
- (char)canApplyTupleToStyleSwapSupporting:(id)arg0;
- (TSCHStyleSemanticTag *)semanticTag;
- (TSCHStyleOwnerReference *)styleOwnerReference;
- (TSSPropertyMap *)forwardDelta;
- (TSSPropertyMap *)reverseDelta;
- (TSPObject<TSCHStyleSwapSupporting> *)styleSwapSupporting;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)index;
- (NSSQLRelationship *)inverse;

@end
