/* Runtime dump - MCSingleSignOnPayloadKerberosInfo
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCSingleSignOnPayloadKerberosInfo : NSObject
{
    NSString * _principalName;
    NSString * _realm;
    NSString * _certificateUUID;
    NSArray * _URLPrefixMatches;
    NSArray * _appIdentifierMatches;
    NSString * _accountGUID;
    NSString * _accountTypeGUID;
}

@property (retain, nonatomic) NSString * principalName;
@property (retain, nonatomic) NSString * realm;
@property (retain, nonatomic) NSString * certificateUUID;
@property (retain, nonatomic) NSArray * URLPrefixMatches;
@property (retain, nonatomic) NSArray * appIdentifierMatches;
@property (retain, nonatomic) NSString * accountGUID;
@property (retain, nonatomic) NSString * accountTypeGUID;

- (NSString *)description;
- (void).cxx_destruct;
- (MCSingleSignOnPayloadKerberosInfo *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)certificateUUID;
- (void)setCertificateUUID:(NSString *)arg0;
- (NSString *)principalName;
- (NSArray *)URLPrefixMatches;
- (NSArray *)appIdentifierMatches;
- (char)validateAppIdentifierMatch:(id)arg0 outError:(id *)arg1;
- (char)validateURLPrefixMatch:(id)arg0 outNormalizedString:(id *)arg1 outError:(id *)arg2;
- (NSString *)accountGUID;
- (NSString *)accountTypeGUID;
- (void)setPrincipalName:(NSString *)arg0;
- (void)setRealm:(NSString *)arg0;
- (void)setURLPrefixMatches:(id)arg0;
- (void)setAppIdentifierMatches:(NSArray *)arg0;
- (void)setAccountGUID:(NSString *)arg0;
- (void)setAccountTypeGUID:(NSString *)arg0;
- (NSString *)realm;

@end
