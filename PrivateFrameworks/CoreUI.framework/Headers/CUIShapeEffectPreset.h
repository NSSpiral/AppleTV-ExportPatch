/* Runtime dump - CUIShapeEffectPreset
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIShapeEffectPreset : NSObject
{
    id _parameterList;
    id _effectIndex;
    float _scaleFactor;
}

+ (NSObject *)requiredEffectParametersForEffectType:(unsigned int)arg0;

- (CUIShapeEffectPreset *)init;
- (NSDictionary *)CUIEffectDataRepresentation;
- (CUIShapeEffectPreset *)initWithEffectScale:(float)arg0;
- (unsigned int)effectTypeAtIndex:(unsigned int)arg0;
- (NSDictionary *)layerEffectsRepresentation;
- (void)addDropShadowWithColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(float)arg3 blur:(int)arg4 spread:(int)arg5 offset:(int)arg6 angle:(int)arg7;
- (id)valueForParameter:(float)arg0 inEffectAtIndex:(unsigned int)arg1;
- (void)addInnerShadowWithColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(float)arg3 blur:(int)arg4 offset:(int)arg5 angle:(int)arg6 blendMode:(unsigned int)arg7;
- (void)addInnerGlowWithColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(float)arg3 blur:(int)arg4 blendMode:(unsigned int)arg5;
- (void)addOuterGlowWithColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(float)arg3 blur:(int)arg4 spread:(int)arg5;
- (void)addColorFillWithRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(float)arg3 blendMode:(unsigned int)arg4;
- (void)addGradientFillWithTopColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 bottomColorRed:(unsigned int)arg3 green:(unsigned int)arg4 blue:(unsigned int)arg5 opacity:(float)arg6;
- (void)addBevelEmbossWithHighlightColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(float)arg3 shadowColorRed:(unsigned int)arg4 green:(unsigned int)arg5 blue:(unsigned int)arg6 opacity:(float)arg7 blur:(int)arg8 soften:(int)arg9;
- (void)_insertEffectTuple:(struct ?)arg0 atEffectIndex:(short)arg1;
- (void)addValue:(NSValue *)arg0 forParameter:(/* block */ id)arg1 withEffectType:(TDEffectType *)arg2 atEffectIndex:(float)arg3;
- (void)addValue:(NSValue *)arg0 forParameter:(/* block */ id)arg1 withNewEffectType:(NSObject *)arg2;
- (void)appendValue:(id)arg0 forParameter:(/* block */ id)arg1 withEffectType:(TDEffectType *)arg2;
- (void)addFloatValue:(float)arg0 forParameter:(unsigned int)arg1 withNewEffectType:(unsigned int)arg2;
- (void)addColorValueRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 forParameter:(unsigned int)arg3 withNewEffectType:(unsigned int)arg4;
- (void)appendFloatValue:(float)arg0 forParameter:(unsigned int)arg1 withEffectType:(unsigned int)arg2;
- (void)appendEnumValue:(unsigned int)arg0 forParameter:(unsigned int)arg1 withEffectType:(unsigned int)arg2;
- (void)appendColorValueRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 forParameter:(unsigned int)arg3 withEffectType:(unsigned int)arg4;
- (void)appendIntValue:(unsigned int)arg0 forParameter:(unsigned int)arg1 withEffectType:(unsigned int)arg2;
- (void)appendAngleValue:(int)arg0 forParameter:(unsigned int)arg1 withEffectType:(unsigned int)arg2;
- (float)effectScale;
- (void)getEffectTuples:(struct ? * *)arg0 count:(struct ?)arg1 atEffectIndex:(unsigned int *)arg2;
- (void)addIntValue:(unsigned int)arg0 forParameter:(unsigned int)arg1 withNewEffectType:(unsigned int)arg2;
- (void)addEnumValue:(unsigned int)arg0 forParameter:(unsigned int)arg1 withNewEffectType:(unsigned int)arg2;
- (void)addShapeOpacityWithOpacity:(float)arg0;
- (void)addOutputOpacityWithOpacity:(float)arg0;
- (void)addExtraShadowWithColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(float)arg3 blur:(int)arg4 spread:(int)arg5 offset:(int)arg6 angle:(int)arg7;
- (unsigned int)_parameterCount;
- (CUIShapeEffectPreset *)initWithConstantPreset:(struct ? *)arg0;
- (unsigned int)effectCount;

@end
