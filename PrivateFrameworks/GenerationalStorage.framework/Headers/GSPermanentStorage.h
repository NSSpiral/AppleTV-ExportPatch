/* Runtime dump - GSPermanentStorage
 * Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSPermanentStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring>
{
    GSDocumentIdentifier * _documentID;
    GSStagingPrefix * _stagingPrefix;
    NSURL * _documentURL;
    unsigned long long _remoteID;
    unsigned long long _storageID;
    NSData * _pubExtension;
    NSData * _privExtension;
    long long _pubHandle;
    long long _privHandle;
}

@property (readonly, nonatomic) unsigned long long storageID;
@property (readonly, nonatomic) long long remoteID;
@property (retain, nonatomic) GSStagingPrefix * stagingPrefix;
@property (retain) NSData * pubExtension;
@property (retain) NSData * privExtension;
@property (retain) NSURL * documentURL;
@property (readonly, nonatomic) <NSCopying><NSSecureCoding> * persistentIdentifier;

+ (NSObject *)storagePrefixForFileDescriptor:(int)arg0 error:(id *)arg1;
+ (NSURL *)storageIDForItemAtURL:(NSURL *)arg0 error:(id *)arg1;

- (void)removeAdditions:(ABImageAdditions *)arg0 completionHandler:(id /* block */)arg1;
- (void)cleanupStagingURL:(NSURL *)arg0;
- (<NSCopying><NSSecureCoding> *)persistentIdentifier;
- (void)dealloc;
- (GSPermanentStorage *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)_invalidate;
- (void)setDocumentURL:(NSURL *)arg0;
- (NSURL *)documentURL;
- (void)removeAllAdditionsForNamespaces:(id)arg0 completionHandler:(id /* block */)arg1;
- (NSObject *)enumeratorForAdditionsInNameSpace:(NSObject *)arg0 withOptions:(unsigned long long)arg1 withoutOptions:(unsigned long long)arg2 ordering:(int)arg3;
- (NSString *)additionWithName:(NSString *)arg0 inNameSpace:(NSObject *)arg1 error:(id *)arg2;
- (NSURL *)prepareAdditionCreationWithItemAtURL:(NSURL *)arg0 byMoving:(char)arg1 creationInfo:(NSDictionary *)arg2 error:(id *)arg3;
- (void)createAdditionStagedAtURL:(NSURL *)arg0 creationInfo:(NSDictionary *)arg1 completionHandler:(id /* block */)arg2;
- (NSData *)privExtension;
- (NSData *)pubExtension;
- (NSDictionary *)getAdditionDictionary:(NSDictionary *)arg0 error:(id *)arg1;
- (char)setAdditionOptions:(unsigned int)arg0 value:(unsigned long long)arg1 error:(id *)arg2;
- (char)setAdditionDisplayName:(NSString *)arg0 value:(NSObject *)arg1 error:(id *)arg2;
- (NSObject *)setAdditionNameSpace:(NSObject *)arg0 value:(NSObject *)arg1 error:(id *)arg2;
- (char)mergeAdditionUserInfo:(NSDictionary *)arg0 value:(NSObject *)arg1 error:(id *)arg2;
- (void)_connectionWithDaemonWasLost;
- (char)replaceDocumentWithContentsOfAddition:(id)arg0 preservingCurrentVersionWithCreationInfo:(NSDictionary *)arg1 createdAddition:(id *)arg2 error:(id *)arg3;
- (NSError *)URLforReplacingItemWithError:(id *)arg0;
- (void)setPubExtension:(NSData *)arg0;
- (void)setPrivExtension:(NSData *)arg0;
- (char)_refreshRemoteIDWithFileDescriptor:(int)arg0 error:(id *)arg1;
- (NSError *)stagingURLforCreatingAdditionWithError:(id *)arg0;
- (char)replaceDocumentWithContentsOfItemAtURL:(NSURL *)arg0 preservingCurrentVersionWithCreationInfo:(NSDictionary *)arg1 createdAddition:(id *)arg2 error:(id *)arg3;
- (NSArray *)additionsWithNames:(id)arg0 inNameSpace:(NSObject *)arg1 error:(id *)arg2;
- (GSPermanentStorage *)initWithFileDescriptor:(int)arg0 documentID:(GSDocumentIdentifier *)arg1 forItemAtURL:(NSURL *)arg2 error:(id *)arg3;
- (char)transferToItemAtURL:(NSURL *)arg0 error:(id *)arg1;
- (GSStagingPrefix *)stagingPrefix;
- (void)setStagingPrefix:(GSStagingPrefix *)arg0;
- (unsigned long long)storageID;
- (long long)remoteID;
- (void)finalize;

@end
