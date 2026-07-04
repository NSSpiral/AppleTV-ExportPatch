/* Runtime dump - SSAuthenticateResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthenticateResponse : NSObject <SSXPCCoding>
{
    SSAccount * _authenticatedAccount;
    NSError * _error;
    NSDictionary * _responseDictionary;
    int _responseType;
}

@property (retain, nonatomic) SSAccount * authenticatedAccount;
@property (nonatomic) int authenticateResponseType;
@property (readonly, nonatomic) NSError * error;
@property (copy, nonatomic) NSDictionary * responseDictionary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (int)authenticateResponseType;
- (NSDictionary *)copyXPCEncoding;
- (SSAuthenticateResponse *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSAccount *)authenticatedAccount;
- (NSError *)error;
- (void)_setError:(NSError *)arg0;
- (NSDictionary *)responseDictionary;
- (void)setAuthenticatedAccount:(SSAccount *)arg0;
- (void)setAuthenticateResponseType:(int)arg0;
- (void)setResponseDictionary:(NSDictionary *)arg0;

@end
