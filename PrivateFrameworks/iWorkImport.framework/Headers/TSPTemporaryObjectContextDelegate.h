/* Runtime dump - TSPTemporaryObjectContextDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPObjectContextDelegate>
{
    NSMutableSet * _persistenceWarnings;
    char _ignoreDocumentSupport;
    NSError * _error;
}

@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) NSSet * persistenceWarnings;
@property (nonatomic) char ignoreDocumentSupport;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) <NSFilePresenter> * filePresenter;
@property (readonly, nonatomic) char isDocumentSupportTemporary;
@property (readonly, nonatomic) char areNewExternalReferencesToDataAllowed;
@property (readonly, nonatomic) NSUUID * baseUUIDForObjectUUID;
@property (readonly, nonatomic) char preserveDocumentRevisionIdentifierForSequenceZero;
@property (readonly, nonatomic) char isInCollaborationMode;
@property (readonly, nonatomic) char isInReadOnlyMode;

- (char)ignoreDocumentSupport;
- (void)suspendAutosave;
- (void)resumeAutosave;
- (void)addPersistenceWarnings:(id)arg0;
- (NSData *)persistenceWarningsForData:(NSData *)arg0 flags:(unsigned int)arg1;
- (void)presentPersistenceError:(NSError *)arg0;
- (NSSet *)persistenceWarnings;
- (void)setIgnoreDocumentSupport:(char)arg0;
- (TSPTemporaryObjectContextDelegate *)init;
- (void).cxx_destruct;
- (NSError *)error;

@end
