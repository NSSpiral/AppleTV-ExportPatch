/* Runtime dump - ATVSedonaMerchant
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedMerchant.h>

@class BRAccountType, BRController;
@interface ATVSedonaMerchant : ATVFeedMerchant
{
    id _startApplicationCompletionHandler;
}

+ (void)initialize;

- (void)decorateRequestProperties:(NSDictionary *)arg0;
- (void)startApplicationWithPreflightScript:(NSString *)arg0 completion:(id /* block */)arg1;
- (NSURL *)generateRequestForURL:(NSURL *)arg0 headers:(NSDictionary *)arg1 method:(NSString *)arg2 body:(id /* block */)arg3;
- (void)stopApplication;
- (NSError *)merchantErrorForError:(NSError *)arg0;
- (void)_vendorOutOfDateSoftware:(id)arg0;
- (void)_vendorInvalidCredentials:(id)arg0;
- (void)_respondToSDKNotifications:(id)arg0;
- (void)_libraryStartFinished:(id)arg0;
- (void)_appWillExit:(id)arg0;
- (char)_initializeNetflixLibrary;
- (char)_ignoreNetflixAuthNotifications;
- (void)dealloc;
- (NSString *)localizedStringForKey:(NSString *)arg0;
- (ATVSedonaMerchant *)initWithIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (BRAccountType *)accountType;
- (BRController *)rootController;

@end
