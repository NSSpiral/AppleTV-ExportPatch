/* Runtime dump - CAFilter
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    unsigned int _type;
    NSString * _name;
    unsigned int _flags;
    void * _attr;
    void * _cache;
}

@property (readonly) NSString * type;
@property (copy) NSString * name;
@property char enabled;
@property char cachesInputImage;

+ (void)CAMLParserStartElement:(NSObject *)arg0;
+ (CAFilter *)filterTypes;
+ (CAFilter *)filterWithName:(NSString *)arg0;
+ (CAFilter *)filterWithType:(NSString *)arg0;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (void)CAMLParser:(NSObject *)arg0 setValue:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (struct Object *)CA_copyRenderValue;
- (char)cachesInputImage;
- (void)setDefaults;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (CAFilter *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)type;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (CAFilter *)copyWithZone:(struct _NSZone *)arg0;
- (CAFilter *)initWithType:(NSString *)arg0;
- (void)setCachesInputImage:(char)arg0;
- (char)enabled;
- (CAFilter *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (CAFilter *)initWithName:(NSString *)arg0;

@end
