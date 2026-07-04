/* Runtime dump - ATVAppControlConfigurationFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVAppControlConfigurationFactory : NSObject

+ (ATVAppControlConfigurationFactory *)sharedInstance;

- (NSObject *)carouselConfigurationForViewElement:(NSObject *)arg0;
- (NSObject *)documentHeaderConfigurationForViewElement:(NSObject *)arg0;
- (NSObject *)lockupConfigurationForViewElement:(NSObject *)arg0;
- (NSObject *)headerConfigurationForViewElement:(NSObject *)arg0;
- (NSObject *)listItemLockupConfigurationForViewElement:(NSObject *)arg0;
- (NSObject *)_computeConfigurationForViewElement:(NSObject *)arg0 key:(NSString *)arg1 evaluator:(CUIPSDGradientEvaluator *)arg2;
- (NSObject *)gridConfigurationForViewElement:(NSObject *)arg0;

@end
