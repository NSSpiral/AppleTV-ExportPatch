/* Runtime dump - FigVideoCaptureConnectionConfiguration
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    int _outputFormat;
    int _outputWidth;
    int _outputHeight;
    int _videoStabilizationMethod;
    char _mirroringEnabled;
    int _orientation;
    int _retainedBufferCount;
}

@property (nonatomic) int outputFormat;
@property (nonatomic) int outputWidth;
@property (nonatomic) int outputHeight;
@property (nonatomic) int videoStabilizationMethod;
@property (nonatomic) char mirroringEnabled;
@property (nonatomic) int orientation;
@property (nonatomic) int retainedBufferCount;

- (void)setVideoStabilizationMethod:(int)arg0;
- (void)setOutputWidth:(int)arg0;
- (void)setOutputHeight:(int)arg0;
- (void)setMirroringEnabled:(char)arg0;
- (void)setRetainedBufferCount:(int)arg0;
- (int)outputWidth;
- (int)outputHeight;
- (int)outputFormat;
- (void)setOutputFormat:(int)arg0;
- (NSDictionary *)copyXPCEncoding;
- (FigVideoCaptureConnectionConfiguration *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (FigVideoCaptureConnectionConfiguration *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (int)orientation;
- (FigVideoCaptureConnectionConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (void)setOrientation:(int)arg0;
- (int)retainedBufferCount;
- (char)mirroringEnabled;
- (int)videoStabilizationMethod;

@end
