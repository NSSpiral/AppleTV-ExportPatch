/* Runtime dump - TSPDatabaseReader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseReader : TSPReader <TSPDatabaseUnarchiverDelegate>
{
    NSObject<OS_dispatch_queue> * _databaseQueue;
    TSPDatabase * _database;
    unsigned long long _databaseVersion;
    struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > _readIdentifiers;
    NSHashTable * _datas;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) char didFinishResolvingReferences;
@property (readonly, nonatomic) char hasDocumentVersionUUID;
@property (readonly, nonatomic) char isFromCopy;
@property (readonly, nonatomic) char isCrossDocumentPaste;
@property (readonly, nonatomic) char isCrossAppPaste;

- (TSPObjectUUIDMap *)objectUUIDMap;
- (TSPDatabaseReader *)initWithComponent:(_UIDatePickerComponent *)arg0 delegate:(NSObject *)arg1;
- (void)beginReadingWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 completion:(id /* block */)arg1;
- (void)didUnarchiveObject:(NSObject *)arg0 withUnarchiver:(NSUnarchiver *)arg1;
- (void)unarchiveObjectWithIdentifierAsync:(long long)arg0;
- (NSObject *)newUnarchiverWithDatabaseObject:(TSPDatabase *)arg0;
- (struct Message *)newDataMessageForDatabaseObject:(NSObject *)arg0;
- (struct Message *)newImageDataMessageForDatabaseObject:(NSObject *)arg0;
- (char)validateObjectIdentifierForObject:(NSObject *)arg0;
- (NSData *)dataForOldDataArchive:(struct DatabaseDataArchive *)arg0;
- (id)filenameFromOldDataArchive:(struct DatabaseDataArchive *)arg0;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > *)filterIdentifiers:(struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > *)arg0;
- (TSPDatabaseReader *)initWithComponent:(_UIDatePickerComponent *)arg0 finalizeHandlerQueue:(TSPFinalizeHandlerQueue *)arg1 delegate:(NSObject *)arg2 database:(TSPDatabase *)arg3 databaseVersion:(unsigned long long)arg4;
- (void)dealloc;
- (TSPDatabaseReader *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
