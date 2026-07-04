/* Runtime dump - TSKAnimatedGIFFrame
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnimatedGIFFrame : NSObject
{
    struct CGImage * mImage;
    double mTime;
}

@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) struct CGImage * image;

- (TSKAnimatedGIFFrame *)initWithCGImage:(struct CGImage *)arg0 time:(double)arg1;
- (void)dealloc;
- (NSString *)description;
- (struct CGImage *)image;
- (double)time;

@end
