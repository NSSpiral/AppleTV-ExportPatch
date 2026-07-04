/* Runtime dump - CIBarcodeDetector
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBarcodeDetector : CIDetector
{
    CIContext * context;
    float _width;
    float _height;
    NSMutableDictionary * featureOptions;
}

@property (retain, nonatomic) CIContext * context;

- (UIImage *)featuresInImage:(UIImage *)arg0 options:(NSDictionary *)arg1;
- (CIBarcodeDetector *)initWithContext:(CIContext *)arg0 options:(NSDictionary *)arg1;
- (UIImage *)featuresInImage:(UIImage *)arg0;
- (void)dealloc;
- (CIContext *)context;
- (void)setContext:(CIContext *)arg0;
- (void)finalize;

@end
