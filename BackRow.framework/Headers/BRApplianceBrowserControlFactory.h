/* Runtime dump - BRApplianceBrowserControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl;
@interface BRApplianceBrowserControlFactory : NSObject

+ (BRApplianceBrowserControlFactory *)factory;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (NSDictionary *)_applianceNameTextAttributes;
- (NSDictionary *)_categoryNameTextAttributes;

@end
