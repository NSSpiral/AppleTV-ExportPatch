/* Runtime dump - TSDMediaStylePropertyChangeSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMediaStylePropertyChangeSet : TSSStylePropertyChangeSet
{
    TSDSpecStroke * _stroke;
    TSSSpecDouble * _opacity;
    TSDSpecShadow * _shadow;
    TSDSpecReflection * _reflection;
    char _definedStroke;
    char _definedOpacity;
    char _definedShadow;
    char _definedReflection;
}

- (void)setBoxedValue:(id)arg0 forProperty:(int)arg1;
- (void)setSpec:(NSObject *)arg0 forProperty:(int)arg1;
- (void)setUnsetSpecForProperty:(int)arg0;
- (void)enumerateDefinedPropertiesWithBlock:(id /* block */)arg0;

@end
