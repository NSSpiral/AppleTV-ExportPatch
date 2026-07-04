/* Runtime dump - GSTemporaryStorage
 * Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSTemporaryStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring>
{
    NSURL * _libraryURL;
    NSURL * _documentURL;
    NSURL * _stagingURL;
    int _lockFd;
}

@property (readonly, nonatomic) NSURL * libraryURL;
@property (retain) NSURL * documentURL;
@property (readonly, nonatomic) <NSCopying><NSSecureCoding> * persistentIdentifier;

- (void)removeAdditions:(ABImageAdditions *)arg0 completionHandler:(id /* block */)arg1;
- (void)cleanupStagingURL:(NSURL *)arg0;
- (<NSCopying><NSSecureCoding> *)persistentIdentifier;
- (void)dealloc;
- (GSTemporaryStorage *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setDocumentURL:(NSURL *)arg0;
- (NSURL *)documentURL;
- (void)removeAllAdditionsForNamespaces:(id)arg0 completionHandler:(id /* block */)arg1;
- (struct NSEnumerator *)enumeratorForAdditionsInNameSpace:(NSObject *)arg0 withOptions:(unsigned long long)arg1 withoutOptions:(unsigned long long)arg2 ordering:(int)arg3;
- (NSString *)additionWithName:(NSString *)arg0 inNameSpace:(NSObject *)arg1 error:(id *)arg2;
- (NSURL *)prepareAdditionCreationWithItemAtURL:(NSURL *)arg0 byMoving:(char)arg1 creationInfo:(NSDictionary *)arg2 error:(id *)arg3;
- (void)createAdditionStagedAtURL:(NSURL *)arg0 creationInfo:(NSDictionary *)arg1 completionHandler:(id /* block */)arg2;
- (NSDictionary *)getAdditionDictionary:(NSDictionary *)arg0 error:(id *)arg1;
- (char)setAdditionOptions:(unsigned int)arg0 value:(unsigned long long)arg1 error:(id *)arg2;
- (char)setAdditionDisplayName:(NSString *)arg0 value:(NSObject *)arg1 error:(id *)arg2;
- (NSObject *)setAdditionNameSpace:(NSObject *)arg0 value:(NSObject *)arg1 error:(id *)arg2;
- (char)mergeAdditionUserInfo:(NSDictionary *)arg0 value:(NSObject *)arg1 error:(id *)arg2;
- (char)replaceDocumentWithContentsOfAddition:(id)arg0 preservingCurrentVersionWithCreationInfo:(NSDictionary *)arg1 createdAddition:(id *)arg2 error:(id *)arg3;
- (NSError *)URLforReplacingItemWithError:(id *)arg0;
- (NSError *)stagingURLforCreatingAdditionWithError:(id *)arg0;
- (char)replaceDocumentWithContentsOfItemAtURL:(NSURL *)arg0 preservingCurrentVersionWithCreationInfo:(NSDictionary *)arg1 createdAddition:(id *)arg2 error:(id *)arg3;
- (NSArray *)additionsWithNames:(id)arg0 inNameSpace:(NSObject *)arg1 error:(id *)arg2;
- (GSTemporaryStorage *)initWithLibraryURL:(NSURL *)arg0 forItemAtURL:(NSURL *)arg1 error:(id *)arg2;
- (NSURL *)libraryURL;
- (NSObject *)_URLForNameSpace:(NSObject *)arg0 createIfNeeded:(char)arg1 allowMissing:(char)arg2 error:(id *)arg3;
- (char)__lockWithFlags:(int)arg0 error:(id *)arg1;
- (char)_readLock:(id *)arg0;
- (char)_writeLock:(id *)arg0;
- (NSURL *)_enumerateItemsAtURL:(NSURL *)arg0;
- (void)_protectPath:(NSString *)arg0;
- (void)_unprotectPath:(NSString *)arg0;
- (void)_unlock;
- (void)finalize;

@end
