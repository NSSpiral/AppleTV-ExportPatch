/* Runtime dump - TSPDatabaseReadCoordinator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseReadCoordinator : TSPReadCoordinatorBase <TSPDatabaseReaderDelegate, TSPReadCoordinator>
{
    TSPObjectContext * _context;
    NSUUID * _baseObjectUUID;
    NSURL * _packageURL;
    TSPFinalizeHandlerQueue * _finalizeHandlerQueue;
    TSPDocumentResourceDataProvider * _documentResourceDataProvider;
    TSPDatabase * _database;
    unsigned long long _databaseVersion;
    NSMapTable * _objects;
    NSObject<OS_dispatch_queue> * _dataQueue;
    NSMapTable * _dataDictionary;
    NSObject<OS_dispatch_queue> * _appRelativeDataQueue;
    NSMutableDictionary * _appRelativeDataDictionary;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSUUID * baseObjectUUID;
@property (readonly, nonatomic) char isReadingFromDocument;
@property (readonly, nonatomic) char hasDocumentVersionUUID;
@property (readonly, nonatomic) char isFromCopy;
@property (readonly, nonatomic) char isCrossDocumentPaste;
@property (readonly, nonatomic) char isCrossAppPaste;

- (unsigned long long)fileFormatVersion;
- (unsigned char)packageIdentifier;
- (TSPDatabaseReadCoordinator *)initWithContext:(TSPObjectContext *)arg0 packageURL:(NSURL *)arg1 finalizeHandlerQueue:(TSPFinalizeHandlerQueue *)arg2 documentResourceDataProvider:(TSPDocumentResourceDataProvider *)arg3 error:(id *)arg4;
- (void)readRootObjectWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 completion:(id /* block */)arg1;
- (char)endReading;
- (void)readComponent:(id)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(id /* block */)arg2;
- (char)hasDocumentVersionUUID;
- (void)reader:(NSObject *)arg0 didFindExternalReferenceToObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(char)arg3 allowUnknownObject:(char)arg4 fromParentObject:(NSObject *)arg5 completion:(id /* block */)arg6;
- (void)reader:(NSObject *)arg0 didFindExternalRepeatedReference:(NSObject *)arg1 isWeak:(char)arg2 allowUnknownObject:(char)arg3 fromParentObject:(NSObject *)arg4 completion:(id /* block */)arg5;
- (char)isReadingFromDocument;
- (void)didUpdateLazyReferenceDelegate:(NSObject *)arg0;
- (NSUUID *)baseObjectUUID;
- (NSString *)unarchivedObjectForIdentifier:(long long)arg0 isReadFinished:(char)arg1;
- (NSString *)externalObjectForIdentifier:(long long)arg0 componentIdentifier:(long long)arg1 isReadFinished:(char)arg2;
- (void)didReferenceExternalObject:(NSObject *)arg0 withIdentifier:(long long)arg1;
- (long long)reader:(NSObject *)arg0 wantsObjectIdentifierForUUID:(id)arg1;
- (NSObject *)reader:(NSObject *)arg0 wantsDataForIdentifier:(long long)arg1;
- (void)reader:(NSObject *)arg0 didUnarchiveObject:(NSObject *)arg1;
- (NSObject *)databaseReader:(NSObject *)arg0 wantsDataForDatabaseObjectIdentifier:(long long)arg1 filename:(NSString *)arg2;
- (NSObject *)databaseReader:(NSObject *)arg0 wantsDataForAppRelativePath:(NSString *)arg1 filename:(NSString *)arg2;
- (NSObject *)dataForReadChannel:(NSObject *)arg0 filename:(NSString *)arg1 linkURLOrNil:(id)arg2;
- (NSURL *)dataForLinkURL:(NSURL *)arg0 filename:(NSString *)arg1;
- (NSString *)createUpgradedOldAppBundleResourcePath:(NSString *)arg0;
- (NSString *)documentResourceEntryForAppRelativePath:(NSString *)arg0;
- (NSObject *)dataForDatabaseObject:(NSObject *)arg0 filename:(NSString *)arg1;
- (NSString *)dataForAppRelativePath:(NSString *)arg0 filename:(NSString *)arg1;
- (TSPDatabaseReadCoordinator *)init;
- (TSPObjectContext *)context;
- (void).cxx_destruct;

@end
