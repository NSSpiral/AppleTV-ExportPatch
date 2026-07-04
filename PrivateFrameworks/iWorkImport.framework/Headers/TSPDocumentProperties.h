/* Runtime dump - TSPDocumentProperties
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentProperties : NSObject <NSCopying>
{
    NSUUID * _versionUUID;
    NSUUID * _shareUUID;
    NSUUID * _documentUUID;
    TSPDocumentRevision * _revision;
    NSDictionary * _additionalProperties;
    unsigned long long _fileFormatVersion;
}

@property (copy, nonatomic) NSUUID * documentUUID;
@property (readonly, nonatomic) NSUUID * versionUUID;
@property (readonly, nonatomic) NSUUID * shareUUID;
@property (nonatomic) unsigned long long fileFormatVersion;
@property (copy, nonatomic) TSPDocumentRevision * revision;
@property (copy, nonatomic) NSDictionary * additionalProperties;

+ (NSString *)documentPropertiesRelativePath;
+ (NSString *)shareIdentifierRelativePath;
+ (NSURL *)documentRevisionAtURL:(NSURL *)arg0;
+ (NSURL *)documentUUIDAtURL:(NSURL *)arg0;
+ (char)documentIsEncryptedAtURL:(NSURL *)arg0;

- (NSUUID *)versionUUID;
- (void)setDocumentUUID:(NSUUID *)arg0;
- (void)updateVersionUUID;
- (NSUUID *)documentUUID;
- (void)updateDocumentAndShareUUID;
- (void)setFileFormatVersion:(unsigned long long)arg0;
- (void)setRevision:(TSPDocumentRevision *)arg0;
- (unsigned long long)fileFormatVersion;
- (char)writeToPackageWriter:(NSObject *)arg0 error:(id *)arg1;
- (void)updateDocumentUUID;
- (TSPDocumentProperties *)initWithDocumentURL:(NSURL *)arg0 allowMissingPropertyList:(char)arg1 error:(id *)arg2;
- (TSPDocumentProperties *)initWithDocumentURL:(NSURL *)arg0 error:(id *)arg1;
- (char)writeToDocumentBundleURL:(NSURL *)arg0 error:(id *)arg1;
- (TSPDocumentProperties *)initWithDocumentBundleURL:(NSURL *)arg0 allowMissingPropertyList:(char)arg1 error:(id *)arg2;
- (TSPDocumentProperties *)initWithDocumentFileURL:(NSURL *)arg0 allowMissingPropertyList:(char)arg1 error:(id *)arg2;
- (void)readDocumentPropertiesFromDictionary:(NSDictionary *)arg0;
- (TSPDocumentProperties *)initWithFilePackageURL:(NSURL *)arg0 zipArchive:(TSUZipFileArchive *)arg1 allowMissingPropertyList:(char)arg2 error:(id *)arg3;
- (NSDictionary *)UUIDFromDocumentProperties:(NSDictionary *)arg0 key:(NSString *)arg1;
- (NSError *)encodedPropertyListWithError:(id *)arg0;
- (NSUUID *)shareUUID;
- (char)writeToDocumentURL:(NSURL *)arg0 writerBlock:(id /* block */)arg1 error:(/* block */ id)arg2;
- (TSPDocumentProperties *)initWithPropertiesURL:(NSURL *)arg0 error:(id *)arg1;
- (char)writeToPropertiesURL:(NSURL *)arg0 error:(id *)arg1;
- (NSDictionary *)additionalProperties;
- (TSPDocumentProperties *)init;
- (NSString *)description;
- (TSPDocumentProperties *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (TSPDocumentRevision *)revision;
- (void)setAdditionalProperties:(NSDictionary *)arg0;

@end
