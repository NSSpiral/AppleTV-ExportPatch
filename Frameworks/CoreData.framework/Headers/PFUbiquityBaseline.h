/* Runtime dump - PFUbiquityBaseline
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile
{
    PFUbiquityLocation * _baselineStagingLocation;
    PFUbiquityBaselineMetadata * _metadata;
    NSMutableDictionary * _storeFilenameToData;
    NSString * _storeFilename;
    NSString * _storeName;
    NSString * _modelVersionHash;
    NSManagedObjectModel * _model;
    _PFZipFileArchive * _baselineArchive;
    NSPersistentStore * _store;
}

@property (readonly) PFUbiquityLocation * baselineArchiveLocation;
@property (readonly) PFUbiquityLocation * baselineStagingLocation;
@property (readonly) PFUbiquityLocation * baselinePeerArchiveLocation;
@property (readonly) PFUbiquityBaselineMetadata * metadata;
@property (readonly) NSDictionary * storeFilenameToData;
@property (readonly) NSString * storeFilename;
@property (readonly) NSString * storeName;
@property (readonly) NSString * modelVersionHash;
@property (readonly) _PFZipFileArchive * baselineArchive;
@property (readonly) NSPersistentStore * store;

+ (char)checkPeerReceiptsUnderRootLocation:(NSObject *)arg0 forAgreementWithLocalPeerID:(NSString *)arg1 storeName:(NSString *)arg2 modelVersionHash:(NSString *)arg3 error:(id *)arg4;
+ (NSObject *)createArchiveWithModel:(NSManagedObjectModel *)arg0 metadata:(PFUbiquityBaselineMetadata *)arg1 storeFilenameToData:(NSDictionary *)arg2 storeFilename:(NSString *)arg3 error:(id *)arg4;
+ (PFUbiquityBaseline *)metadataFromBaselineArchive:(id)arg0;
+ (NSString *)metadataFromCurrentBaselineForStoreWithName:(NSString *)arg0 peerID:(NSObject *)arg1 modelVersionHash:(NSString *)arg2 andUbiquityRootLocation:(NSObject *)arg3 withError:(id *)arg4;
+ (char)isPeerReceiptTooOld:(id)arg0;
+ (PFUbiquityBaseline *)createModelFromBaselineModelWithModelVersionHash:(NSString *)arg0 peerID:(NSObject *)arg1 storeName:(NSString *)arg2 andUbiquityRootLocation:(NSObject *)arg3;
+ (NSString *)createBaselineGCModelForStoreName:(NSString *)arg0 peerID:(NSObject *)arg1 modelVersionHash:(NSString *)arg2 andUbiquityRootLocation:(NSObject *)arg3;
+ (NSString *)createBaselineOptimizedModelForStoreName:(NSString *)arg0 peerID:(NSObject *)arg1 modelVersionHash:(NSString *)arg2 andUbiquityRootLocation:(NSObject *)arg3;
+ (char)removePeerSpecificIdentifiersFromStore:(NSObject *)arg0 withLocalPeerID:(NSString *)arg1;
+ (NSString *)createStringOfContentsOfBaselineFile:(NSString *)arg0;

- (NSPersistentStore *)store;
- (NSString *)modelVersionHash;
- (NSString *)storeName;
- (PFUbiquityBaseline *)initWithBaselineLocation:(NSObject *)arg0 andLocalPeerID:(NSObject *)arg1;
- (id)createPersistentStoreCoordinatorForCurrentBaseline:(id *)arg0;
- (PFUbiquityLocation *)baselineArchiveLocation;
- (PFUbiquityLocation *)baselineStagingLocation;
- (char)clearOutStagingLocationWithError:(id *)arg0;
- (NSDictionary *)storeFilenameToData;
- (NSString *)storeFilename;
- (char)constructBaselineArchive:(id *)arg0;
- (PFUbiquityLocation *)baselinePeerArchiveLocation;
- (char)unpackStoreFilesToStagingLocation:(id *)arg0;
- (char)haveTransactionLogsForPeer:(NSObject *)arg0 between:(int)arg1 and:(int)arg2;
- (char)makeCurrentBaselineWithError:(id *)arg0;
- (char)replaceLocalPersistentStoreAtURL:(NSURL *)arg0 ofType:(NSString *)arg1 withOptions:(unsigned long long)arg2 usingPersistentStoreCoordinator:(NSObject *)arg3 error:(id *)arg4;
- (id)_createPersistentStoreCoordinatorForCurrentBaseline:(char)arg0 error:(id *)arg1;
- (NSData *)optimizedModelData;
- (NSData *)gcModelData;
- (char)moveToPermanentLocation:(id *)arg0;
- (id)createManagedObjectModelFromCurrentBaseline;
- (_PFZipFileArchive *)baselineArchive;
- (id)createSetOfInUseExternalDataRefUUIDs:(id *)arg0;
- (PFUbiquityBaseline *)initWithLocalPeerID:(NSString *)arg0 ubiquityRootLocation:(PFUbiquityLocation *)arg1 forStoreWithName:(NSString *)arg2 andManagedObjectModel:(NSObject *)arg3;
- (char)prepareForBaselineRollOfPersistentStore:(NSObject *)arg0 andLocalPeerID:(NSObject *)arg1 error:(id *)arg2;
- (char)gatherContentsFromMigratedBaseline:(id)arg0 withStoreFileURL:(NSURL *)arg1 error:(id *)arg2;
- (char)gatherContentsAndConstructArchiveWithError:(id *)arg0;
- (char)loadFileFromLocation:(NSObject *)arg0 error:(id *)arg1;
- (char)canReplaceStoreAtKnowledgeVector:(id)arg0;
- (char)isUploaded:(id *)arg0;
- (char)metadataMatchesCurrentMetadata:(id *)arg0;
- (char)importBaselineForStoreAtURL:(NSURL *)arg0 ofType:(NSString *)arg1 options:(NSDictionary *)arg2 withLocalPeerID:(NSString *)arg3 stack:(_PFUbiquityStack *)arg4 andPersistentStoreCoordinator:(NSObject *)arg5 error:(id *)arg6;
- (char)updateCurrentStoreIdentifier:(NSString *)arg0 error:(id *)arg1;
- (char)writeFileToLocation:(NSObject *)arg0 error:(id *)arg1;
- (NSData *)baselineMetadataData;
- (NSDictionary *)storeData;
- (NSObject *)createManagedObjectModel;
- (char)removeUnusedExternalDataReferences:(id *)arg0;
- (void)dealloc;
- (PFUbiquityBaseline *)init;
- (NSString *)description;
- (void)setMetadata:(PFUbiquityBaselineMetadata *)arg0;
- (PFUbiquityBaselineMetadata *)metadata;

@end
