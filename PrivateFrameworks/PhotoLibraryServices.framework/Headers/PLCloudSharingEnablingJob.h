/* Runtime dump - PLCloudSharingEnablingJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharingEnablingJob : PLCloudSharingJob
{
    char _enableSharing;
}

@property (nonatomic) char enableSharing;

+ (void)enableCloudSharing:(char)arg0;
+ (void)deleteAllLocalSharedAlbumsInLibrary:(NSObject *)arg0 keepPendingAlbums:(char)arg1 withReason:(NSString *)arg2;

- (NSString *)description;
- (void)run;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLCloudSharingEnablingJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (char)shouldArchiveXPCToDisk;
- (char)enableSharing;
- (void)setEnableSharing:(char)arg0;

@end
