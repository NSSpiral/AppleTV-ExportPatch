/* Runtime dump - SettingsChooseSinglePhotoController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/SettingsChoosePhotosController.h>

@class BRListControl, BRMenuItem;
@interface SettingsChooseSinglePhotoController : SettingsChoosePhotosController
{
    id _selectionBlock;
}

@property (copy, nonatomic) id selectionBlock;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)setSelectionBlock:(id /* block */)arg0;
- (void)_selectedPhoto:(UIImage *)arg0;
- (void)_configureView;
- (void)_handleAdhocPhotosSelection;
- (void)_handleAppleDefaultPhotosSelection;
- (void)_handleITMSMerchantSelectionWithCollectionID:(NSString *)arg0 name:(NSString *)arg1;
- (void)_handleComputersPhotosSelectionForServer:(NSObject *)arg0;
- (void)_handleCupidSelection;
- (void)_handleFeedMerchantSelectionForMerchant:(id)arg0;
- (id /* block */)selectionBlock;
- (NSArray *)_configureSections;
- (void).cxx_destruct;

@end
