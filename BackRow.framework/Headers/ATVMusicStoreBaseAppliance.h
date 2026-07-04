/* Runtime dump - ATVMusicStoreBaseAppliance
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseAppliance.h>

@class BRController;
@interface ATVMusicStoreBaseAppliance : BRBaseAppliance

- (BRController *)controllerForIdentifier:(NSString *)arg0 args:(NSArray *)arg1;
- (NSString *)localizedSearchTitle;
- (NSString *)applianceSpecificControllerForIdentifier:(NSString *)arg0 args:(struct OpaqueJSValue * *)arg1;
- (NSString *)_qualifyRemoteCategoryDescription:(NSString *)arg0;
- (id)applianceCategoryDescriptions;
- (void)dealloc;

@end
