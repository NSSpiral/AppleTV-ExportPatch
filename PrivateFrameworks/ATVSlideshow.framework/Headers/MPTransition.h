/* Runtime dump - MPTransition
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPTransition : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary * _attributes;
    id _parent;
    NSString * _transitionID;
    NSString * _presetID;
    double _duration;
    char _isRandom;
    int _randomSeed;
}

@property (copy, nonatomic) NSString * transitionID;
@property (copy, nonatomic) NSString * presetID;
@property (nonatomic) double duration;

+ (MPTransition *)transitionWithTransitionID:(NSString *)arg0;

- (void)dealloc;
- (MPTransition *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPTransition *)init;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (MPTransition *)copyWithZone:(struct _NSZone *)arg0;
- (MPDocument *)parentDocument;
- (void)setTransitionAttributes:(NSDictionary *)arg0;
- (void)setTransitionID:(NSString *)arg0;
- (NSString *)transitionAttributeForKey:(NSString *)arg0;
- (NSDictionary *)transitionAttributes;
- (NSString *)transitionID;
- (NSDictionary *)_transitionAttributes;
- (void)copyVars:(id)arg0;
- (NSObject *)convertMPAttributeToMCAttribute:(NSObject *)arg0 withKey:(NSString *)arg1;
- (NSString *)fullDebugLog;
- (MPEffectContainer *)parentContainer;
- (NSString *)presetID;
- (void)setPresetID:(NSString *)arg0;
- (NSObject *)transitionPresetID;
- (void)setTransitionAttribute:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)applyFormattedAttributes;
- (NSDictionary *)formattedAttributes;
- (int)randomSeed;
- (void)setRandomSeed:(int)arg0;
- (MPTransition *)initWithTransitionID:(NSString *)arg0;
- (void)copyAttribures:(id)arg0;
- (void)setIsRandom:(char)arg0;
- (double)findMaxDuration;
- (char)isRandom;
- (void)dump;
- (GLKShaderBlockNode *)parent;
- (void)setParent:(NSObject *)arg0;

@end
