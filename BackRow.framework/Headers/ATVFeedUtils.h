/* Runtime dump - ATVFeedUtils
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVMerchant, BRControl;
@interface ATVFeedUtils : NSObject

+ (void)configureControl:(BRControl *)arg0 withFeedElement:(NSObject *)arg1;
+ (int)textAlignmentFromFeedAlignment:(id)arg0 defaultTextAlignment:(int)arg1;
+ (void)configureControl:(BRControl *)arg0 withFeedDictionary:(NSDictionary *)arg1 withMerchant:(ATVMerchant *)arg2;

@end
