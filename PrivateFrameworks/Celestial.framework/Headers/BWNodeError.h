/* Runtime dump - BWNodeError
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeError : NSObject
{
    int _uniqueID;
    long _errorCode;
    NSString * _sourceNodeDescription;
    FigCaptureStillImageSettings * _stillImageSettings;
    FigCaptureRecordingSettings * _recordingSettings;
}

@property (readonly) long errorCode;
@property (readonly) NSString * sourceNodeDescription;
@property (readonly) FigCaptureStillImageSettings * stillImageSettings;
@property (readonly) FigCaptureRecordingSettings * recordingSettings;

+ (NSError *)newError:(long)arg0 sourceNode:(NSObject *)arg1 stillImageSettings:(FigCaptureStillImageSettings *)arg2;
+ (NSError *)newError:(long)arg0 sourceNode:(NSObject *)arg1;
+ (NSError *)newError:(long)arg0 sourceNode:(NSObject *)arg1 recordingSettings:(FigCaptureRecordingSettings *)arg2;

- (void)dealloc;
- (unsigned int)hash;
- (FigCaptureStillImageSettings *)stillImageSettings;
- (FigCaptureRecordingSettings *)recordingSettings;
- (NSError *)_initWithError:(long)arg0 sourceNode:(NSObject *)arg1 stillImageSettings:(FigCaptureStillImageSettings *)arg2 recordingSettings:(FigCaptureRecordingSettings *)arg3;
- (NSString *)sourceNodeDescription;
- (long)errorCode;

@end
