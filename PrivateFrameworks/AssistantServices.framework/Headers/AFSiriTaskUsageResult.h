/* Runtime dump - AFSiriTaskUsageResult
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskUsageResult : NSObject <NSSecureCoding>
{
    NSString * _originatingAceID;
}

+ (char)supportsSecureCoding;

- (AFSiriTaskUsageResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)_initWithOriginatingAceID:(NSString *)arg0;
- (NSString *)_originatingAceID;
- (NSString *)_resultDescription;

@end
