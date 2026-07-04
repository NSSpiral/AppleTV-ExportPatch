/* Runtime dump - AFSetting
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSetting : AFSiriModelObject
{
    int _type;
    id _value;
}

@property (nonatomic) int type;
@property (retain, nonatomic) id value;

+ (char)supportsSecureCoding;

- (AFSetting *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void).cxx_destruct;

@end
