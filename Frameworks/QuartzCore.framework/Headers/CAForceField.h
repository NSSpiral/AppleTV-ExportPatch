/* Runtime dump - CAForceField
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    NSString * _name;
    CALayer * _layer;
    CAValueFunction * _function;
    char _enabled;
    void * _priv;
}

@property (copy) NSString * name;
@property char enabled;
@property (retain) CALayer * layer;
@property (retain) CAValueFunction * function;

+ (CAForceField *)defaultValueForKey:(NSString *)arg0;
+ (void)CAMLParserStartElement:(NSObject *)arg0;
+ (CAForceField *)forceField;

- (void)CAMLParser:(NSObject *)arg0 setValue:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (struct Object *)CA_copyRenderValue;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (CAForceField *)initWithCoder:(NSCoder *)arg0;
- (CALayer *)layer;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CAForceField *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (CAForceField *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLayer:(CALayer *)arg0;
- (NSString *)valueForKeyPath:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 forKeyPath:(NSString *)arg1;
- (CAForceField *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)setFunction:(CAValueFunction *)arg0;
- (CAValueFunction *)function;

@end
