/* Runtime dump - PLCloudSharingJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharingJob : PLDaemonJob
{
    PLPhotoLibrary * _photoLibrary;
    NSString * _archiveFilename;
    char _shouldPrioritize;
}

@property (readonly, retain, nonatomic) PLPhotoLibrary * transientPhotoLibrary;
@property (nonatomic) char shouldPrioritize;

+ (PLCloudSharingJob *)archiveDirectory;
+ (NSObject *)recoveredEventsIgnoringEvent:(NSObject *)arg0;
+ (void)deleteAllRecoveryEvents;

- (void)dealloc;
- (PLCloudSharingJob *)init;
- (PLCloudSharingJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (NSOperationQueue *)serialOperationQueue;
- (void)runDaemonSide;
- (char)shouldArchiveXPCToDisk;
- (void)archiveXPCToDisk:(id)arg0;
- (char)shouldPrioritize;
- (void)runAndWaitForMessageToBeSent;
- (void)setShouldPrioritize:(char)arg0;
- (PLPhotoLibrary *)transientPhotoLibrary;

@end
