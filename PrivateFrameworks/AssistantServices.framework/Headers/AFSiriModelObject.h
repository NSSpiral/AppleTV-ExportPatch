/* Runtime dump - AFSiriModelObject
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriModelObject : NSObject <NSSecureCoding>
{
    NSString * _identifier;
}

+ (char)supportsSecureCoding;

- (AFSiriModelObject *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (id)_aceContextObjectValue;
- (Class)_aceCollectionClass;

@end
