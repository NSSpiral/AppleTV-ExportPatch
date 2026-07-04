/* Runtime dump - MCKeyValue
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCKeyValue : NSObject
{
    NSString * _key;
    id _value;
    unsigned int _valueType;
}

@property (readonly, nonatomic) NSString * key;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) unsigned int valueType;

- (NSString *)key;
- (void *)value;
- (void).cxx_destruct;
- (MCKeyValue *)initWithLocalizedString:(NSString *)arg0 localizedKey:(NSString *)arg1;
- (MCKeyValue *)initWithData:(NSData *)arg0 localizedKey:(NSString *)arg1;
- (MCKeyValue *)initWithDate:(NSDate *)arg0 localizedKey:(NSString *)arg1;
- (MCKeyValue *)initWithLocalizedArray:(NSArray *)arg0 localizedKey:(NSString *)arg1;
- (void)setDate:(NSDate *)arg0 localizedKey:(NSString *)arg1;
- (void)setLocalizedArray:(NSArray *)arg0 localizedKey:(NSString *)arg1;
- (void)setLocalizedString:(NSString *)arg0 localizedKey:(NSString *)arg1;
- (MCKeyValue *)initWithValue:(NSValue *)arg0 localizedKey:(NSString *)arg1;
- (void)setData:(NSData *)arg0 localizedKey:(NSString *)arg1;
- (void)setValue:(NSObject *)arg0 localizedKey:(NSString *)arg1;
- (unsigned int)valueType;

@end
