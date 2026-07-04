/* Runtime dump - PASymbolDataStore
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASymbolDataStore : NSObject <PASerializable>
{
    NSMutableDictionary * _uuidToSymbolOwnerDictionary;
    NSMutableDictionary * _uuidToSharedCacheImageInfoDictionary;
    NSMutableSet * _sharedCacheUUIDsAlreadySearchedFor;
    NSMutableDictionary * _uuidToCSSymbolOwnerCache;
    NSMutableDictionary * _pidToCSSymbolicatorCache;
    char _shouldSymbolicate;
    char _shouldUseDsymForUUIDToFindBinaries;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property char shouldSymbolicate;
@property char shouldUseDsymForUUIDToFindBinaries;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (PASymbolDataStore *)init;
- (struct _CSTypeRef)csSymbolicatorForPid:(int)arg0;
- (void)_addNewSymbolOwnerForCSSymbolOwnerRef:(struct _CSTypeRef)arg0;
- (void)_fillUUIDCacheWithKernelSymbolOwners;
- (void)_fillUUIDCacheWithSymbolOwnersFromCurrentProcesses;
- (NSString *)symbolHandleForAddress:(unsigned long long)arg0 inLivingPid:(int)arg1;
- (NSString *)_symbolHandleForAddress:(unsigned long long)arg0 inImageUUID:(UIImage *)arg1 andImageMappingSlide:(unsigned long long)arg2 andPidHint:(int)arg3;
- (UIImage *)_PACSSymbolOwnerForImageUUID:(UIImage *)arg0 andPath:(NSString *)arg1 andPidHint:(int)arg2;
- (NSObject *)_symbolHandleForOffsetIntoSymbolOwner:(unsigned long long)arg0 withSymbolOwner:(NSObject *)arg1 andSymbolOwnerBaseAddress:(unsigned long long)arg2 andPidHint:(int)arg3;
- (id)_sharedCacheMappingsForSharedCacheUUID:(id)arg0;
- (NSString *)_symbolHandleForAddress:(unsigned long long)arg0 withImageUUIDMappings:(NSUUID *)arg1 andImageMappingSlide:(unsigned long long)arg2 andPidHint:(int)arg3;
- (NSSet *)symbolHandleForOffset:(unsigned long long)arg0 inBinaryWithUUID:(id)arg1 withBinaryOffsetInTask:(unsigned long long)arg2 inLivingPid:(int)arg3;
- (NSString *)symbolHandleForAddress:(unsigned long long)arg0 withSymbolicator:(struct _CSTypeRef)arg1;
- (void)makeSureKernelBinariesAreKnown;
- (void)_populateSharedCacheMappingsDictionaryWithSharedCachesInLivingProcesses;
- (void)_populateCSSymbolOwnerCacheWithLivingProcesses;
- (NSString *)symbolHandleForAddress:(unsigned long long)arg0 inSampleTask:(NSObject *)arg1 isLiving:(char)arg2;
- (NSSet *)symbolHandleForOffset:(unsigned long long)arg0 inBinaryWithUUID:(id)arg1 inLivingPid:(int)arg2;
- (void)cacheSymbolicatorForPid:(int)arg0;
- (void)flushCachedSymbolicatorForPid:(int)arg0;
- (void)flushSymbolicatorCache;
- (id)copySymbolicationInfoForLivingPid:(int)arg0;
- (char)_isLikelyToBeKernelAddress:(unsigned long long)arg0;
- (char)shouldSymbolicate;
- (void)setShouldSymbolicate:(char)arg0;
- (char)shouldUseDsymForUUIDToFindBinaries;
- (void)setShouldUseDsymForUUIDToFindBinaries:(char)arg0;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (id)ownerContainingSymbol:(id)arg0;

@end
