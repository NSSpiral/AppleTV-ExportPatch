/* Runtime dump - ACDataclassAction
 * Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACDataclassAction : NSObject <NSSecureCoding>
{
    char _isDestructive;
    int _type;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) char isDestructive;

+ (NSObject *)destructiveActionWithType:(int)arg0;
+ (char)supportsSecureCoding;
+ (NSObject *)actionWithType:(int)arg0;

- (ACDataclassAction *)initWithType:(int)arg0 destructivity:(char)arg1;
- (ACDataclassAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)type;
- (char)isDestructive;

@end
