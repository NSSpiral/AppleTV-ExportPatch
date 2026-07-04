/* Runtime dump - AFSiriContext
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriContext : NSObject <NSSecureCoding>
{
    NSArray * _modelObjects;
}

+ (char)supportsSecureCoding;

- (AFSiriContext *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSArray *)modelObjects;
- (void).cxx_destruct;
- (id)_aceValue;
- (AFSiriContext *)initWithModelObjects:(NSArray *)arg0;

@end
