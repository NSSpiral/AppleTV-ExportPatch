/* Runtime dump - HMDCharacteristicResponse
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicResponse : NSObject
{
    HMDCharacteristicRequest * _request;
    id _value;
    NSError * _error;
}

@property (readonly, nonatomic) HMDCharacteristicRequest * request;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSError * error;

+ (NSURLRequest *)responseWithRequest:(HMDCharacteristicRequest *)arg0 error:(NSError *)arg1;

- (HMDCharacteristicRequest *)request;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void).cxx_destruct;
- (NSError *)error;
- (HMDCharacteristicResponse *)initWithRequest:(HMDCharacteristicRequest *)arg0 error:(NSError *)arg1;

@end
