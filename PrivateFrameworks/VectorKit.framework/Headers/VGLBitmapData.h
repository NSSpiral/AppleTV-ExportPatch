/* Runtime dump - VGLBitmapData
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLBitmapData : NSObject
{
    NSData * _bitmapData;
    struct VGLBitmapInfo _bitmapInfo;
    struct __IOSurface * _surface;
}

@property (readonly, nonatomic) unsigned long dataLength;
@property (readonly, nonatomic) struct VGLBitmapInfo bitmapInfo;

- (void)dealloc;
- (NSString *)description;
- (void)getBytes:(void *)arg0 range:(struct _NSRange)arg1;
- (void)_commonInitWithBytes:(void *)arg0 bitmapInfo:(struct VGLBitmapInfo *)arg1;
- (VGLBitmapData *)initWithBytes:(void *)arg0 bitmapInfo:(struct VGLBitmapInfo *)arg1;
- (VGLBitmapData *)initWithSurface:(struct __IOSurface *)arg0 bitmapInfo:(struct VGLBitmapInfo *)arg1;
- (unsigned long)dataLength;
- (struct VGLBitmapInfo)bitmapInfo;

@end
