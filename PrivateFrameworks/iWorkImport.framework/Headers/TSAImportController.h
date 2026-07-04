/* Runtime dump - TSAImportController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAImportController : NSObject <TSADocumentRootDelegate, TSPObjectContextDelegate, NSFilePresenter, TSKImportExportDelegate>
{
    TSUTemporaryDirectory * _temporaryDirectory;
    TSUTemporaryDirectory * _temporaryDFFDirectory;
    NSURL * _documentURL;
    NSString * _documentType;
    NSObject<OS_dispatch_group> * _passphraseCompletionGroup;
    <TSKImporter> * _importer;
    NSMutableSet * _importWarnings;
    NSURL * _presentedItemURL;
    NSOperationQueue * _presentedItemOperationQueue;
    NSMutableArray * _deferredWriters;
    struct ? _flags;
    <TSAImportDelegate> * _delegate;
    NSString * _sourcePath;
    NSError * _error;
    TSPObjectContext * _documentContext;
    TSUProgressContext * _progressContext;
}

@property (nonatomic) <TSAImportDelegate> * delegate;
@property (readonly, nonatomic) NSString * sourcePath;
@property (readonly, nonatomic) NSURL * temporaryURL;
@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) TSPObjectContext * documentContext;
@property (readonly, nonatomic) int documentTypeCategory;
@property (retain, nonatomic) TSUProgressContext * progressContext;
@property (nonatomic) char preserveDocumentAfterImport;
@property (readonly, nonatomic) char hasWarnings;
@property (readonly, nonatomic) char isBrowsingVersions;
@property (readonly, nonatomic) char isImportCancelled;
@property (readonly, nonatomic) char isPasswordProtected;
@property (readonly, nonatomic) <TSKImporter> * importer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * defaultDraftName;
@property (readonly, nonatomic) NSString * documentCachePath;
@property (readonly, nonatomic) TSKCollaborationState * collaborationState;
@property (readonly, nonatomic) <NSFilePresenter> * filePresenter;
@property (readonly, nonatomic) char ignoreDocumentSupport;
@property (readonly, nonatomic) char isDocumentSupportTemporary;
@property (readonly, nonatomic) char areNewExternalReferencesToDataAllowed;
@property (readonly, nonatomic) NSUUID * baseUUIDForObjectUUID;
@property (readonly, nonatomic) char preserveDocumentRevisionIdentifierForSequenceZero;
@property (readonly, nonatomic) char isInCollaborationMode;
@property (readonly, nonatomic) char isInReadOnlyMode;
@property (readonly, copy) NSURL * presentedItemURL;
@property (readonly, retain) NSOperationQueue * presentedItemOperationQueue;
@property (readonly, copy) NSURL * primaryPresentedItemURL;
@property (readonly, nonatomic) char importingDesignDemoDoc;

- (char)isPasswordProtected;
- (void)removeFilePresenter;
- (id)additionalDocumentPropertiesForWrite;
- (id)packageDataForWrite;
- (char)areNewExternalReferencesToDataAllowed;
- (char)ignoreDocumentSupport;
- (void)addPersistenceWarnings:(id)arg0;
- (void)presentPersistenceError:(NSError *)arg0;
- (NSString *)defaultDraftName;
- (void)removeWarning:(TSKWarning *)arg0;
- (void)addIncompatibleMovieInfo:(NSDictionary *)arg0 withCompatibilityLevel:(int)arg1;
- (char)isBrowsingVersions;
- (TSAImportController *)initWithPath:(NSString *)arg0 documentType:(NSString *)arg1 delegate:(<TSAImportDelegate> *)arg2;
- (char)import;
- (TSPObjectContext *)documentContext;
- (void)finishImportWithSuccess:(char)arg0 error:(NSError *)arg1;
- (void)willSaveImportedDocument;
- (void)retrievePassphraseForEncryptedDocumentWithImporter:(<TSKImporter> *)arg0 completion:(id /* block */)arg1;
- (NSString *)templateInfoWithName:(NSString *)arg0;
- (NSString *)templateInfoWithName:(NSString *)arg0 variantIndex:(unsigned int)arg1;
- (void)_setPresentedItemURL:(NSURL *)arg0;
- (void)prepareForImportDisplayingProgress:(char)arg0;
- (char)beginImport;
- (Class)importerClass;
- (void)cancelImport;
- (NSString *)sourcePath;
- (void)showProgressIfNeededForURL:(NSURL *)arg0;
- (void)_beginImport;
- (void)didBeginImportToTemporaryURL:(NSURL *)arg0;
- (void)_continueImportWithSuccess:(char)arg0 error:(NSError *)arg1 completedSteps:(int)arg2;
- (id)_prepareTemplate:(id)arg0;
- (NSDictionary *)makeObjectContextWithTemplateInfo:(NSDictionary *)arg0 error:(id *)arg1;
- (void)_performImportWithCompletedSteps:(int)arg0;
- (void)didSaveImportedDocumentWithPassphrase:(NSString *)arg0;
- (NSURL *)temporaryURL;
- (char)_saveContextToTemporaryURL:(NSURL *)arg0 passphrase:(NSString *)arg1 originalURL:(NSURL *)arg2 documentUUID:(NSUUID *)arg3 error:(id *)arg4;
- (char)needsFileCoordination;
- (TSAImportController *)initWithPath:(NSString *)arg0 delegate:(<TSAImportDelegate> *)arg1;
- (int)documentTypeCategory;
- (void)beginImportAsync;
- (char)isImportCancelled;
- (void)setPreserveDocumentAfterImport:(char)arg0;
- (char)preserveDocumentAfterImport;
- (char)hasWarnings;
- (<TSKImporter> *)importer;
- (void)dealloc;
- (void)setDelegate:(<TSAImportDelegate> *)arg0;
- (<TSAImportDelegate> *)delegate;
- (NSString *)name;
- (void)relinquishPresentedItemToWriter:(NSObject *)arg0;
- (void)presentedItemDidMoveToURL:(NSURL *)arg0;
- (NSURL *)presentedItemURL;
- (NSOperationQueue *)presentedItemOperationQueue;
- (NSError *)error;
- (void)setProgressContext:(TSUProgressContext *)arg0;
- (TSUProgressContext *)progressContext;
- (void)addWarning:(TSKWarning *)arg0;
- (NSMutableSet *)warnings;

@end
