/* Runtime dump - COMPUTERSAppliance
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreBaseAppliance.h>

@class BRApplianceInfo, BRController;
@interface COMPUTERSAppliance : ATVMusicStoreBaseAppliance

- (void)_networkStateChanged;
- (BRController *)controllerForIdentifier:(NSString *)arg0 args:(NSArray *)arg1;
- (COMPUTERSAppliance *)initWithApplianceInfo:(BRApplianceInfo *)arg0;
- (id /* <BRTopShelfController> */)topShelfController;
- (BRController *)applianceController;
- (NSArray *)loadCategories;
- (void)_dataServersChanged:(NSNotification *)arg0;
- (void)_dataServerStateChanged:(NSNotification *)arg0;
- (NSArray *)_servers;
- (void)dealloc;

@end
