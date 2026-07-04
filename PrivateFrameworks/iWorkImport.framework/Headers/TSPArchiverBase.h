/* Runtime dump - TSPArchiverBase
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPArchiverBase : NSObject
{
    TSPObject * _object;
    struct auto_ptr<google::protobuf::Message> _message;
    unsigned long long _messageVersion;
    struct hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > * _fieldRules;
    struct FieldPath * _currentFieldPath;
    NSHashTable * _strongReferences;
    NSHashTable * _weakReferences;
    NSHashTable * _commandToModelReferences;
    NSHashTable * _lazyReferences;
    NSHashTable * _dataReferences;
}

@property (readonly, nonatomic) char isForCopy;
@property (readonly, nonatomic) TSPObject * object;
@property (nonatomic) unsigned long long messageVersion;
@property (readonly, nonatomic) NSHashTable * strongReferences;
@property (readonly, nonatomic) NSHashTable * weakReferences;
@property (readonly, nonatomic) NSHashTable * commandToModelReferences;
@property (readonly, nonatomic) NSHashTable * lazyReferences;
@property (readonly, nonatomic) NSHashTable * dataReferences;

- (void)setStrongReference:(NSObject *)arg0 message:(struct Reference *)arg1;
- (void)setWeakReference:(AVWeakReference *)arg0 message:(struct Reference *)arg1;
- (char)isForCopy;
- (void)setStrongLazyReference:(NSObject *)arg0 message:(struct Reference *)arg1;
- (void)setDataReference:(NSObject *)arg0 message:(struct DataReference *)arg1;
- (void)setMustUnderstandRuleForFieldPath:(int *)arg0;
- (void)setRule:(int)arg0 forFieldPath:(int *)arg1;
- (void)setIgnoreAndPreserveRuleForFieldPath:(int *)arg0;
- (void)setIgnoreAndDropRuleForFieldPath:(int *)arg0;
- (void)addWeakReferenceToObjectUUID:(id)arg0;
- (void)setWeakReferenceToObjectUUID:(id)arg0 message:(struct UUID *)arg1;
- (void)setWeakReferenceToObjectUUIDPath:(NSString *)arg0 message:(struct UUIDPath *)arg1;
- (struct Message *)messageWithNewFunction:(/* block */ id *)arg0;
- (void)setStrongReferenceArray:(NSArray *)arg0 message:(struct RepeatedPtrField<TSP::Reference> *)arg1;
- (void)setWeakReferenceArray:(NSArray *)arg0 message:(struct RepeatedPtrField<TSP::Reference> *)arg1;
- (void)setStrongLazyReferenceArray:(NSArray *)arg0 message:(struct RepeatedPtrField<TSP::Reference> *)arg1;
- (void)setWeakLazyReference:(NSObject *)arg0 message:(struct Reference *)arg1;
- (void)setDataReferenceArray:(NSArray *)arg0 message:(struct RepeatedPtrField<TSP::DataReference> *)arg1;
- (void)setMustUnderstandRuleForField:(int)arg0;
- (void)setIgnoreAndPreserveRuleForField:(int)arg0;
- (void)setIgnoreAndDropRuleForField:(int)arg0;
- (void)scopedRulesForField:(int)arg0 usingBlock:(id /* block */)arg1;
- (void)enumerateRulesUsingBlock:(id /* block */)arg0;
- (void)setWeakReferenceToObjectUUIDData:(struct UUIDData<TSP::UUIDData> *)arg0 message:(struct UUIDData<TSP::UUIDData>)arg1;
- (void)setWeakReferenceToObjectUUIDArray:(NSArray *)arg0 message:(struct RepeatedPtrField<TSP::UUID> *)arg1;
- (void)setWeakReferenceToObjectUUIDPathArray:(NSArray *)arg0 message:(struct RepeatedPtrField<TSP::UUIDPath> *)arg1;
- (unsigned long long)messageVersion;
- (void)setMessageVersion:(unsigned long long)arg0;
- (NSHashTable *)strongReferences;
- (NSHashTable *)weakReferences;
- (NSHashTable *)commandToModelReferences;
- (NSHashTable *)lazyReferences;
- (NSHashTable *)dataReferences;
- (void)setSparseReferenceArray:(NSArray *)arg0 isWeak:(char)arg1 message:(struct SparseReferenceArray *)arg2;
- (void)setSparseReferenceArray:(NSArray *)arg0 message:(struct SparseReferenceArray *)arg1;
- (void)setSparseWeakReferenceArray:(NSArray *)arg0 message:(struct SparseReferenceArray *)arg1;
- (void)setSparseWeakObjectUUIDReferenceArray:(NSArray *)arg0 message:(struct SparseUUIDArray *)arg1;
- (void)setSparseWeakObjectUUIDPathReferenceArray:(NSArray *)arg0 message:(struct SparseUUIDPathArray *)arg1;
- (void)dealloc;
- (TSPArchiverBase *)init;
- (TSPObject *)object;
- (struct Message *)message;
- (void).cxx_construct;
- (void)releaseMessage;
- (void).cxx_destruct;
- (void)cleanup;
- (TSPArchiverBase *)initWithObject:(TSPObject *)arg0;

@end
