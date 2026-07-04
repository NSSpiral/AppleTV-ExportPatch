/* Runtime dump - TSDShapeStylePropertyChangeSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeStylePropertyChangeSet : TSSStylePropertyChangeSet
{
    TSDSpecFill * _fill;
    TSDSpecStroke * _stroke;
    TSSSpecDouble * _opacity;
    TSDSpecShadow * _shadow;
    TSDSpecReflection * _reflection;
    TSDSpecLineEnd * _headLineEnd;
    TSDSpecLineEnd * _tailLineEnd;
    char _definedFill;
    char _definedStroke;
    char _definedOpacity;
    char _definedShadow;
    char _definedReflection;
    char _definedHeadLineEnd;
    char _definedTailLineEnd;
}

- (void)setBoxedValue:(id)arg0 forProperty:(int)arg1;
- (void)setSpec:(NSObject *)arg0 forProperty:(int)arg1;
- (void)setUnsetSpecForProperty:(int)arg0;
- (void)enumerateDefinedPropertiesWithBlock:(id /* block */)arg0;

@end
