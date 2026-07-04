/* Runtime dump - ATVMoviesAppliance
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/MOVAppliance.h>

@class ATVRentedMediaProvider, BRApplianceInfo;
@interface ATVMoviesAppliance : MOVAppliance
{
    ATVRentedMediaProvider * _rentals;
    NSArray * _existingCategories;
}

- (ATVMoviesAppliance *)initWithApplianceInfo:(BRApplianceInfo *)arg0;
- (id /* <BRTopShelfController> */)topShelfController;
- (NSString *)applianceSpecificControllerForIdentifier:(NSString *)arg0 args:(struct OpaqueJSValue * *)arg1;
- (void)_rentalsUpdated:(id)arg0;
- (NSArray *)loadCategories;
- (void)dealloc;
- (void).cxx_destruct;

@end
