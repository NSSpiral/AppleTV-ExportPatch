/* Runtime dump - AVRawImageReprocessor
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRawImageReprocessor : NSObject
{
    AVRawImageReprocessorInternal * _internal;
}

+ (void)initialize;

- (void)reprocessRawImageSurface:(struct __IOSurface *)arg0 andMetadata:(NSDictionary *)arg1 withOutputSettings:(NSDictionary *)arg2 completionHandler:(id /* block */)arg3;
- (void)handlePhotoReady:(id)arg0;
- (void)dealloc;
- (AVRawImageReprocessor *)init;

@end
