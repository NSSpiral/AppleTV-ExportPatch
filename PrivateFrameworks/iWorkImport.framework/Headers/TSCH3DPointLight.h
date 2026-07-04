/* Runtime dump - TSCH3DPointLight
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPointLight : TSCH3DLight <TSCH3DLightPositionable>
{
    TSCH3DVector * _position;
}

@property (nonatomic) struct tvec3<float> position;

+ (TSCH3DPointLight *)instanceWithArchive:(struct Chart3DLightArchive *)arg0 unarchiver:(struct Chart3DLightArchive)arg1;
+ (Class)effectClass;

- (void)saveToArchive:(struct Chart3DLightArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DPointLight *)initWithArchive:(struct Chart3DLightArchive *)arg0 unarchiver:(struct Chart3DLightArchive)arg1;
- (void)dealloc;
- (TSCH3DPointLight *)init;
- (NSString *)description;
- (TSCH3DPointLight *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPosition:(struct tvec3<float>)arg0;
- (struct tvec3<float>)position;

@end
