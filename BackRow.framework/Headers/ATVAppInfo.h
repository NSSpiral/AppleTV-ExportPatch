/* Runtime dump - ATVAppInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol IKApplication;

@class BRMerchantInfo;
@interface ATVAppInfo : NSObject <IKApplication>
{
    BRMerchantInfo * _merchantInfo;
    NSURL * _rootURL;
    NSDictionary * _launchParams;
    NSString * _appIdentifier;
    IKAppDataStorage * _appLocalStorage;
    IKAppDataStorage * _appVendorStorage;
}

@property (retain, nonatomic) BRMerchantInfo * merchantInfo;
@property (retain, nonatomic) NSURL * rootURL;
@property (copy, nonatomic) NSDictionary * launchParams;
@property (retain, nonatomic) NSString * appIdentifier;
@property (retain, nonatomic) IKAppDataStorage * appLocalStorage;
@property (retain, nonatomic) IKAppDataStorage * appVendorStorage;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRMerchantInfo *)merchantInfo;
- (ATVAppInfo *)initWithExtrasLaunchURL:(NSURL *)arg0 launchParams:(NSDictionary *)arg1;
- (ATVAppInfo *)initWithMerchantInfo:(BRMerchantInfo *)arg0;
- (NSDictionary *)launchParams;
- (IKAppDataStorage *)appLocalStorage;
- (NSString *)_storagePathWithIdentifier:(NSString *)arg0;
- (void)setAppLocalStorage:(IKAppDataStorage *)arg0;
- (IKAppDataStorage *)appVendorStorage;
- (void)setAppVendorStorage:(IKAppDataStorage *)arg0;
- (void)setMerchantInfo:(BRMerchantInfo *)arg0;
- (void)setRootURL:(NSURL *)arg0;
- (void)setLaunchParams:(NSDictionary *)arg0;
- (NSString *)vendorIdentifier;
- (void).cxx_destruct;
- (NSURL *)rootURL;
- (void)setAppIdentifier:(NSString *)arg0;
- (NSString *)appIdentifier;
- (id /* <IKAppDataStoring> */)localStorage;
- (id /* <IKAppDataStoring> */)vendorStorage;
- (NSURL *)appJSURL;
- (char)shouldIgnoreJSValidation;
- (NSDictionary *)appLaunchParams;

@end
