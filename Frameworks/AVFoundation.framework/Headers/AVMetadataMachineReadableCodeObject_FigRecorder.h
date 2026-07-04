/* Runtime dump - AVMetadataMachineReadableCodeObject_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataMachineReadableCodeObject_FigRecorder : AVMetadataObject_FigRecorder
{
    AVMetadataMachineReadableCodeObjectInternal_FigRecorder * _internal;
}

@property (readonly) NSArray * corners;
@property (readonly) NSString * stringValue;

+ (NSDictionary *)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(NSDictionary *)arg0 input:(NSObject *)arg1;

- (AVMetadataMachineReadableCodeObject_FigRecorder *)initDerivedMetadataObjectFromMetadataObject:(NSObject *)arg0 withTransform:(struct CGAffineTransform)arg1 isVideoMirrored:(char)arg2 rollAdjustment:(float)arg3;
- (AVMetadataMachineReadableCodeObject_FigRecorder *)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(NSDictionary *)arg0 input:(NSObject *)arg1;
- (void)dealloc;
- (char)isKindOfClass:(Class)arg0;
- (NSString *)description;
- (NSArray *)corners;
- (NSString *)stringValue;

@end
