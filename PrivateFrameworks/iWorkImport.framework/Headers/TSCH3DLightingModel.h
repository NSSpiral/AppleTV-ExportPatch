/* Runtime dump - TSCH3DLightingModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLightingModel : NSObject <NSCopying>
{
    TSCH3DMaterialPackage * _materials;
    TSCH3DLightingPackage * _lightings;
    TSCH3DEnvironmentPackage * _environment;
}

@property (retain, nonatomic) TSCH3DMaterialPackage * materials;
@property (retain, nonatomic) TSCH3DLightingPackage * lightings;
@property (retain, nonatomic) TSCH3DEnvironmentPackage * environment;

+ (TSCH3DLightingModel *)instanceWithArchive:(struct Chart3DLightingModelArchive *)arg0 unarchiver:(struct Chart3DLightingModelArchive)arg1;
+ (TSCH3DLightingModel *)lightingModel;

- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DLightingModelArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DLightingModel *)initWithArchive:(struct Chart3DLightingModelArchive *)arg0 unarchiver:(struct Chart3DLightingModelArchive)arg1;
- (char)hasCompleteData;
- (void)setLightings:(TSCH3DLightingPackage *)arg0;
- (void)affect:(id)arg0 states:(NSArray *)arg1 scene:(NSObject *)arg2 texturePool:(struct unique_ptr<ggl::TexturePool, std::__1::default_delete<ggl::TexturePool> >)arg3;
- (id)lightingModelWithLightings:(TSCH3DLightingPackage *)arg0;
- (id)diffuseTextureTiling;
- (id)representativeMaterialLightenedByPercentage:(id)arg0;
- (TSCH3DLightingPackage *)lightings;
- (id)clone;
- (TSCH3DMaterialPackage *)materials;
- (void)setMaterials:(TSCH3DMaterialPackage *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DEnvironmentPackage *)environment;
- (TSCH3DLightingModel *)copyWithZone:(struct _NSZone *)arg0;
- (void)setEnvironment:(TSCH3DEnvironmentPackage *)arg0;

@end
