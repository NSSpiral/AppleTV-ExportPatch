/* Runtime dump - MUSICNEWAppliance
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreBaseAppliance.h>

@class BRController;
@interface MUSICNEWAppliance : ATVMusicStoreBaseAppliance

+ (NSString *)matchLogoPath;
+ (NSString *)matchStoreCategory;
+ (NSString *)_descriptionKeyForStoreCategory:(NSString *)arg0;
+ (NSString *)aboutITunesMatchDescriptionKey;
+ (void)initialize;

- (NSArray *)applianceCategories;
- (BRController *)controllerForIdentifier:(NSString *)arg0 args:(NSArray *)arg1;
- (id /* <BRTopShelfController> */)topShelfController;
- (BRController *)applianceController;
- (char)handlePlay:(id)arg0 userInfo:(NSDictionary *)arg1;
- (NSString *)localizedSearchTitle;
- (NSArray *)loadCategories;
- (char)supportsPurchase;
- (NSString *)previewProvidersForIdentifier:(NSString *)arg0 withNames:(id *)arg1;
- (NSString *)previewErrorText;
- (NSString *)previewErrorSubtext;

@end
