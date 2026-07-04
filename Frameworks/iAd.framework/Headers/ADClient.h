/* Runtime dump - ADClient
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADClient : NSObject

+ (ADClient *)sharedClient;

- (void)lookupAdConversionDetails:(id)arg0;
- (void)addClientToSegments:(id)arg0 replaceExisting:(char)arg1;
- (void)determineAppInstallationAttributionWithCompletionHandler:(id /* block */)arg0;

@end
