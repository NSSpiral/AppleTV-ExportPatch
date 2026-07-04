/* Runtime dump - CAAnimation
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction>
{
    void * _attr;
    unsigned int _flags;
}

@property (nonatomic) int animationID;
@property (copy, nonatomic) id completionBlock;
@property char usesSceneTimeBase;
@property float fadeInDuration;
@property float fadeOutDuration;
@property (retain, nonatomic) NSArray * animationEvents;
@property int _mapkit_ID;
@property (weak) CAStateControllerTransition * CAStateControllerTransition;
@property char enabled;
@property (copy) NSString * beginTimeMode;
@property double frameInterval;
@property (retain) CAMediaTimingFunction * timingFunction;
@property (retain) id delegate;
@property char removedOnCompletion;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property char autoreverses;
@property (copy) NSString * fillMode;

+ (NSArray *)TSD_supportedKeyPaths;
+ (CAAnimation *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (void)CAMLParserStartElement:(NSObject *)arg0;
+ (char)CA_encodesPropertyConditionally:(unsigned int)arg0 type:(int)arg1;
+ (/* block */ id *)CA_setterForProperty:(struct _CAPropertyInfo *)arg0;
+ (/* block */ id *)CA_getterForProperty:(struct _CAPropertyInfo *)arg0;
+ (char)resolveInstanceMethod:(SEL)arg0;
+ (CAAnimation *)animation;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;
+ (NSDictionary *)properties;

- (NSString *)TSD_valueForKeyPath:(NSString *)arg0 atTime:(double)arg1 animationCache:(NSObject *)arg2;
- (id)TSD_valueAtTime:(double)arg0 initialValue:(long long)arg1;
- (NSCache *)TSDCAAnimationContextCache;
- (void)p_getValue:(id *)arg0 animationPercent:(double *)arg1 atTime:(double)arg2 initialValue:(long long)arg3 contextCache:(NSObject *)arg4;
- (NSString *)TSD_valueForKeyPath:(NSString *)arg0 atTime:(double)arg1;
- (id)p_valueAtTime:(double)arg0 initialValue:(long long)arg1 contextCache:(NSObject *)arg2;
- (double)p_animationPercentByApplyingTimingFunctionForKeyPath:(NSString *)arg0 atTime:(double)arg1 contextCache:(NSObject *)arg2;
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(NSString *)arg0 atTime:(double)arg1;
- (char)TSD_containsAnimationForKeyPath:(NSString *)arg0;
- (NSString *)TSD_animationForKeyPath:(NSString *)arg0 atTime:(double)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setAnimationID:(int)arg0;
- (void)performCompletionBlock:(char)arg0;
- (int)animationID;
- (void)setUsesSceneTimeBase:(char)arg0;
- (char)usesSceneTimeBase;
- (void)setCommitsOnCompletion:(char)arg0;
- (char)commitsOnCompletion;
- (void)setAnimationEvents:(NSArray *)arg0;
- (NSArray *)animationEvents;
- (float)fadeOutDuration;
- (void)setFadeInDuration:(float)arg0;
- (void)setFadeOutDuration:(float)arg0;
- (float)fadeInDuration;
- (void)set_mapkit_ID:(int)arg0;
- (int)_mapkit_ID;
- (void)CAMLParser:(NSObject *)arg0 setValue:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (struct Object *)CA_copyRenderValue;
- (char)_setCARenderAnimation:(struct Animation *)arg0 layer:(CALayer *)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg0;
- (char)shouldArchiveValueForKey:(NSString *)arg0;
- (char)removedOnCompletion;
- (void)setDefaultDuration:(double)arg0;
- (NSString *)beginTimeMode;
- (void)setRepeatDuration:(double)arg0;
- (double)repeatDuration;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (CAAnimation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (NSString *)debugDescription;
- (NSObject *)delegate;
- (void)setSpeed:(float)arg0;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (CAAnimation *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)valueForKeyPath:(NSString *)arg0;
- (void)runActionForKey:(NSString *)arg0 object:(NSObject *)arg1 arguments:(NSDictionary *)arg2;
- (float)repeatCount;
- (void)setFrameInterval:(double)arg0;
- (void)setFillMode:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 forKeyPath:(NSString *)arg1;
- (void)setTimingFunction:(CAMediaTimingFunction *)arg0;
- (void)setBeginTime:(double)arg0;
- (void)setBeginTimeMode:(NSString *)arg0;
- (void)setRepeatCount:(float)arg0;
- (void)setAutoreverses:(char)arg0;
- (double)beginTime;
- (float)speed;
- (double)timeOffset;
- (CAMediaTimingFunction *)timingFunction;
- (void)setRemovedOnCompletion:(char)arg0;
- (double)frameInterval;
- (void)setTimeOffset:(double)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (CAAnimation *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)applyForTime:(double)arg0 presentationObject:(NSObject *)arg1 modelObject:(NSObject *)arg2;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;
- (char)autoreverses;
- (NSString *)fillMode;
- (char)isRemovedOnCompletion;

@end
