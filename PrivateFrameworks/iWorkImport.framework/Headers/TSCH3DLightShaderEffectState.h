/* Runtime dump - TSCH3DLightShaderEffectState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLightShaderEffectState : NSObject
{
    NSMutableArray * mLights;
    struct LightingPackageShaderEffectState mPackageState;
}

+ (NSObject *)effectState;

- (struct LightingPackageShaderEffectState *)packageState;
- (void)setPackageState:(struct LightingPackageShaderEffectState *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (TSCH3DLightShaderEffectState *)init;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DLightShaderEffectState *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end
