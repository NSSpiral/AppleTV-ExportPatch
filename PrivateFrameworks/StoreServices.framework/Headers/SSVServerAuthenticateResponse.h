/* Runtime dump - SSVServerAuthenticateResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVServerAuthenticateResponse : NSObject <SSXPCCoding>
{
    NSNumber * _authenticatedAccountIdentifier;
    int _performedButtonIndex;
    NSURL * _redirectURL;
    int _selectedButtonIndex;
}

@property (copy, nonatomic) NSNumber * authenticatedAccountIdentifier;
@property (nonatomic) int performedButtonIndex;
@property (copy, nonatomic) NSURL * redirectURL;
@property (nonatomic) int selectedButtonIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSVServerAuthenticateResponse *)initWithXPCEncoding:(NSString *)arg0;
- (void).cxx_destruct;
- (NSNumber *)authenticatedAccountIdentifier;
- (void)setAuthenticatedAccountIdentifier:(NSNumber *)arg0;
- (int)performedButtonIndex;
- (void)setPerformedButtonIndex:(int)arg0;
- (NSURL *)redirectURL;
- (void)setRedirectURL:(NSURL *)arg0;
- (int)selectedButtonIndex;
- (void)setSelectedButtonIndex:(int)arg0;

@end
