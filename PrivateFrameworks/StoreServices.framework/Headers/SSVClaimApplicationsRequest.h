/* Runtime dump - SSVClaimApplicationsRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVClaimApplicationsRequest : SSRequest <SSXPCCoding>
{
    int _claimStyle;
}

@property (readonly, nonatomic) int claimStyle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSVClaimApplicationsRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)startWithResponseBlock:(id /* block */)arg0;
- (SSVClaimApplicationsRequest *)initWithClaimStyle:(int)arg0;
- (int)claimStyle;

@end
