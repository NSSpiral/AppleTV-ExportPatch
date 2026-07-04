/* Runtime dump - TSCH3DLabelsAtlasMeshRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLabelsAtlasMeshRenderer : TSCH3DLabelsMeshRenderer
{
    TSCH3DTextureAtlas * mAtlas;
    TSUNoCopyDictionary * mExternalAttributeVariables;
}

- (void)allocateDynamicResourcesIntoArray:(NSArray *)arg0;
- (void)beginResources:(NSArray *)arg0 samples:(float)arg1;
- (void)submitResourcesWithProcessor:(TSCH3DRenderProcessor *)arg0;
- (void)renderWithMeshRenderLabelInfo:(struct LabelsMeshRendererLabelInfo *)arg0;
- (NSObject *)p_resourceAtIndex:(unsigned int)arg0 childIndex:(unsigned int)arg1 dimension:(unsigned int)arg2 createIfAbsent:(char)arg3;
- (unsigned int)p_indexForExternalAttribute:(struct ExternalLabelAttribute *)arg0;
- (unsigned int)p_resourceCount;
- (NSObject *)p_vertexResourceAtIndex:(unsigned int)arg0 createIfAbsent:(char)arg1;
- (NSObject *)p_texcoordResourceAtIndex:(unsigned int)arg0 createIfAbsent:(char)arg1;
- (void)p_submitExternalAttributesForIndex:(unsigned int)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (NSObject *)p_resourceForExternalLabelAttribute:(struct ExternalLabelAttribute *)arg0 index:(struct ExternalLabelAttribute)arg1 createIfAbsent:(id)arg2;
- (void)dealloc;
- (TSCH3DLabelsAtlasMeshRenderer *)init;
- (void)flushCache;

@end
