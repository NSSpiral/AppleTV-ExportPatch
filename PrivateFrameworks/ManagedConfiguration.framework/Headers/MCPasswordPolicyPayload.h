/* Runtime dump - MCPasswordPolicyPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPasswordPolicyPayload : MCPayload
{
    NSNumber * _isSimplePasscodeAllowed;
    NSNumber * _isPasscodeRequired;
    NSNumber * _isAlphanumericPasscodeRequired;
    NSNumber * _isManualFetchingWhenRoaming;
    NSNumber * _minLength;
    NSNumber * _maxFailedAttempts;
    NSNumber * _maxGracePeriodMinutes;
    NSNumber * _maxInactivityMinutes;
    NSNumber * _maxPasscodeAgeDays;
    NSNumber * _passcodeHistoryCount;
    NSNumber * _minComplexCharacters;
}

@property (readonly, retain, nonatomic) NSNumber * isSimplePasscodeAllowed;
@property (readonly, retain, nonatomic) NSNumber * isPasscodeRequired;
@property (readonly, retain, nonatomic) NSNumber * isAlphanumericPasscodeRequired;
@property (readonly, retain, nonatomic) NSNumber * isManualFetchingWhenRoaming;
@property (readonly, retain, nonatomic) NSNumber * minLength;
@property (readonly, retain, nonatomic) NSNumber * maxFailedAttempts;
@property (readonly, retain, nonatomic) NSNumber * maxGracePeriodMinutes;
@property (readonly, retain, nonatomic) NSNumber * maxInactivityMinutes;
@property (readonly, retain, nonatomic) NSNumber * maxPasscodeAgeDays;
@property (readonly, retain, nonatomic) NSNumber * passcodeHistoryCount;
@property (readonly, retain, nonatomic) NSNumber * minComplexCharacters;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)title;
- (void).cxx_destruct;
- (NSNumber *)minLength;
- (NSArray *)restrictions;
- (MCPasswordPolicyPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSNumber *)isSimplePasscodeAllowed;
- (NSNumber *)isAlphanumericPasscodeRequired;
- (NSNumber *)minComplexCharacters;
- (NSNumber *)isManualFetchingWhenRoaming;
- (NSNumber *)isPasscodeRequired;
- (NSNumber *)maxFailedAttempts;
- (NSNumber *)maxGracePeriodMinutes;
- (NSNumber *)maxInactivityMinutes;
- (NSNumber *)maxPasscodeAgeDays;
- (NSNumber *)passcodeHistoryCount;

@end
