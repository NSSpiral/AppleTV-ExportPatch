/* Runtime dump - MKAppLaunchController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAppLaunchController : NSObject
{
    SSLookupRequest * _request;
    NSString * _webURLString;
    NSURL * webURL;
}

@property (retain, nonatomic) SSLookupRequest * storeRequest;
@property (retain, nonatomic) NSURL * webURL;

+ (void)launchAttributionURLs:(id)arg0 withAttributionApps:(id)arg1;
+ (void)launchAttributionURLs:(id)arg0 withAttributionApps:(id)arg1 completionHandler:(id /* block */)arg2;
+ (MKAppLaunchController *)sharedController;

- (SSLookupRequest *)storeRequest;
- (void)setStoreRequest:(SSLookupRequest *)arg0;
- (void)setWebURL:(NSURL *)arg0;
- (void)lookUpAppStoreURLForBundle:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (NSURL *)webURL;

@end
