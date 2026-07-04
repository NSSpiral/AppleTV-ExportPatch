/* Runtime dump - TVAppliance
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreBaseAppliance.h>

@class BRApplianceInfo, BRController;
@interface TVAppliance : ATVMusicStoreBaseAppliance
{
    char _favoritesCategoryEnabled;
}

+ (void)initialize;

- (TVAppliance *)initWithApplianceInfo:(BRApplianceInfo *)arg0;
- (id /* <BRTopShelfController> */)topShelfController;
- (BRController *)applianceController;
- (char)handlePlay:(id)arg0 userInfo:(NSDictionary *)arg1;
- (void)_favoriteAdded:(id)arg0;
- (void)_favoriteRemoved:(id)arg0;
- (NSString *)localizedSearchTitle;
- (NSString *)applianceSpecificControllerForIdentifier:(NSString *)arg0 args:(struct OpaqueJSValue * *)arg1;
- (NSArray *)loadCategories;
- (char)supportsPurchase;
- (int)noContentBRError;
- (int)noRemoteContentBRError;
- (NSObject *)_favoritesController;
- (void)dealloc;

@end
