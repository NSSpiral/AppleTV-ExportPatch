/* Runtime dump - PLDelayedFiledSystemDeletions
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDelayedFiledSystemDeletions : NSObject
{
    NSMutableArray * _deletionInfos;
}

+ (void)waitForAllDelayedDeletionsToFinish;
+ (void)appendDescriptionForEvent:(NSObject *)arg0 toComponents:(NSDateComponents *)arg1;
+ (NSObject *)deletionsFromChangeHubEvent:(NSObject *)arg0;
+ (NSOperationQueue *)filesystemDeletionQueue;

- (void)dealloc;
- (NSString *)debugDescription;
- (void)addFilesystemDeletionInfo:(NSDictionary *)arg0;
- (void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)appendToXPCMessage:(NSString *)arg0 managedObjectContext:(NSObject *)arg1;
- (PLDelayedFiledSystemDeletions *)initWithFilesystemDeletionInfos:(id)arg0;

@end
