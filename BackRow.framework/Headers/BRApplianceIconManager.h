/* Runtime dump - BRApplianceIconManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl, BRImageManager;
@interface BRApplianceIconManager : NSObject
{
    ATVImage * _blackBrickImage;
    ATVPreferences * _imageCachePrefs;
    NSMutableDictionary * _applianceIDByImageName;
}

@property (readonly, nonatomic) BRImageManager * imageManager;
@property (retain, nonatomic) ATVImage * blackBrickImage;
@property (retain, nonatomic) ATVPreferences * imageCachePrefs;
@property (retain, nonatomic) NSMutableDictionary * applianceIDByImageName;

+ (BRApplianceIconManager *)sharedInstance;

- (void)_handleImageManagerImageUpdatedNotification:(NSNotification *)arg0;
- (void)_handleWindowMaxBoundsChanged:(NSNotification *)arg0;
- (id)_imageNameFromAppliance:(id)arg0;
- (NSObject *)_versionForAppID:(NSObject *)arg0;
- (void)_saveVersion:(NSString *)arg0 forAppID:(NSObject *)arg1;
- (void)cacheImageForAppliance:(id)arg0;
- (id)_imageBaseNameFromAppliance:(id)arg0;
- (ATVImage *)blackBrickImage;
- (NSMutableDictionary *)applianceIDByImageName;
- (NSString *)_imageNameWithBaseName:(BRControl *)arg0;
- (NSString *)_prefsVersionKeyFromName:(NSString *)arg0;
- (UIImage *)_identifierFromImageID:(UIImage *)arg0;
- (id)menuIconForAppliance:(id)arg0;
- (void)setBlackBrickImage:(ATVImage *)arg0;
- (ATVPreferences *)imageCachePrefs;
- (void)setImageCachePrefs:(ATVPreferences *)arg0;
- (void)setApplianceIDByImageName:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (BRApplianceIconManager *)init;
- (void).cxx_destruct;
- (BRImageManager *)imageManager;

@end
