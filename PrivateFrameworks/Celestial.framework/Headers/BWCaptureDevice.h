/* Runtime dump - BWCaptureDevice
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWCaptureDevice : NSObject

@property (readonly, nonatomic) int position;
@property (readonly, nonatomic) struct OpaqueCMClock * clock;
@property (readonly, nonatomic) NSArray * supportedFormats;
@property (nonatomic) int maximumFrameRate;
@property (nonatomic) int minimumFrameRate;

- (int)position;
- (char)isStreaming;
- (void)captureStillImageNow;
- (void)captureStillImageWithFlashNow;
- (void)captureStillImageBracketNow:(int)arg0 bracketSettings:(BWBracketSettings *)arg1;
- (void)getCurrentVideoFrameStatistics:(struct ? *)arg0;
- (char)startStreamingToSampleBufferHandler:(id /* block */)arg0 error:(/* block */ id)arg1;
- (char)registerStillImageBufferHandler:(id /* block */)arg0 error:(/* block */ id)arg1;
- (char)stopStreamingToSampleBufferHandler:(id /* block */)arg0 error:(/* block */ id)arg1;
- (char)unregisterStillImageBufferHandler:(id /* block */)arg0 error:(/* block */ id)arg1;
- (NSArray *)supportedFormats;
- (void)setMinimumFrameRate:(int)arg0;
- (void)setMaximumFrameRate:(int)arg0;
- (void)setActiveFormatIndex:(int)arg0;
- (int)minimumFrameRate;
- (int)maximumFrameRate;
- (int)activeFormatIndex;
- (struct OpaqueCMClock *)clock;

@end
