/* Runtime dump - AARegisterDeviceRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AARegisterDeviceRequest : AARequest
{
    ACAccount * _account;
    NSDictionary * _deviceProperties;
}

- (NSString *)urlString;
- (void).cxx_destruct;
- (AARegisterDeviceRequest *)initWithAccount:(ACAccount *)arg0 deviceProperties:(NSDictionary *)arg1;
- (NSURLRequest *)urlRequest;

@end
