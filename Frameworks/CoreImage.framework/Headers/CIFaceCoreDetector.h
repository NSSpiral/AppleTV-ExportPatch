/* Runtime dump - CIFaceCoreDetector
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceCoreDetector : CIDetector
{
    CIContext * context;
    NSMutableDictionary * featureOptions;
    FCRFaceDetector * faceCoreDetector;
}

@property (retain, nonatomic) CIContext * context;
@property FCRFaceDetector * faceCoreDetector;

- (UIImage *)featuresInImage:(UIImage *)arg0 options:(NSDictionary *)arg1;
- (CIFaceCoreDetector *)initWithContext:(CIContext *)arg0 options:(NSDictionary *)arg1;
- (UIImage *)featuresInImage:(UIImage *)arg0;
- (UIImage *)adjustedImageFromImage:(UIImage *)arg0 orientation:(int)arg1 inverseCTM:(struct CGAffineTransform *)arg2;
- (UIImage *)createFaceCoreDataFromCIImage:(UIImage *)arg0 width:(unsigned int *)arg1 height:(unsigned int *)arg2;
- (FCRFaceDetector *)faceCoreDetector;
- (void)setFaceCoreDetector:(FCRFaceDetector *)arg0;
- (struct CGAffineTransform)ctmForImageWithBounds:(struct CGRect)arg0 orientation:(struct CGSize)arg1;
- (void)dealloc;
- (CIContext *)context;
- (void)setContext:(CIContext *)arg0;
- (void)finalize;

@end
