/* Runtime dump - TSCH3DShaderEffects
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderEffects : NSObject
{
    id mSections;
    NSArray * mCacheList;
}

@property (readonly, nonatomic) NSSet * identifier;

- (void)addVariables:(TSCH3DPointLightUniformArrayShaderVariables *)arg0;
- (void)inject:(id)arg0;
- (void)enumerateEffectsUsingBlock:(id /* block */)arg0;
- (void)resetToArray:(NSArray *)arg0;
- (void)addEffect:(NSObject *)arg0 toSection:(int)arg1;
- (void)addEffectOnce:(id)arg0 toSection:(int)arg1;
- (void)prependEffect:(NSObject *)arg0 toSection:(int)arg1;
- (void)addEffectsFromArray:(NSArray *)arg0 toSection:(int)arg1;
- (void)removeEffect:(NSObject *)arg0 fromSection:(int)arg1;
- (void)resetCacheList;
- (void)resetSection:(int)arg0;
- (void)addEffectsFromArray:(NSArray *)arg0;
- (void)prependEffect:(NSObject *)arg0;
- (char)removeEffectOfClass:(Class)arg0 fromSection:(int)arg1;
- (void)setEnable:(char)arg0 forSection:(int)arg1;
- (char)isSectionEnabled:(int)arg0;
- (void)resetSection:(int)arg0 toArray:(NSArray *)arg1;
- (void)dealloc;
- (TSCH3DShaderEffects *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSSet *)identifier;
- (void)reset;
- (NSArray *)effects;
- (void)addEffect:(NSObject *)arg0;

@end
