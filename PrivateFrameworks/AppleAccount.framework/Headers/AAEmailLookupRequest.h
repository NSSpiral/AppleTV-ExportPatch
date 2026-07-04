/* Runtime dump - AAEmailLookupRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAEmailLookupRequest : AARequest
{
    ACAccount * _account;
    NSArray * _emailAddresses;
}

@property (retain, nonatomic) ACAccount * account;
@property (retain, nonatomic) NSArray * emailAddresses;

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (NSObject *)urlCredential;
- (AAEmailLookupRequest *)initWithAccount:(ACAccount *)arg0 emailAddresses:(NSArray *)arg1;
- (AAEmailLookupRequest *)initWithURLString:(NSString *)arg0 account:(ACAccount *)arg1 emailAddresses:(NSArray *)arg2;
- (ACAccount *)account;
- (void)setAccount:(ACAccount *)arg0;
- (NSArray *)emailAddresses;
- (void)setEmailAddresses:(NSArray *)arg0;
- (NSURLRequest *)urlRequest;

@end
