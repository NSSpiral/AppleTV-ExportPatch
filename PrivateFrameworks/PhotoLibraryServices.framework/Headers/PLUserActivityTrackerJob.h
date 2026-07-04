/* Runtime dump - PLUserActivityTrackerJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLUserActivityTrackerJob : PLDaemonJob
{
    NSArray * _uuids;
    NSString * _clientID;
    long long _activity;
}

@property (nonatomic) long long activity;
@property (retain, nonatomic) NSArray * uuids;
@property (retain, nonatomic) NSString * clientID;

+ (NSOperationQueue *)_queue;
+ (NSManagedObjectModel *)managedObjectModel;
+ (NSString *)managedObjectContext;
+ (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
+ (void)trackAlbumUUIDWasDeleted:(id)arg0;
+ (void)trackAssetUUIDsWereDeleted:(id)arg0;
+ (void)_noteActivity:(long long)arg0 uuid:(NSUUID *)arg1;
+ (NSArray *)_uuidsForAssets:(NSArray *)arg0;
+ (void)_noteActivity:(long long)arg0 uuids:(NSArray *)arg1;
+ (PLUserActivityTrackerJob *)_uuidsFilteringNulls:(id)arg0;
+ (void)trackAssetContainerStartedSlideShow:(id)arg0;
+ (void)trackAlbumChosenForPictureFrame:(struct NSObject *)arg0;
+ (void)trackPhotoWasViewed:(id)arg0;
+ (void)trackVideoWasPlayed:(id)arg0;
+ (void)trackPhotoSetAsWallpaper:(id)arg0;
+ (void)trackPhotoWasZoomed:(id)arg0;
+ (void)trackVideoWasTrimmed:(id)arg0;
+ (void)trackAssetWasPickedViaAPI:(id)arg0;
+ (void)trackAssetWasLoadedViaAPI:(id)arg0;
+ (void)trackSlalomWasEdited:(id)arg0;
+ (void)trackPhotoWasEditedWithRotation:(id)arg0;
+ (void)trackPhotoWasEditedWithAutoEnhance:(id)arg0;
+ (void)trackPhotoWasEditedWithRedEye:(id)arg0;
+ (void)trackPhotoWasEditedWithCrop:(id)arg0;
+ (void)trackPhotoWasEditedWithStraighten:(id)arg0;
+ (void)trackPhotoWasEditedWithFilters:(id)arg0;
+ (void)trackAssetsWereSharedViaFacebook:(id)arg0;
+ (void)trackAssetsWereSharedViaTwitter:(id)arg0;
+ (void)trackAssetsWereSharedViaWeibo:(id)arg0;
+ (void)trackAssetsWereSharedViaYouTube:(id)arg0;
+ (void)trackAssetsWereSharedViaYouku:(id)arg0;
+ (void)trackAssetsWereSharedViaTudou:(id)arg0;
+ (void)trackAssetsWereSharedViaMessage:(NSString *)arg0;
+ (void)trackAssetsWereSharedViaMail:(id)arg0;
+ (void)trackAssetsWereSharedViaPrint:(id)arg0;
+ (void)trackAssetsWereSharedViaCopyToPasteboard:(id)arg0;
+ (void)trackAssetsWereSharedViaAssignToContact:(id)arg0;
+ (void)trackAssetsWereSharedViaSharedPhotoStream:(NSObject *)arg0;

- (void)dealloc;
- (void)run;
- (long long)activity;
- (void)setActivity:(long long)arg0;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLUserActivityTrackerJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (void)setUuids:(NSArray *)arg0;
- (void)setClientID:(NSString *)arg0;
- (NSArray *)uuids;
- (NSString *)clientID;

@end
