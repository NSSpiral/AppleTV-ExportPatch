/* Runtime dump - AADeviceProvisioningRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADeviceProvisioningRequest : AARequest
{
    NSString * _dsid;
    NSString * _url;
    NSData * _data;
}

- (NSString *)urlString;
- (void).cxx_destruct;
- (AADeviceProvisioningRequest *)initWithDSID:(id)arg0 URLString:(NSString *)arg1 requestData:(NSData *)arg2;
- (NSURLRequest *)urlRequest;

@end
