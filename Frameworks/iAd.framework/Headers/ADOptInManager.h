/* Runtime dump - ADOptInManager
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADOptInManager : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate>
{
    ADAdSheetConnection * _connection;
}

@property (retain, nonatomic) ADAdSheetConnection * connection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ADOptInManager *)sharedManager;

- (ADOptInManager *)init;
- (ADAdSheetConnection *)connection;
- (void)setConnection:(ADAdSheetConnection *)arg0;
- (char)shouldLaunchAdSheet;
- (NSDictionary *)additionalAdSheetLaunchOptions;
- (NSString *)adSheetMachServiceName;
- (void)configureConnection:(NSXPCConnection *)arg0;
- (void)setOptInStatus:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)refreshOptInStatus;
- (void)refreshOptInStatusRefreshingWeakToken:(char)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)handleAccountChange;
- (void)getiAdIDsWithCompletionHandler:(id /* block */)arg0;

@end
