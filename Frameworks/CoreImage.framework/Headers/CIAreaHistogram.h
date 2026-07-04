/* Runtime dump - CIAreaHistogram
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAreaHistogram : CIFilter
{
    CIImage * inputImage;
    CIVector * inputExtent;
    NSNumber * inputScale;
    NSNumber * inputCount;
    CIContext * _context;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputExtent;
@property (retain, nonatomic) NSNumber * inputScale;
@property (retain, nonatomic) NSNumber * inputCount;

+ (NSArray *)customAttributes;

- (void)setInputCount:(NSNumber *)arg0;
- (void)setInputExtent:(CIVector *)arg0;
- (NSData *)_outputData:(char)arg0;
- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIVector *)inputExtent;
- (void)setDefaults;
- (NSNumber *)inputScale;
- (void)setInputScale:(NSNumber *)arg0;
- (void)dealloc;
- (NSMutableData *)outputData;
- (NSNumber *)inputCount;
- (CIImage *)outputImage;

@end
