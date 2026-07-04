/* Runtime dump - TSCH3DLightingPackage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLightingPackage : NSObject <NSCopying>
{
    NSString * _name;
    NSArray * _lights;
}

@property (copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSString * localizedName;

+ (TSCH3DLightingPackage *)instanceWithArchive:(struct Chart3DLightingPackageArchive *)arg0 unarchiver:(struct Chart3DLightingPackageArchive)arg1;
+ (NSString *)packageFromName:(NSString *)arg0;
+ (NSString *)localizedNameForName:(NSString *)arg0;
+ (TSCH3DLightingPackage *)allNamedPackages;
+ (CKPackage *)package;

- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DLightingPackageArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DLightingPackage *)initWithArchive:(struct Chart3DLightingPackageArchive *)arg0 unarchiver:(struct Chart3DLightingPackageArchive)arg1;
- (void)affect:(id)arg0 states:(NSArray *)arg1 scene:(NSObject *)arg2 texturePool:(struct unique_ptr<ggl::TexturePool, std::__1::default_delete<ggl::TexturePool> >)arg3;
- (void)addLight:(CALight *)arg0;
- (void)dealloc;
- (TSCH3DLightingPackage *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (TSCH3DLightingPackage *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)localizedName;

@end
