/* Runtime dump - TSCH3DBaseImageTextureTiling
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBaseImageTextureTiling : TSCH3DTextureTiling
{
    TSCH3DVector * _scale;
    float _rotation;
}

@property (nonatomic) struct tvec2<float> scale;
@property (nonatomic) float rotation;

+ (TSCH3DBaseImageTextureTiling *)instanceWithArchive:(struct Chart3DBaseImageTextureTilingArchive *)arg0 unarchiver:(struct Chart3DBaseImageTextureTilingArchive)arg1;

- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DBaseImageTextureTilingArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DBaseImageTextureTiling *)initWithArchive:(struct Chart3DBaseImageTextureTilingArchive *)arg0 unarchiver:(struct Chart3DBaseImageTextureTilingArchive)arg1;
- (void)restoreDefault;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (struct tvec2<float>)scale;
- (TSCH3DBaseImageTextureTiling *)copyWithZone:(struct _NSZone *)arg0;
- (void)setScale:(struct tvec2<float>)arg0;
- (void)setRotation:(float)arg0;
- (float)rotation;

@end
