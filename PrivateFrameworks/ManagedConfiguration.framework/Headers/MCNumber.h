/* Runtime dump - MCNumber
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCNumber : NSObject <NSSecureCoding>
{
    NSNumber * _number;
}

@property (retain, nonatomic) NSNumber * number;

+ (MCNumber *)numberWithInt:(int)arg0;
+ (MCNumber *)numberWithInteger:(int)arg0;
+ (MCNumber *)numberWithUnsignedInteger:(unsigned int)arg0;
+ (MCNumber *)numberWithUnsignedInt:(unsigned int)arg0;
+ (char)supportsSecureCoding;

- (MCNumber *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MCNumber *)initWithInt:(int)arg0;
- (void).cxx_destruct;
- (MCNumber *)initWithInteger:(int)arg0;
- (MCNumber *)initWithUnsignedInteger:(unsigned int)arg0;
- (void)setNumber:(NSNumber *)arg0;
- (NSNumber *)number;
- (NSLocale *)descriptionWithLocale:(NSObject *)arg0;
- (MCNumber *)initWithUnsignedInt:(unsigned int)arg0;

@end
