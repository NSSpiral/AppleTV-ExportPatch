/* Runtime dump - AAAvailabilityResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAvailabilityResponse : AAResponse
{
    NSString * _status;
    NSString * _eta;
    NSString * _feature;
}

@property (readonly, nonatomic) NSString * status;
@property (readonly, nonatomic) NSString * eta;
@property (readonly, nonatomic) NSString * feature;

- (void).cxx_destruct;
- (NSString *)status;
- (AAAvailabilityResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSString *)eta;
- (NSString *)feature;

@end
