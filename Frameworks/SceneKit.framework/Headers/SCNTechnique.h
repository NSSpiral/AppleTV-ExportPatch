/* Runtime dump - SCNTechnique
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTechnique : NSObject <SCNAnimatable, NSCopying, NSSecureCoding>
{
    id _reserved;
    id _isPresentationInstance;
    struct __C3DFXTechnique * _technique;
    NSMutableDictionary * _valueForSymbol;
    SCNOrderedDictionary * _animations;
}

@property (readonly) NSDictionary * dictionaryRepresentation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNTechnique *)techniqueWithDictionary:(NSDictionary *)arg0;
+ (SCNTechnique *)techniqueBySequencingTechniques:(NSArray *)arg0;
+ (SCNTechnique *)techniqueWithTechniqueRef:(struct __C3DFXTechnique *)arg0;
+ (char)supportsSecureCoding;

- (SCNScene *)scene;
- (SCNTechnique *)initWithTechniqueRef:(struct __C3DFXTechnique *)arg0;
- (struct __C3DFXTechnique *)techniqueRef;
- (NSArray *)_symbolsAssignedValues;
- (struct __C3DScene *)sceneRef;
- (void *)__CFObject;
- (void)_syncObjCAnimations;
- (struct __C3DAnimationManager *)animationManager;
- (void)_pauseAnimation:(char)arg0 forKey:(NSString *)arg1;
- (SCNTechnique *)initPresentationTechniqueWithTechniqueRef:(struct __C3DFXTechnique *)arg0;
- (void)handleBindingOfSymbol:(NSString *)arg0 usingBlock:(id /* block */)arg1;
- (void)pauseAnimationForKey:(NSString *)arg0;
- (void)resumeAnimationForKey:(NSString *)arg0;
- (void)_customEncodingOfSCNTechnique:(id)arg0;
- (void)_customDecodingOfSCNTechnique:(id)arg0;
- (char)isAnimationForKeyPaused:(NSString *)arg0;
- (void)removeAnimationForKey:(NSString *)arg0 fadeOutDuration:(float)arg1;
- (void)setValue:(NSObject *)arg0 forSymbolNamed:(id)arg1;
- (id)valueForSymbolNamed:(id)arg0;
- (void)__removeAnimation:(NSObject *)arg0 forKey:(NSString *)arg1;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (char)isPausedOrPausedByInheritance;
- (SCNNode *)presentationInstance;
- (void)dealloc;
- (SCNTechnique *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNTechnique *)copy;
- (void)addAnimation:(CAAnimation *)arg0;
- (SCNTechnique *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)animationKeys;
- (CAAnimation *)animationForKey:(NSString *)arg0;
- (void)removeAnimationForKey:(NSString *)arg0;
- (void)addAnimation:(CAAnimation *)arg0 forKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
