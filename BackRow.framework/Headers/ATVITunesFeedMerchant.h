/* Runtime dump - ATVITunesFeedMerchant
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedMerchant.h>
@interface ATVITunesFeedMerchant : ATVFeedMerchant

- (void)decorateRequestProperties:(NSDictionary *)arg0;
- (void)startApplicationWithPreflightScript:(NSString *)arg0 completion:(id /* block */)arg1;
- (NSURL *)generateRequestForURL:(NSURL *)arg0 headers:(NSDictionary *)arg1 method:(NSString *)arg2 body:(id /* block */)arg3;

@end
