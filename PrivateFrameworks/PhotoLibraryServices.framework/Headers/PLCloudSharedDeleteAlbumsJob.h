/* Runtime dump - PLCloudSharedDeleteAlbumsJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob
{
    NSArray * _albumCloudGUIDsToDelete;
}

@property (retain, nonatomic) NSArray * albumCloudGUIDsToDelete;

+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg0;

- (void)dealloc;
- (NSString *)description;
- (void)run;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLCloudSharedDeleteAlbumsJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (NSArray *)albumCloudGUIDsToDelete;
- (void)setAlbumCloudGUIDsToDelete:(NSArray *)arg0;

@end
