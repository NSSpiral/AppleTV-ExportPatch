/* Runtime dump - AVCaptureFileOutputDelegateWrapper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFileOutputDelegateWrapper : NSObject
{
    char _recording;
    char _paused;
    NSURL * _outputFileURL;
    NSArray * _metadata;
    AVWeakReferencingDelegateStorage * _delegateStorage;
    NSArray * _connections;
    long long _settingsID;
}

@property (readonly) long long settingsID;
@property (readonly) NSURL * outputFileURL;
@property (retain) NSArray * metadata;
@property (readonly) AVWeakReferencingDelegateStorage * delegateStorage;
@property (readonly) NSArray * connections;
@property (nonatomic) char recording;
@property (nonatomic) char paused;

+ (NSURL *)wrapperWithURL:(NSString *)arg0 delegate:(NSObject *)arg1 settingsID:(long long)arg2 connections:(NSArray *)arg3;

- (AVWeakReferencingDelegateStorage *)delegateStorage;
- (NSURL *)outputFileURL;
- (char)isRecording;
- (AVCaptureFileOutputDelegateWrapper *)initWithURL:(NSString *)arg0 delegate:(NSObject *)arg1 settingsID:(long long)arg2 connections:(NSArray *)arg3;
- (long long)settingsID;
- (void)setRecording:(char)arg0;
- (NSArray *)connections;
- (void)dealloc;
- (void)setPaused:(char)arg0;
- (void)setMetadata:(NSArray *)arg0;
- (NSArray *)metadata;
- (char)isPaused;

@end
