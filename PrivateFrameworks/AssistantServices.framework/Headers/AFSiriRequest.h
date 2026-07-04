/* Runtime dump - AFSiriRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriRequest : NSObject <NSSecureCoding>
{
    NSString * _originatingAceID;
    NSUUID * _identifier;
}

+ (char)supportsSecureCoding;

- (AFSiriRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AFSiriRequest *)init;
- (NSString *)description;
- (NSString *)_identifier;
- (void).cxx_destruct;
- (NSString *)requestName;
- (NSObject *)_initWithOriginatingAceID:(NSString *)arg0;
- (NSString *)_originatingAceID;
- (NSObject *)_initWithOriginatingAceID:(NSString *)arg0 identifier:(NSUUID *)arg1;
- (NSDictionary *)_descriptionWithProperties:(NSDictionary *)arg0;
- (char)_makeAppFrontmost;

@end
