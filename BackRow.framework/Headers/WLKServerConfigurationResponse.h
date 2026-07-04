/* Runtime dump - WLKServerConfigurationResponse
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKServerConfigurationResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary * _responseDictionary;
    NSDate * _expirationDate;
    unsigned int _environmentHash;
}

@property (readonly, nonatomic) NSDictionary * responseDictionary;
@property (readonly, nonatomic) NSDate * expirationDate;
@property (readonly, nonatomic) unsigned int environmentHash;
@property (readonly, nonatomic) NSDictionary * endpointsDictionary;
@property (readonly, nonatomic) NSDictionary * requiredRequestKeyValuePairsDictionary;
@property (readonly, nonatomic) NSString * vppaStatusString;
@property (readonly, nonatomic) int vppaStatus;
@property (readonly, nonatomic) NSURL * playActivityURL;
@property (readonly, copy, nonatomic) NSString * utsk;
@property (readonly, nonatomic) char activeUser;
@property (readonly, copy, nonatomic) NSNumber * vppaSessionDurationInMillis;

+ (char)supportsSecureCoding;

- (NSURL *)playActivityURL;
- (NSDictionary *)endpointsDictionary;
- (NSDictionary *)requiredRequestKeyValuePairsDictionary;
- (unsigned int)environmentHash;
- (NSString *)utsk;
- (WLKServerConfigurationResponse *)initWithServerResponseDictionary:(NSDictionary *)arg0 expirationDate:(NSDate *)arg1 environmentHash:(unsigned int)arg2;
- (NSString *)vppaStatusString;
- (int)vppaStatus;
- (char)isActiveUser;
- (NSNumber *)vppaSessionDurationInMillis;
- (char)isValidIgnoringExpiration;
- (id)utsc;
- (WLKServerConfigurationResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (WLKServerConfigurationResponse *)initWithDictionary:(NSDictionary *)arg0;
- (char)isValid;
- (WLKServerConfigurationResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSDictionary *)responseDictionary;
- (NSDate *)expirationDate;

@end
