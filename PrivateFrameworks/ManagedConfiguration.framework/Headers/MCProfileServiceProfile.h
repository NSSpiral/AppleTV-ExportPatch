/* Runtime dump - MCProfileServiceProfile
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCProfileServiceProfile : MCProfile
{
    NSString * _URLString;
    NSArray * _deviceAttributes;
    id _challenge;
    NSData * _enrollmentIdentityPersistentID;
    char _confirmInstallation;
    NSArray * _bogusPayloads;
}

@property (retain, nonatomic) NSString * URLString;
@property (retain, nonatomic) NSData * enrollmentIdentityPersistentID;
@property (readonly, retain, nonatomic) NSArray * deviceAttributes;
@property (readonly, retain, nonatomic) id challenge;
@property (readonly, nonatomic) char confirmInstallation;

- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)URLString;
- (void)setURLString:(NSString *)arg0;
- (NSDictionary *)stubDictionary;
- (NSArray *)payloads;
- (MCProfileServiceProfile *)initWithDictionary:(NSDictionary *)arg0 allowEmptyPayload:(char)arg1 outError:(id *)arg2;
- (NSArray *)managedPayloads;
- (NSArray *)localizedPayloadSummaryByType;
- (NSArray *)localizedManagedPayloadSummaryByType;
- (NSString *)_badDataTypeErrorWithFieldName:(NSString *)arg0;
- (NSString *)_unsupportedValueErrorWithFieldName:(NSString *)arg0 value:(NSObject *)arg1;
- (NSArray *)deviceAttributes;
- (NSData *)enrollmentIdentityPersistentID;
- (void)setEnrollmentIdentityPersistentID:(NSData *)arg0;
- (char)confirmInstallation;
- (ISAuthenticationChallenge *)challenge;

@end
