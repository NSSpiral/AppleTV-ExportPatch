/* Runtime dump - CAEmitterBehavior
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAEmitterBehavior : NSObject <NSCoding>
{
    unsigned int _type;
    NSString * _name;
    void * _attr;
    void * _cache;
    unsigned int _flags;
}

@property (readonly) NSString * type;
@property (copy) NSString * name;
@property char enabled;

+ (void)CAMLParserStartElement:(NSObject *)arg0;
+ (NSObject *)behaviorWithType:(NSString *)arg0;
+ (NSArray *)behaviorTypes;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (void)CAMLParser:(NSObject *)arg0 setValue:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (struct Object *)CA_copyRenderValue;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (CAEmitterBehavior *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)type;
- (void)didChangeValueForKey:(NSString *)arg0;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (CAEmitterBehavior *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)valueForKeyPath:(NSString *)arg0;
- (CAEmitterBehavior *)initWithType:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 forKeyPath:(NSString *)arg1;
- (CAEmitterBehavior *)mutableCopyWithZone:(struct _NSZone *)arg0;

@end
