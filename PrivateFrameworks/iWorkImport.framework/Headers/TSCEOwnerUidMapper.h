/* Runtime dump - TSCEOwnerUidMapper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEOwnerUidMapper : NSObject
{
    struct TSUUuidMap _uidMap;
    struct UUIDData<TSP::UUIDData> _tableUid;
    struct UUIDData<TSP::UUIDData> _nextTableUid;
    struct UUIDData<TSP::UUIDData> _hiddenStateForRowsOwnerUid;
    struct UUIDData<TSP::UUIDData> _nextHiddenStateForRowsOwnerUid;
    struct UUIDData<TSP::UUIDData> _hiddenStateForColumnsOwnerUid;
    struct UUIDData<TSP::UUIDData> _nextHiddenStateForColumnsOwnerUid;
    struct UUIDData<TSP::UUIDData> _conditionalStyleOwnerUid;
    struct UUIDData<TSP::UUIDData> _nextConditionalStyleOwnerUid;
    struct UUIDData<TSP::UUIDData> _sortRuleReferenceTrackerOwnerUid;
    struct UUIDData<TSP::UUIDData> _nextSortRuleReferenceTrackerOwnerUid;
    struct UUIDData<TSP::UUIDData> _mergeOwnerUid;
    struct UUIDData<TSP::UUIDData> _nextMergeOwnerUid;
    struct UUIDData<TSP::UUIDData> _pbTableUid;
}

@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> tableUID;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> pbTableUID;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> hiddenStateForRowsOwnerUid;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> hiddenStateForColumnsOwnerUid;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> conditionalStyleOwnerUID;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> sortRuleReferenceTrackerOwnerUID;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> mergeOwnerUID;
@property (nonatomic) struct UUIDData<TSP::UUIDData> nextTableUID;
@property (nonatomic) struct UUIDData<TSP::UUIDData> nextHiddenStateForRowsOwnerUid;
@property (nonatomic) struct UUIDData<TSP::UUIDData> nextHiddenStateForColumnsOwnerUid;
@property (nonatomic) struct UUIDData<TSP::UUIDData> nextConditionalStyleOwnerUID;
@property (nonatomic) struct UUIDData<TSP::UUIDData> nextSortRuleReferenceTrackerOwnerUID;
@property (nonatomic) struct UUIDData<TSP::UUIDData> nextMergeOwnerUID;

+ (struct __CFUUID *)CFUUIDRefForUID:(struct UUIDData<TSP::UUIDData> *)arg0;

- (struct UUIDData<TSP::UUIDData>)tableUID;
- (struct UUIDData<TSP::UUIDData>)conditionalStyleOwnerUID;
- (void)recreateUIDs;
- (struct UUIDData<TSP::UUIDData>)pbTableUID;
- (struct UUIDData<TSP::UUIDData>)nextTableUID;
- (struct UUIDData<TSP::UUIDData>)hiddenStateForRowsOwnerUid;
- (struct UUIDData<TSP::UUIDData>)nextHiddenStateForRowsOwnerUid;
- (struct UUIDData<TSP::UUIDData>)hiddenStateForColumnsOwnerUid;
- (struct UUIDData<TSP::UUIDData>)nextHiddenStateForColumnsOwnerUid;
- (struct UUIDData<TSP::UUIDData>)nextConditionalStyleOwnerUID;
- (struct UUIDData<TSP::UUIDData>)sortRuleReferenceTrackerOwnerUID;
- (struct UUIDData<TSP::UUIDData>)nextSortRuleReferenceTrackerOwnerUID;
- (struct UUIDData<TSP::UUIDData>)mergeOwnerUID;
- (struct UUIDData<TSP::UUIDData>)nextMergeOwnerUID;
- (TSCEOwnerUidMapper *)initWithTableUID:(struct UUIDData<TSP::UUIDData> *)arg0 pasteBoardTableUID:(struct UUIDData<TSP::UUIDData>)arg1 hiddenStateOwnerForRowsUID:(struct ?)arg2 hiddenStateOwnerForColumnsUID:(NSArray *)arg3 conditionalStyleOwnerUID:(struct UUIDData<TSP::UUIDData>)arg4 sortRuleReferenceTrackerOwnerUID:(struct UUIDData<TSP::UUIDData> *)arg5 mergeOwnerUID:(struct UUIDData<TSP::UUIDData>)arg6;
- (void)setToIdentityMapping;
- (struct TSUUuidMap *)ownerUIDMap;
- (void)saveToArchive:(struct OwnerUIDMapperArchive *)arg0;
- (void)setNextTableUID:(struct UUIDData<TSP::UUIDData>)arg0;
- (void)setNextHiddenStateForRowsOwnerUid:(struct UUIDData<TSP::UUIDData>)arg0;
- (void)setNextHiddenStateForColumnsOwnerUid:(struct UUIDData<TSP::UUIDData>)arg0;
- (void)setNextConditionalStyleOwnerUID:(struct UUIDData<TSP::UUIDData>)arg0;
- (void)setNextSortRuleReferenceTrackerOwnerUID:(struct UUIDData<TSP::UUIDData>)arg0;
- (void)setNextMergeOwnerUID:(struct UUIDData<TSP::UUIDData>)arg0;
- (NSString *)description;
- (void).cxx_construct;
- (void).cxx_destruct;
- (TSCEOwnerUidMapper *)initWithArchive:(struct OwnerUIDMapperArchive *)arg0;

@end
