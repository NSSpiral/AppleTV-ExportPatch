/* Runtime dump - TSCH3DPhongLikeLightingModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPhongLikeLightingModel : TSCH3DLightingModel

- (id)phongMaterials;
- (void)affect:(id)arg0 states:(NSArray *)arg1 scene:(NSObject *)arg2 texturePool:(struct unique_ptr<ggl::TexturePool, std::__1::default_delete<ggl::TexturePool> >)arg3 percentage:(id)arg4;
- (id)diffuseTextureTiling;
- (id)representativeMaterialLightenedByPercentage:(id)arg0;
- (struct tvec4<float>)p_lightenedColorForColor:(struct tvec4<float> *)arg0 percentage:(struct tvec4<float>)arg1;
- (id)p_lightenDiffuseMaterial:(id)arg0 percentage:(id)arg1;
- (TSCH3DPhongLikeLightingModel *)initWithPhongMaterialPackageArchive:(struct Chart3DPhongMaterialPackageArchive *)arg0 lightingModelArchive:(struct Chart3DPhongMaterialPackageArchive)arg1 unarchiver:(SKKeyedUnarchiver *)arg2;
- (void)saveToPhongMaterialPackageArchive:(struct Chart3DPhongMaterialPackageArchive *)arg0 environmentPackageArchive:(id)arg1 archiver:(NSObject *)arg2;
- (TSCH3DPhongLikeLightingModel *)init;

@end
