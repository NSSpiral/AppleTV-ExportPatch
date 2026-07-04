/* Runtime dump - SETTINGSAppliance
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseAppliance.h>

@class BRController;
@interface SETTINGSAppliance : BRBaseAppliance

- (BRController *)controllerForIdentifier:(NSString *)arg0 args:(NSArray *)arg1;
- (id /* <BRTopShelfController> */)topShelfController;
- (BRController *)applianceController;
- (NSArray *)loadCategories;
- (int)noContentBRError;
- (void)_sleepSelected;

@end
