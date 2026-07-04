/* Runtime dump - TSCH3DDirectionalLight
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DDirectionalLight : TSCH3DLight <TSCH3DLightDirectional>
{
    TSCH3DVector * _direction;
}

@property (nonatomic) struct tvec3<float> direction;

+ (TSCH3DDirectionalLight *)instanceWithArchive:(struct Chart3DLightArchive *)arg0 unarchiver:(struct Chart3DLightArchive)arg1;
+ (Class)effectClass;

- (void)saveToArchive:(struct Chart3DLightArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DDirectionalLight *)initWithArchive:(struct Chart3DLightArchive *)arg0 unarchiver:(struct Chart3DLightArchive)arg1;
- (void)dealloc;
- (TSCH3DDirectionalLight *)init;
- (NSString *)description;
- (TSCH3DDirectionalLight *)copyWithZone:(struct _NSZone *)arg0;
- (void)setDirection:(struct tvec3<float>)arg0;
- (struct tvec3<float>)direction;

@end
