/* Runtime dump - AVMetadataMachineReadableCodeObject
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataMachineReadableCodeObject : AVMetadataObject
{
    AVMetadataMachineReadableCodeObjectInternal * _internal;
}

@property (readonly) NSArray * corners;
@property (readonly) NSString * stringValue;

+ (NSDictionary *)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(NSDictionary *)arg0 input:(NSObject *)arg1;

- (AVMetadataMachineReadableCodeObject *)initDerivedMetadataObjectFromMetadataObject:(NSObject *)arg0 withTransform:(struct CGAffineTransform)arg1 isVideoMirrored:(char)arg2 rollAdjustment:(float)arg3;
- (AVMetadataMachineReadableCodeObject *)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(NSDictionary *)arg0 input:(NSObject *)arg1;
- (void)dealloc;
- (NSString *)description;
- (NSArray *)corners;
- (NSString *)stringValue;

@end
