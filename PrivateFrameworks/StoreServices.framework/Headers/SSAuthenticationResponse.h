/* Runtime dump - SSAuthenticationResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthenticationResponse : NSObject
{
    NSDictionary * _responseDictionary;
    int _urlBagType;
    NSHTTPURLResponse * _urlResponse;
}

@property int URLBagType;
@property (readonly) NSDictionary * responseDictionary;
@property (readonly) NSHTTPURLResponse * URLResponse;
@property (readonly) NSString * accountName;
@property (readonly) int accountKind;
@property (readonly) NSNumber * accountUniqueIdentifier;
@property (readonly) int availableServiceTypes;
@property (readonly) NSString * creditsString;
@property (readonly) int enabledServiceTypes;
@property (readonly) char newCustomer;
@property (readonly) NSString * storeFrontIdentifier;
@property (readonly) NSString * token;
@property (readonly) NSNumber * failureType;
@property (readonly) int responseType;
@property (readonly) NSString * userMessage;

- (NSString *)storeFrontIdentifier;
- (NSHTTPURLResponse *)URLResponse;
- (void)dealloc;
- (NSString *)token;
- (NSString *)accountName;
- (int)availableServiceTypes;
- (NSString *)userMessage;
- (NSDictionary *)responseDictionary;
- (char)isNewCustomer;
- (int)enabledServiceTypes;
- (NSString *)creditsString;
- (int)accountKind;
- (int)URLBagType;
- (void)setURLBagType:(int)arg0;
- (SSAuthenticationResponse *)initWithURLResponse:(NSString *)arg0 dictionary:(NSDictionary *)arg1;
- (NSNumber *)newAccount;
- (NSNumber *)failureType;
- (NSString *)_valueForFirstAvailableKey:(NSString *)arg0;
- (NSNumber *)accountUniqueIdentifier;
- (int)_responseTypeForFailureType:(int)arg0;
- (int)_responseTypeForErrorNumber:(int)arg0;
- (int)_responseTypeForStatusValue:(int)arg0;
- (int)responseType;

@end
