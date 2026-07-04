/* Runtime dump - MOVAppliance
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreBaseAppliance.h>

@class BRApplianceInfo, BRController;
@interface MOVAppliance : ATVMusicStoreBaseAppliance
{
    char _wishlistCategoryEnabled;
}

+ (void)initialize;

- (MOVAppliance *)initWithApplianceInfo:(BRApplianceInfo *)arg0;
- (id /* <BRTopShelfController> */)topShelfController;
- (BRController *)applianceController;
- (char)handlePlay:(id)arg0 userInfo:(NSDictionary *)arg1;
- (NSString *)localizedSearchTitle;
- (NSString *)applianceSpecificControllerForIdentifier:(NSString *)arg0 args:(struct OpaqueJSValue * *)arg1;
- (void)_favoritesUpdated:(id)arg0;
- (NSArray *)loadCategories;
- (char)supportsPurchase;
- (char)supportsRental;
- (int)noContentBRError;
- (int)noRemoteContentBRError;
- (void)dealloc;

@end
