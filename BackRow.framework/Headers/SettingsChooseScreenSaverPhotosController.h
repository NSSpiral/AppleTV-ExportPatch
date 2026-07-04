/* Runtime dump - SettingsChooseScreenSaverPhotosController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/SettingsChoosePhotosController.h>

@class BRListControl, BRMenuItem;
@interface SettingsChooseScreenSaverPhotosController : SettingsChoosePhotosController

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)_configureView;
- (void)_handleAdhocPhotosSelection;
- (void)_handleAppleDefaultPhotosSelection;
- (void)_handleITMSMerchantSelectionWithCollectionID:(NSString *)arg0 name:(NSString *)arg1;
- (void)_handleComputersPhotosSelectionForServer:(NSObject *)arg0;
- (void)_handleCupidSelection;
- (void)_handleFeedMerchantSelectionForMerchant:(id)arg0;
- (NSDictionary *)_filterAdhocScreensaverDictionary:(NSDictionary *)arg0;
- (NSDictionary *)_filterAlbumArtScreensaverDictionary:(NSDictionary *)arg0;
- (NSArray *)_configureSections;

@end
