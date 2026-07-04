/* Runtime dump - TSPDocumentSaveOperationState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentSaveOperationState : TSPSaveOperationState
{
    char _didEndWriteOperation;
    char _shouldLeavePendingEndSave;
    NSURL * _URL;
    int _packageType;
    NSURL * _relativeURLForExternalData;
    NSProgress * _progress;
    TSPDocumentProperties * _documentProperties;
    TSPDocumentRevision * _documentRevision;
    TSPObject * _documentObject;
    TSPObject * _supportObject;
    NSURL * _originalSupportURL;
    SFUCryptoKey * _encryptionKey;
    NSData * _passwordVerifier;
    NSString * _documentPasswordHint;
    TSPPackageWriter * _documentPackageWriter;
    TSPPackageWriter * _supportPackageWriter;
    NSUUID * _documentUUID;
    unsigned long long _saveToken;
}

@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) int packageType;
@property (copy, nonatomic) NSURL * relativeURLForExternalData;
@property (retain, nonatomic) NSProgress * progress;
@property (retain, nonatomic) TSPDocumentProperties * documentProperties;
@property (retain, nonatomic) TSPDocumentRevision * documentRevision;
@property (nonatomic) unsigned long long saveToken;
@property (retain, nonatomic) TSPObject * documentObject;
@property (retain, nonatomic) TSPObject * supportObject;
@property (copy, nonatomic) NSURL * originalSupportURL;
@property (retain, nonatomic) SFUCryptoKey * encryptionKey;
@property (retain, nonatomic) NSData * passwordVerifier;
@property (copy, nonatomic) NSString * documentPasswordHint;
@property (retain, nonatomic) TSPPackageWriter * documentPackageWriter;
@property (retain, nonatomic) TSPPackageWriter * supportPackageWriter;
@property (copy, nonatomic) NSUUID * documentUUID;
@property (nonatomic) char didEndWriteOperation;
@property (nonatomic) char shouldLeavePendingEndSave;

- (void)setDocumentObject:(TSPObject *)arg0;
- (TSPDocumentProperties *)documentProperties;
- (NSData *)passwordVerifier;
- (TSPDocumentSaveOperationState *)initWithURL:(NSString *)arg0 updateType:(int)arg1 packageType:(int)arg2;
- (void)setDocumentUUID:(NSUUID *)arg0;
- (void)setRelativeURLForExternalData:(NSURL *)arg0;
- (NSUUID *)documentUUID;
- (void)setDocumentRevision:(TSPDocumentRevision *)arg0;
- (void)setSaveToken:(unsigned long long)arg0;
- (void)setDocumentProperties:(TSPDocumentProperties *)arg0;
- (unsigned long long)saveToken;
- (void)setOriginalSupportURL:(NSURL *)arg0;
- (void)setSupportObject:(TSPObject *)arg0;
- (TSPObject *)supportObject;
- (NSURL *)originalSupportURL;
- (int)packageType;
- (NSURL *)relativeURLForExternalData;
- (void)setDocumentPackageWriter:(TSPPackageWriter *)arg0;
- (void)setEncryptionKey:(SFUCryptoKey *)arg0;
- (void)setPasswordVerifier:(NSData *)arg0;
- (NSString *)documentPasswordHint;
- (void)setDocumentPasswordHint:(NSString *)arg0;
- (void)setSupportPackageWriter:(TSPPackageWriter *)arg0;
- (TSPPackageWriter *)documentPackageWriter;
- (char)didEndWriteOperation;
- (void)setDidEndWriteOperation:(char)arg0;
- (void)setShouldLeavePendingEndSave:(char)arg0;
- (TSPPackageWriter *)supportPackageWriter;
- (TSPDocumentRevision *)documentRevision;
- (char)shouldLeavePendingEndSave;
- (SFUCryptoKey *)encryptionKey;
- (TSPObject *)documentObject;
- (TSPDocumentSaveOperationState *)init;
- (void)setProgress:(NSProgress *)arg0;
- (NSURL *)URL;
- (NSProgress *)progress;
- (void).cxx_destruct;

@end
