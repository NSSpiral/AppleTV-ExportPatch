/* Runtime dump - TSACirrusDocument
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSACirrusDocument : NSObject <TSADocumentRootDelegate, TSPObjectContextDelegate>
{
    char _isClosed;
    TSUTemporaryDirectory * _tempDirForSupport;
    TSPObjectContext * _context;
    NSString * _documentPasswordHint;
    NSURL * _URL;
}

@property (readonly, nonatomic) TSADocumentRoot * documentRoot;
@property (readonly, nonatomic) char skipDocumentUpgrade;
@property (retain, nonatomic) TSPObjectContext * context;
@property (readonly, nonatomic) NSString * documentPasswordHint;
@property (copy, nonatomic) NSURL * URL;
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

- (id)documentPasswordHintForWrite;
- (NSURL *)supportDirectoryURL;
- (NSString *)documentPasswordHint;
- (void)presentPersistenceError:(NSError *)arg0;
- (void)documentDidLoad;
- (NSString *)documentCachePath;
- (TSACirrusDocument *)initWithURL:(NSString *)arg0 appDocumentResourcesURL:(NSURL *)arg1 appDocumentResourcesMetadataURL:(NSURL *)arg2 error:(id *)arg3 passphrase:(NSString *)arg4;
- (char)skipDocumentUpgrade;
- (void)dealloc;
- (NSString *)name;
- (TSPObjectContext *)context;
- (void)setContext:(TSPObjectContext *)arg0;
- (NSURL *)URL;
- (void)close;
- (void)setURL:(NSString *)arg0;
- (TSADocumentRoot *)documentRoot;

@end
