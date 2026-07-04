/* Runtime dump - TSDMutableImageFill
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableImageFill : TSDImageFill <NSCopying>

@property (retain, nonatomic) TSPData * imageData;
@property (nonatomic) char interpretsUntaggedImageDataAsGeneric;
@property (nonatomic) int technique;
@property (copy, nonatomic) TSUColor * tintColor;
@property (nonatomic) struct CGSize fillSize;
@property (nonatomic) float scale;

- (void)setInterpretsUntaggedImageDataAsGeneric:(char)arg0;
- (void)setFillSize:(struct CGSize)arg0;
- (void)setTechnique:(int)arg0;
- (TSDMutableImageFill *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTintColor:(TSUColor *)arg0;
- (void)setScale:(float)arg0;
- (void)setImageData:(TSPData *)arg0;

@end
