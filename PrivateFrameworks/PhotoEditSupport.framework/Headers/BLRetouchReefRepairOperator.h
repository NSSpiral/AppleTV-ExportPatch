/* Runtime dump - BLRetouchReefRepairOperator
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchReefRepairOperator : NSObject
{
    void * _buffer;
    int _rowBytes;
    int _width;
    int _height;
    void * _maskBuffer;
    int _maskRowBytes;
    int _maskWidth;
    int _maskHeight;
    int _brushSize;
    struct CGRect _maskRect;
}

+ (int)borderWithBrushSize:(int)arg0;

- (void).cxx_construct;
- (void)repair;
- (BLRetouchReefRepairOperator *)initWithRepairSourceData:(void *)arg0 rowBytes:(int)arg1 width:(int)arg2 height:(int)arg3;
- (void)setMaskRect:(struct CGRect)arg0;
- (void)setMaskData:(void *)arg0 rowBytes:(int)arg1 width:(int)arg2 height:(int)arg3;
- (void)setBrushSize:(int)arg0;
- (struct CGPoint)analyzeOffset;
- (void)repairWithOffset:(struct CGPoint)arg0;

@end
