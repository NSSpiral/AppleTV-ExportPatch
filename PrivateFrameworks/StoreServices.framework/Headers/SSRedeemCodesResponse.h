/* Runtime dump - SSRedeemCodesResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding>
{
    NSDictionary * _errors;
    NSDictionary * _redeemedCodes;
}

@property (readonly, nonatomic) NSArray * failedCodes;
@property (readonly, copy, nonatomic) NSArray * redeemedCodes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSRedeemCodesResponse *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (NSDictionary *)dictionaryForCode:(id)arg0;
- (id)errorForCode:(id)arg0;
- (NSArray *)failedCodes;
- (NSArray *)redeemedCodes;
- (void)setFailedCodes:(NSArray *)arg0;
- (void)setRedeemedCodes:(NSArray *)arg0;

@end
