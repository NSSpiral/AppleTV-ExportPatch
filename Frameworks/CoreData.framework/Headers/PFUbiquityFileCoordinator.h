/* Runtime dump - PFUbiquityFileCoordinator
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityFileCoordinator : NSFileCoordinator
{
    NSString * _localPeerID;
}

@property (readonly, nonatomic) NSString * localPeerID;

+ (NSObject *)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(NSObject *)arg0;
+ (NSObject *)newFileCoordinatorForUbiquityRootLocation:(NSObject *)arg0 andLocalPeerID:(NSObject *)arg1;
+ (NSObject *)newFileCoordinatorForUbiquityRootLocation:(NSObject *)arg0;

- (NSString *)localPeerID;
- (void)coordinateReadingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1 retryOnError:(char)arg2 error:(id *)arg3 byAccessor:(NSObject *)arg4;
- (char)shouldRetryForError:(NSError *)arg0 ignoreFile:(char *)arg1;
- (void)dealloc;
- (PFUbiquityFileCoordinator *)initWithFilePresenter:(PFUbiquityFilePresenter *)arg0;

@end
