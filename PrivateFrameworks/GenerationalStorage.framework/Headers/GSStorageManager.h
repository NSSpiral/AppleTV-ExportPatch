/* Runtime dump - GSStorageManager
 * Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSStorageManager : NSObject

+ (void)initialize;
+ (GSStorageManager *)manager;
+ (char)_isPermanentStorageSupportedForStatFSInfo:(struct statfs *)arg0 error:(unsigned int)arg1;
+ (char)_isPermanentStorageSupportedForFD:(int)arg0 error:(id *)arg1;

- (NSString *)persistentIdentifierInStorage:(struct NSObject *)arg0 forAdditionNamed:(id)arg1 inNameSpace:(NSObject *)arg2;
- (char)isPermanentStorageSupportedAtURL:(NSURL *)arg0 error:(id *)arg1;
- (NSURL *)temporaryStorageForItemAtURL:(NSURL *)arg0 locatedAtURL:(NSURL *)arg1 error:(id *)arg2;
- (NSURL *)additionForItemAtURL:(NSURL *)arg0 forPersistentIdentifier:(NSString *)arg1 error:(id *)arg2;
- (char)removeTemporaryStorage:(GSTemporaryStorage *)arg0 error:(id *)arg1;
- (NSURL *)permanentStorageForItemAtURL:(NSURL *)arg0 allocateIfNone:(char)arg1 error:(id *)arg2;
- (void)_connectionWithDaemonWasLost;
- (NSObject *)stagingPrefixForDocumentID:(NSObject *)arg0;
- (char)deallocateDocumentIDOfItemAtURL:(NSURL *)arg0 error:(id *)arg1;
- (char)isItemAtURLInsidePermanentStorage:(id)arg0 error:(id *)arg1;

@end
