/* Runtime dump - BBContent
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBContent : NSObject <NSCopying, NSSecureCoding>
{
    NSString * _title;
    NSString * _subtitle;
    NSString * _message;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * subtitle;
@property (copy, nonatomic) NSString * message;

+ (char)supportsSecureCoding;
+ (NSString *)contentWithTitle:(NSString *)arg0 subtitle:(NSString *)arg1 message:(NSString *)arg2;

- (void)dealloc;
- (BBContent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (BBContent *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)message;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (void)setMessage:(NSString *)arg0;
- (char)isEqualToContent:(NSObject *)arg0;

@end
