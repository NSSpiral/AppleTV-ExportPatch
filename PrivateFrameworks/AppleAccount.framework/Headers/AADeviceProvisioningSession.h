/* Runtime dump - AADeviceProvisioningSession
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADeviceProvisioningSession : NSObject
{
    NSString * _dsid;
    unsigned long long _dsidNumber;
    struct OpaqueCFHTTPCookieStorage * _cookieStorageRef;
}

- (AADeviceProvisioningSession *)init;
- (void).cxx_destruct;
- (void)addProvisioningInfoToAARequest:(NSURLRequest *)arg0;
- (void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage *)arg0;
- (long)synchronizeProvisioningWithData:(NSData *)arg0;
- (long)eraseProvisioning;
- (void)addProvisioningInfoToAARequest:(NSURLRequest *)arg0 withFallback:(char)arg1;
- (NSDictionary *)deviceProvisioningInfo;
- (void)addProvisioningInfoToURLRequest:(NSURLRequest *)arg0;
- (long)provisionDeviceWithData:(NSData *)arg0;
- (AADeviceProvisioningSession *)initWithAccount:(ACAccount *)arg0;
- (AADeviceProvisioningSession *)initWithDSID:(id)arg0;

@end
