/* Runtime dump - AFApplicationInfo
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFApplicationInfo : NSObject <NSSecureCoding>
{
    NSString * _identifier;
    int _pid;
}

@property (copy, nonatomic) NSString * identifier;
@property (nonatomic) int pid;

+ (char)supportsSecureCoding;

- (AFApplicationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (int)pid;
- (void)setPid:(int)arg0;

@end
