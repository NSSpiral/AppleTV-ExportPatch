/* Runtime dump - AALoginPluginManager
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AALoginPluginManager : NSObject
{
    NSArray * _plugins;
    char _shouldStashLoginResponse;
    char _hasStashedLoginResponse;
    NSObject<OS_dispatch_queue> * _pluginNotificationQueue;
    <AASetupAssistantDelegateService> * _idsPlugin;
    char _shouldSkipiTunesPlugin;
}

@property (nonatomic) char shouldSkipiTunesPlugin;
@property (nonatomic) char shouldStashLoginResponse;

+ (AALoginPluginManager *)sharedInstance;

- (AALoginPluginManager *)init;
- (void).cxx_destruct;
- (void)_loadPlugins;
- (char)_notifyServicesOfLoginResponse:(NSURLResponse *)arg0 forAppleID:(NSObject *)arg1 password:(NSString *)arg2;
- (void)_stashServiceTokensFromResponse:(NSURLResponse *)arg0;
- (NSURLRequest *)collectParametersForLoginRequest;
- (NSURLRequest *)collectParametersForIdentityEstablishmentRequest;
- (void)notifyServicesOfLoginResponse:(NSURLResponse *)arg0 forAppleID:(NSObject *)arg1 password:(NSString *)arg2 completion:(id /* block */)arg3;
- (char)shouldStashLoginResponse;
- (void)setShouldStashLoginResponse:(char)arg0;
- (void)unstashLoginResponse;
- (char)shouldSkipiTunesPlugin;
- (void)setShouldSkipiTunesPlugin:(char)arg0;

@end
