/* Runtime dump - WebStorageManager
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebStorageManager : NSObject

+ (NSString *)_storageDirectoryPath;
+ (WebStorageManager *)sharedWebStorageManager;
+ (void)setStorageDatabaseIdleInterval:(double)arg0;
+ (void)closeIdleLocalStorageDatabases;

- (WebStorageManager *)init;
- (unsigned long long)diskUsageForOrigin:(id)arg0;
- (id)origins;
- (void)deleteOrigin:(id)arg0;
- (void)deleteAllOrigins;
- (void)syncLocalStorage;
- (void)syncFileSystemAndTrackerDatabase;

@end
