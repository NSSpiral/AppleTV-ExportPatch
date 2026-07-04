/* Runtime dump - TSCH3DPhongMaterialPackage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPhongMaterialPackage : TSCH3DMaterialPackage
{
    TSCH3DEmissiveMaterial * _emissive;
    TSCH3DDiffuseMaterial * _diffuse;
    TSCH3DModulateMaterial * _modulate;
    TSCH3DSpecularMaterial * _specular;
    TSCH3DShininessMaterial * _shininess;
}

@property (retain, nonatomic) TSCH3DEmissiveMaterial * emissive;
@property (retain, nonatomic) TSCH3DDiffuseMaterial * diffuse;
@property (retain, nonatomic) TSCH3DModulateMaterial * modulate;
@property (retain, nonatomic) TSCH3DSpecularMaterial * specular;
@property (retain, nonatomic) TSCH3DShininessMaterial * shininess;

+ (TSCH3DPhongMaterialPackage *)instanceWithArchive:(struct Chart3DPhongMaterialPackageArchive *)arg0 unarchiver:(struct Chart3DPhongMaterialPackageArchive)arg1;
+ (CKPackage *)package;

- (void)saveToArchive:(struct Chart3DPhongMaterialPackageArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DPhongMaterialPackage *)initWithArchive:(struct Chart3DPhongMaterialPackageArchive *)arg0 unarchiver:(struct Chart3DPhongMaterialPackageArchive)arg1;
- (TSCH3DEmissiveMaterial *)emissive;
- (NSEnumerator *)materialEnumerator;
- (TSCH3DModulateMaterial *)modulate;
- (char)hasCompleteData;
- (void)setEmissive:(TSCH3DEmissiveMaterial *)arg0;
- (void)setDiffuse:(TSCH3DDiffuseMaterial *)arg0;
- (void)setModulate:(TSCH3DModulateMaterial *)arg0;
- (void)setSpecular:(TSCH3DSpecularMaterial *)arg0;
- (TSCH3DDiffuseMaterial *)diffuse;
- (TSCH3DSpecularMaterial *)specular;
- (TSCH3DShininessMaterial *)shininess;
- (void)setShininess:(TSCH3DShininessMaterial *)arg0;
- (void)dealloc;
- (TSCH3DPhongMaterialPackage *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DPhongMaterialPackage *)copyWithZone:(struct _NSZone *)arg0;

@end
