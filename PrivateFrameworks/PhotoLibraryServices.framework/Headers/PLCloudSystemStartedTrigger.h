/* Runtime dump - PLCloudSystemStartedTrigger
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSystemStartedTrigger : PLCloudTrigger
{
    char _activated;
    PLCloudPhotoLibraryManager * _cloudLibraryManager;
}

@property (readonly, retain, nonatomic) PLCloudPhotoLibraryManager * cloudLibraryManager;

+ (PLCloudSystemStartedTrigger *)sharedInstance;
+ (void)triggerWithCloudLibraryManager:(PLCloudPhotoLibraryManager *)arg0;

- (void)activate;
- (void)start;
- (PLCloudPhotoLibraryManager *)cloudLibraryManager;
- (void)setCloudLibraryManager:(PLCloudPhotoLibraryManager *)arg0;

@end
