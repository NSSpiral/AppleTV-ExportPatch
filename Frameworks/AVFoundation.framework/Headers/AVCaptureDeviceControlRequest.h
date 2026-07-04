/* Runtime dump - AVCaptureDeviceControlRequest
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceControlRequest : NSObject
{
    id _completionBlock;
    int _requestID;
    long _errorCode;
}

@property (readonly, copy, nonatomic) id completionBlock;
@property (readonly, nonatomic) int requestID;
@property (nonatomic) long errorCode;

+ (AVCaptureDeviceControlRequest *)deviceControlRequestWithCompletionBlock:(id /* block */)arg0;

- (int)requestID;
- (AVCaptureDeviceControlRequest *)_initWithCompletionBlock:(id /* block */)arg0;
- (void)dealloc;
- (id /* block */)completionBlock;
- (void)setErrorCode:(long)arg0;
- (long)errorCode;

@end
