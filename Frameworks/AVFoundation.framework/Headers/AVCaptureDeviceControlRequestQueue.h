/* Runtime dump - AVCaptureDeviceControlRequestQueue
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceControlRequestQueue : NSObject
{
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableArray * _mutableArray;
}

- (void)enqueueRequest:(NSURLRequest *)arg0;
- (void)dealloc;
- (AVCaptureDeviceControlRequestQueue *)init;
- (NSOperationQueue *)dequeue;
- (OADLineEnd *)head;

@end
