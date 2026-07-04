/* Runtime dump - GSStagingPrefix
 * Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSStagingPrefix : NSObject
{
    id _volumeUUID;
    int _deviceID;
    NSString * _path;
    NSArray * _pathComponents;
    NSData * _extension;
    long long _sandboxHandle;
}

- (void)dealloc;
- (GSStagingPrefix *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)_connectionWithDaemonWasLost;
- (void)_invalidate:(char)arg0;
- (char)_refreshWithError:(id *)arg0;
- (GSStagingPrefix *)initWithDocumentID:(NSObject *)arg0;
- (NSError *)stagingPathforCreatingAdditionWithError:(id *)arg0;
- (char)isStagedPath:(NSString *)arg0;
- (void)cleanupStagingPath:(NSString *)arg0;
- (void)finalize;

@end
