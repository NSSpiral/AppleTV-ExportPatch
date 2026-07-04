/* Runtime dump - CASpring
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    NSString * _name;
    CALayer * _layerA;
    CALayer * _layerB;
    struct CGPoint _attachmentPointA;
    struct CGPoint _attachmentPointB;
    CAValueFunction * _function;
    float _stiffness;
    float _damping;
    float _restLength;
    char _enabled;
    id _delegate;
    void * _priv;
}

@property (copy) NSString * name;
@property char enabled;
@property (retain) CALayer * layerA;
@property (retain) CALayer * layerB;
@property struct CGPoint attachmentPointA;
@property struct CGPoint attachmentPointB;
@property (retain) CAValueFunction * function;
@property float restLength;
@property float stiffness;
@property float damping;
@property (weak) id delegate;

+ (CASpring *)defaultValueForKey:(NSString *)arg0;
+ (void)CAMLParserStartElement:(NSObject *)arg0;
+ (CASpring *)spring;

- (void)CAMLParser:(NSObject *)arg0 setValue:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (struct Object *)CA_copyRenderValue;
- (float)stiffness;
- (CALayer *)layerA;
- (CALayer *)layerB;
- (struct CGPoint)attachmentPointA;
- (struct CGPoint)attachmentPointB;
- (float)restLength;
- (void)setRestLength:(float)arg0;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (CASpring *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (CASpring *)init;
- (NSObject *)delegate;
- (void)setStiffness:(float)arg0;
- (void)setDamping:(float)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (CASpring *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)valueForKeyPath:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 forKeyPath:(NSString *)arg1;
- (float)damping;
- (void).cxx_construct;
- (CASpring *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)setLayerA:(CALayer *)arg0;
- (void)setAttachmentPointA:(struct CGPoint)arg0;
- (void)setLayerB:(CALayer *)arg0;
- (void)setAttachmentPointB:(struct CGPoint)arg0;
- (void)setFunction:(CAValueFunction *)arg0;
- (CAValueFunction *)function;

@end
