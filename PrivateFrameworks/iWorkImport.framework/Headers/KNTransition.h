/* Runtime dump - KNTransition
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNTransition : TSPContainedObject <KNInspectableAnimation>
{
    KNTransitionAttributes * mAttributes;
}

@property (readonly, nonatomic) NSString * effect;
@property (readonly, nonatomic) char isMagicMove;
@property (copy, nonatomic) KNTransitionAttributes * attributes;
@property (readonly, nonatomic) KNAnimationInfo * animationInfo;
@property (readonly, nonatomic) NSArray * localizedEventTriggerNames;
@property (readonly, nonatomic) KNAnimationPluginMenu * directionMenu;
@property (readonly, nonatomic) unsigned int directionType;
@property (readonly, nonatomic) char supportsDirection;
@property (readonly, nonatomic) char supportsDuration;
@property (readonly, nonatomic) char supportsBounce;
@property (readonly, nonatomic) char supportsCustomEffectTimingCurve1;
@property (readonly, nonatomic) char supportsCustomEffectTimingCurve2;
@property (readonly, nonatomic) char supportsCustomEffectTimingCurve3;
@property (readonly, nonatomic) char hasAutomaticTrigger;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) unsigned int direction;
@property (readonly, nonatomic) char documentIsRTL;
@property (readonly, nonatomic) TSUColor * color;
@property (readonly, nonatomic) float customTwist;
@property (readonly, nonatomic) int customMosaicSize;
@property (readonly, nonatomic) int customMosaicType;
@property (readonly, nonatomic) char customBounce;
@property (readonly, nonatomic) char customMotionBlur;
@property (readonly, nonatomic) int customTimingCurve;
@property (readonly, nonatomic) int randomNumberSeed;
@property (readonly, nonatomic) TSDBezierPathSource * customEffectTimingCurve1;
@property (readonly, nonatomic) TSDBezierPathSource * customEffectTimingCurve2;
@property (readonly, nonatomic) TSDBezierPathSource * customEffectTimingCurve3;
@property (readonly, nonatomic) NSString * customEffectTimingCurveThemeName1;
@property (readonly, nonatomic) NSString * customEffectTimingCurveThemeName2;
@property (readonly, nonatomic) NSString * customEffectTimingCurveThemeName3;
@property (readonly, nonatomic) char customMagicMoveFadeUnmatchedObjects;
@property (readonly, nonatomic) int customTextDelivery;
@property (readonly, nonatomic) NSSet * inspectableAttributes;
@property (readonly, nonatomic) char canEditAnimations;

+ (unsigned int)directionTypeForEffect:(NSObject *)arg0;
+ (NSObject *)bindingMap;
+ (char)hasDirectionOptionForEffect:(NSObject *)arg0;
+ (NSString *)bindingKeyPathForAttributeKey:(NSString *)arg0;
+ (NSString *)attributeKeyForBindingKeyPath:(NSString *)arg0;

- (void)saveToArchive:(struct TransitionArchive *)arg0 archiver:(NSObject *)arg1;
- (char)isMagicMove;
- (char)documentIsRTL;
- (KNTransition *)initWithArchive:(struct TransitionArchive *)arg0 unarchiver:(struct TransitionArchive)arg1 owner:(NSObject *)arg2;
- (unsigned int)directionType;
- (char)canEditAnimations;
- (NSSet *)inspectableAttributes;
- (unsigned long long)p_keynoteVersionFromUnarchiver:(id)arg0;
- (char)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)arg0;
- (char)supportsDirection;
- (char)supportsDuration;
- (char)supportsRandomNumberSeed;
- (char)supportsCustomEffectTimingCurve3;
- (char)supportsCustomEffectTimingCurve2;
- (char)supportsCustomEffectTimingCurve1;
- (int)customTextDelivery;
- (KNAnimationPluginMenu *)directionMenu;
- (char)supportsBounce;
- (char)customBounce;
- (char)customMotionBlur;
- (int)randomNumberSeed;
- (TSDBezierPathSource *)customEffectTimingCurve1;
- (TSDBezierPathSource *)customEffectTimingCurve2;
- (TSDBezierPathSource *)customEffectTimingCurve3;
- (NSString *)customEffectTimingCurveThemeName1;
- (NSString *)customEffectTimingCurveThemeName2;
- (NSString *)customEffectTimingCurveThemeName3;
- (KNTransition *)initWithOwner:(NSObject *)arg0 attributes:(KNTransitionAttributes *)arg1;
- (char)hasAutomaticTrigger;
- (char)supportsTimingCurves;
- (NSArray *)localizedEventTriggerNames;
- (float)customTwist;
- (int)customMosaicSize;
- (int)customMosaicType;
- (int)customTimingCurve;
- (char)customMagicMoveFadeUnmatchedObjects;
- (KNTransition *)initWithOwner:(TSPObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (double)duration;
- (double)delay;
- (KNTransition *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)direction;
- (TSUColor *)color;
- (NSString *)effect;
- (KNTransitionAttributes *)attributes;
- (void)setAttributes:(KNTransitionAttributes *)arg0;
- (KNAnimationInfo *)animationInfo;

@end
