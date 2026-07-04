/* Runtime dump - CABehavior
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CABehavior : NSObject <NSCoding, NSCopying>
{
    void * _attr;
    unsigned int _refcount;
    unsigned int _uid;
    void * _priv;
}

@property char enabled;
@property (copy) NSString * name;
@property (weak) id delegate;
@property (copy) NSDictionary * style;

+ (CABehavior *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (void)CAMLParserStartElement:(NSObject *)arg0;
+ (/* block */ id *)CA_setterForProperty:(struct _CAPropertyInfo *)arg0;
+ (/* block */ id *)CA_getterForProperty:(struct _CAPropertyInfo *)arg0;
+ (char)resolveInstanceMethod:(SEL)arg0;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;
+ (CABehavior *)behavior;

- (void)CAMLParser:(NSObject *)arg0 setValue:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (char)shouldArchiveValueForKey:(NSString *)arg0;
- (void)_setCARenderBehavior:(struct Behavior *)arg0;
- (CABehavior *)retain;
- (void)release;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (CABehavior *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (CABehavior *)init;
- (unsigned int)retainCount;
- (NSString *)debugDescription;
- (NSObject *)delegate;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (CABehavior *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)style;
- (NSString *)valueForKeyPath:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 forKeyPath:(NSString *)arg1;
- (void)setStyle:(NSDictionary *)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (char)allowsWeakReference;
- (char)retainWeakReference;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
