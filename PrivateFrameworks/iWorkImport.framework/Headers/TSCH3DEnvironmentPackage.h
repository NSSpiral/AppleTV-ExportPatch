/* Runtime dump - TSCH3DEnvironmentPackage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DEnvironmentPackage : NSObject <NSCopying>
{
    NSArray * _materials;
}

+ (TSCH3DEnvironmentPackage *)instanceWithArchive:(struct Chart3DEnvironmentPackageArchive *)arg0 unarchiver:(struct Chart3DEnvironmentPackageArchive)arg1;

- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DEnvironmentPackageArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DEnvironmentPackage *)initWithArchive:(struct Chart3DEnvironmentPackageArchive *)arg0 unarchiver:(struct Chart3DEnvironmentPackageArchive)arg1;
- (void)addMaterial:(TSCH3DSpecularMaterial *)arg0;
- (NSEnumerator *)materialEnumerator;
- (char)hasCompleteData;
- (void)affect:(id)arg0 states:(NSArray *)arg1 scene:(NSObject *)arg2 texturePool:(struct unique_ptr<ggl::TexturePool, std::__1::default_delete<ggl::TexturePool> >)arg3;
- (unsigned int)materialCount;
- (void)dealloc;
- (TSCH3DEnvironmentPackage *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DEnvironmentPackage *)copyWithZone:(struct _NSZone *)arg0;

@end
