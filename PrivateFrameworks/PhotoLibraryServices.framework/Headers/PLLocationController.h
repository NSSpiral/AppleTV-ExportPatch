/* Runtime dump - PLLocationController
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLLocationController : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager * _locationManager;
    NSMutableArray * _locationPendingAssets;
    NSDictionary * _exifDictionary;
    NSString * _locationStr;
    char _isEnabled;
    char _isUpdating;
    char _isHeadingEnabled;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PLLocationController *)sharedInstance;
+ (char)usesEffectiveBundleIdentifier;
+ (void)setUsesEffectiveBundleIdentifier:(char)arg0;

- (void)dealloc;
- (PLLocationController *)init;
- (void)setEnabled:(char)arg0;
- (CLLocation *)location;
- (void)_applicationStateChanged:(NSNotification *)arg0;
- (void)_assetContainerChanged:(NSNotification *)arg0;
- (void)_updateLocationRunState;
- (void)_stopUpdating;
- (void)_startUpdating;
- (NSString *)locationString;
- (id)locationDictionaryForImageWithDeviceOrientation:(int)arg0 rearFacingCamera:(char)arg1;
- (char)_addLocationToAsset:(NSSet *)arg0;
- (void)_updatePendingAssets;
- (void)locationManager:(CLLocationManager *)arg0 didUpdateLocations:(NSArray *)arg1;
- (void)setHeadingEnabled:(char)arg0;
- (void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg0 deviceOrientation:(int)arg1 cameraWasRearFacing:(char)arg2;

@end
