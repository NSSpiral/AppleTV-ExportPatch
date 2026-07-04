/* Runtime dump - ATVMerchant_ITMS
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMerchant.h>

@protocol ATVJSContextProvider;

@class ATVJSContext, ATVVendorBag, BRAccountType;
@interface ATVMerchant_ITMS : ATVMerchant <ATVJSContextProvider>
{
    ATVJSContext * _javaScriptContext;
    char _installingResources;
    double _resourceInstallationTime;
}

@property (nonatomic) char installingResources;
@property (nonatomic) double resourceInstallationTime;
@property (readonly, retain) ATVJSContext * javaScriptContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)decorateRequestProperties:(NSDictionary *)arg0;
- (NSURL *)generateRequestForURL:(NSURL *)arg0 headers:(NSDictionary *)arg1 method:(NSString *)arg2 body:(id /* block */)arg3;
- (NSArray *)appDefinitions;
- (id)feedResourceNamed:(NSString *)arg0;
- (void)_installJavascriptWithConfiguration:(int)arg0 completionHandler:(id /* block */)arg1;
- (char)updateWithVendorBag:(ATVVendorBag *)arg0;
- (void)_installBootstrapResources;
- (char)installingResources;
- (void)setInstallingResources:(char)arg0;
- (void)setResourceInstallationTime:(double)arg0;
- (double)resourceInstallationTime;
- (char)hasAffinityToURL:(NSURL *)arg0;
- (void)dealloc;
- (NSString *)identifier;
- (char)enabled;
- (ATVJSContext *)javaScriptContext;
- (BRAccountType *)accountType;

@end
