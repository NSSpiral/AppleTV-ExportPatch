/* Runtime dump - MSCriterion
 * Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSCriterion : NSObject <NSSecureCoding>
{
    NSString * _type;
    NSString * _qualifier;
    <NSObject> * _criteria;
}

+ (char)supportsSecureCoding;

- (<NSObject> *)criteria;
- (void)dealloc;
- (MSCriterion *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MSCriterion *)init;
- (NSString *)description;
- (NSString *)type;
- (MSCriterion *)initWithCriteria:(<NSObject> *)arg0 allRequired:(char)arg1;
- (NSObject *)_initWithType:(NSString *)arg0 qualifier:(NSString *)arg1 criteria:(<NSObject> *)arg2;
- (MSCriterion *)initWithType:(NSString *)arg0 qualifier:(NSString *)arg1 expression:(NSObject *)arg2;
- (NSString *)qualifier;

@end
