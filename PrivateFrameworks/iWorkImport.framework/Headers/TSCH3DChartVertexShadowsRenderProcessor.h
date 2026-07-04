/* Runtime dump - TSCH3DChartVertexShadowsRenderProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartVertexShadowsRenderProcessor : TSCH3DRetargetRenderProcessor
{
    NSArray * mShadowsEffects;
}

- (void)submit:(struct PrimitiveInfo *)arg0;
- (int)attribute:(NSObject *)arg0 resource:(NSObject *)arg1 specs:(struct AttributeSpecs *)arg2;
- (int)texture:(NSObject *)arg0 attributes:(struct TextureAttributes *)arg1;
- (id)p_effects;
- (void)dealloc;
- (TSCH3DChartVertexShadowsRenderProcessor *)init;

@end
