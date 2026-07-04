/* Runtime dump - CIRectangleDetector
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRectangleDetector : CIDetector
{
    CIContext * context;
    float _width;
    float _height;
    NSMutableDictionary * featureOptions;
    struct OpaqueVTPixelTransferSession * pixelTransferSession;
    struct __CVBuffer * interimScaleBuffer;
    struct __CVBuffer * scaleBuffer;
    float * perMeshPtr;
    void * _internalBuffer;
}

@property (retain, nonatomic) CIContext * context;

- (UIImage *)featuresInImage:(UIImage *)arg0 options:(NSDictionary *)arg1;
- (CIRectangleDetector *)initWithContext:(CIContext *)arg0 options:(NSDictionary *)arg1;
- (UIImage *)featuresInImage:(UIImage *)arg0;
- (NSObject *)featuresInImageUsingCCRect:(NSObject *)arg0 options:(NSDictionary *)arg1;
- (void)dealloc;
- (CIContext *)context;
- (void)setContext:(CIContext *)arg0;
- (void)finalize;

@end
