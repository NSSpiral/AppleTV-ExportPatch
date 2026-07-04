/* Runtime dump - AFPersonContactHandle
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFPersonContactHandle : NSObject <NSSecureCoding>
{
    NSString * _handle;
    NSString * _label;
    unsigned int _type;
}

@property (copy, nonatomic) NSString * handle;
@property (copy, nonatomic) NSString * label;
@property (nonatomic) unsigned int type;

+ (char)supportsSecureCoding;

- (AFPersonContactHandle *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(unsigned int)arg0;
- (unsigned int)type;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void).cxx_destruct;
- (char)isEqualToPersonContactHandle:(id)arg0;
- (NSString *)handle;
- (void)setHandle:(NSString *)arg0;

@end
