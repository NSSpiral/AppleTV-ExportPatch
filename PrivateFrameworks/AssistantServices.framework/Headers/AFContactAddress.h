/* Runtime dump - AFContactAddress
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFContactAddress : AFSiriModelObject
{
    int _type;
    NSString * _stringValue;
}

+ (char)supportsSecureCoding;

- (AFContactAddress *)initWithStringValue:(NSString *)arg0;
- (AFContactAddress *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (int)type;
- (NSString *)stringValue;
- (void).cxx_destruct;
- (AFContactAddress *)initWithType:(int)arg0 stringValue:(NSString *)arg1;
- (id)_aceContextObjectValue;

@end
