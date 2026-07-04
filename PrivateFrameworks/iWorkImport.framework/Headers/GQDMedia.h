/* Runtime dump - GQDMedia
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDMedia : GQDGraphic <GQDNameMappable>
{
    GQDFilteredImage * mFilteredImage;
    GQDAffineGeometry * mCropGeometry;
    GQDImageBinary * mOriginalImageBinary;
    GQDPath * mMaskingShapePath;
    struct CGPath * mAlphaMaskBezier;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (id)imageBinary;
- (NSObject *)cropGeometry;
- (NSString *)maskingShapePath;
- (struct CGPath *)alphaMaskBezier;
- (void)dealloc;

@end
