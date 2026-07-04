/* Runtime dump - PFUbiquityTransactionLog
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityTransactionLog : NSObject
{
    NSMutableDictionary * _contents;
    int _transactionLogType;
    char _useTemporaryLogLocation;
    PFUbiquityLocation * _transactionLogLocation;
    PFUbiquityLocation * _temporaryTransactionLogLocation;
    PFUbiquityLocation * _stagingTransactionLogLocation;
    NSString * _fileProtectionOption;
    char _inTemporaryLocation;
    char _inStagingLocation;
    char _inPermanentLocation;
    PFUbiquityKnowledgeVector * _knowledgeVector;
    PFUbiquitySaveSnapshot * _saveSnapshot;
    NSString * _localPeerID;
    char _loadUsingRetry;
    char _loadedComparisonMetadata;
    char _loadedImportMetadata;
    char _loadedInsertedObjectData;
    char _loadedUpdatedObjectData;
    char _loadedDeletedObjectData;
    char _loadedContents;
    NSRecursiveLock * _contentsLock;
}

@property (nonatomic) char useTemporaryLogLocation;
@property (readonly, nonatomic) char inTemporaryLocation;
@property (readonly, nonatomic) char inStagingLocation;
@property (readonly, nonatomic) char inPermanentLocation;
@property (readonly, nonatomic) NSString * storeName;
@property (readonly, nonatomic) NSString * exportingPeerID;
@property (readonly, nonatomic) NSString * modelVersionHash;
@property (readonly, nonatomic) NSString * fileProtectionOption;
@property (readonly, nonatomic) NSNumber * transactionNumber;
@property (readonly, nonatomic) NSString * transactionLogFilename;
@property (readonly, nonatomic) int transactionLogType;
@property (readonly, nonatomic) PFUbiquityLocation * transactionLogLocation;
@property (readonly, nonatomic) PFUbiquityLocation * temporaryTransactionLogLocation;
@property (readonly, nonatomic) PFUbiquityLocation * stagingTransactionLogLocation;
@property (readonly, nonatomic) PFUbiquitySaveSnapshot * saveSnapshot;
@property (readonly, nonatomic) PFUbiquityLocation * currentLocation;
@property (readonly, nonatomic) PFUbiquityKnowledgeVector * knowledgeVector;
@property (readonly, nonatomic) NSString * localPeerID;
@property (nonatomic) char loadUsingRetry;
@property (readonly, nonatomic) char loadedComparisonMetadata;
@property (readonly, nonatomic) char loadedImportMetadata;
@property (readonly, nonatomic) char loadedInsertedObjectData;
@property (readonly, nonatomic) char loadedUpdatedObjectData;
@property (readonly, nonatomic) char loadedDeletedObjectData;

+ (char)pruneTemporaryLogDirectoryForPeerRootLocation:(NSObject *)arg0 error:(id *)arg1;
+ (int)transactionLogTypeFromLocation:(NSObject *)arg0;
+ (NSObject *)createTransactionLogFilenameForLogType:(int)arg0;
+ (PFUbiquityTransactionLog *)createDataFromExtendedAttrsForLog:(id)arg0 error:(id *)arg1;
+ (void)updateModificationTimesForLocation:(NSObject *)arg0;
+ (void)truncateLogFilesForPeerID:(NSObject *)arg0 storeName:(NSString *)arg1 modelVersionHash:(NSString *)arg2 beforeKnowledgeVector:(id)arg3 withLocalPeerID:(NSString *)arg4 andUbiquityRootLocation:(NSObject *)arg5;
+ (NSString *)transactionLogFilenameUUID;
+ (void)truncateLogFilesBeforeBaselineMetadata:(NSDictionary *)arg0 withLocalPeerID:(NSString *)arg1 andUbiquityRootLocation:(NSObject *)arg2;
+ (NSString *)generateTransactionLogFilename;

- (NSString *)modelVersionHash;
- (NSString *)localPeerID;
- (NSString *)storeName;
- (PFUbiquityLocation *)transactionLogLocation;
- (char)loadInsertedObjectsDataWithError:(id *)arg0;
- (char)loadUpdatedObjectsDataWithError:(id *)arg0;
- (char)loadDeletedObjectsDataWithError:(id *)arg0;
- (char)releaseContents:(id *)arg0;
- (char)loadComparisonMetadataWithError:(id *)arg0;
- (NSString *)exportingPeerID;
- (PFUbiquitySaveSnapshot *)saveSnapshot;
- (char)loadImportMetadataWithError:(id *)arg0;
- (PFUbiquityKnowledgeVector *)knowledgeVector;
- (NSNumber *)transactionNumber;
- (NSString *)transactionLogFilename;
- (char)moveFileToPermanentLocationWithError:(id *)arg0;
- (PFUbiquityTransactionLog *)initWithStoreName:(NSString *)arg0 andSaveSnapshot:(NSObject *)arg1 andRootLocation:(NSObject *)arg2;
- (void)setUseTemporaryLogLocation:(char)arg0;
- (char)writeToDiskWithError:(id *)arg0 andUpdateFilenameInTransactionEntries:(NSArray *)arg1;
- (int)transactionLogType;
- (PFUbiquityLocation *)currentLocation;
- (PFUbiquityTransactionLog *)initWithTransactionLogLocation:(PFUbiquityLocation *)arg0 andLocalPeerID:(NSObject *)arg1;
- (PFUbiquityLocation *)temporaryTransactionLogLocation;
- (PFUbiquityLocation *)stagingTransactionLogLocation;
- (char)inPermanentLocation;
- (char)inTemporaryLocation;
- (char)inStagingLocation;
- (void)releaseInsertedObjects;
- (void)releaseUpdatedObjects;
- (void)releaseDeletedObjects;
- (NSObject *)loadPlistAtLocation:(NSObject *)arg0 withError:(id *)arg1;
- (char)loadContents:(id *)arg0;
- (char)useTemporaryLogLocation;
- (void)populateContents;
- (char)writeContentsOfZipArchive:(id)arg0 intoExtendedAttributesForFile:(NSString *)arg1 error:(id *)arg2;
- (void)cleanupExternalDataReferences;
- (char)deleteLogFileWithError:(id *)arg0;
- (PFUbiquityTransactionLog *)initWithTransactionLogURL:(NSURL *)arg0 ubiquityRootLocation:(PFUbiquityLocation *)arg1 andLocalPeerID:(NSObject *)arg2;
- (char)rewriteToDiskWithError:(id *)arg0;
- (NSString *)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(NSObject *)arg0;
- (NSString *)fileProtectionOption;
- (char)loadUsingRetry;
- (void)setLoadUsingRetry:(char)arg0;
- (char)loadedComparisonMetadata;
- (char)loadedImportMetadata;
- (char)loadedInsertedObjectData;
- (char)loadedUpdatedObjectData;
- (char)loadedDeletedObjectData;
- (void)dealloc;
- (PFUbiquityTransactionLog *)init;
- (NSString *)description;

@end
