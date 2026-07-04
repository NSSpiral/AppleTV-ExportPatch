/* Runtime dump - AAUnregisterDeviceRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAUnregisterDeviceRequest : AARequest
{
    ACAccount * _account;
    NSDictionary * _deviceProperties;
}

- (NSString *)urlString;
- (void).cxx_destruct;
- (AAUnregisterDeviceRequest *)initWithAccount:(ACAccount *)arg0 deviceProperties:(NSDictionary *)arg1;
- (NSURLRequest *)urlRequest;

@end
