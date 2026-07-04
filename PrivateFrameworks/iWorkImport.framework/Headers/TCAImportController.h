/* Runtime dump - TCAImportController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TCAImportController : TSAImportController <TSAImportDelegate>
{
    NSString * _passphrase;
    NSError * _passphraseError;
    NSUUID * _baseUUIDForObjectUUID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSUUID *)baseUUIDForObjectUUID;
- (void)finishImportWithSuccess:(char)arg0 error:(NSError *)arg1;
- (void)willSaveImportedDocument;
- (void)importControllerDidRunOutOfSpace:(NSObject *)arg0;
- (TCAImportController *)initWithPath:(NSString *)arg0 documentType:(NSString *)arg1 baseUUIDForObjectUUID:(NSUUID *)arg2;
- (char)importWithPassphrase:(NSString *)arg0;
- (void)retrievePassphraseForEncryptedDocumentWithImporter:(<TSKImporter> *)arg0 completion:(id /* block */)arg1;
- (NSString *)templateInfoWithName:(NSString *)arg0;
- (NSString *)templateInfoWithName:(NSString *)arg0 variantIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)addWarning:(TSKWarning *)arg0;

@end
