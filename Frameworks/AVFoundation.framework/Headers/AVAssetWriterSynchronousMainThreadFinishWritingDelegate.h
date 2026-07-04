/* Runtime dump - AVAssetWriterSynchronousMainThreadFinishWritingDelegate
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterSynchronousMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFinishWritingHelperDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)shouldHelperPrepareInputs;
- (void)finishWritingHelper:(NSObject *)arg0 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;
- (void)finishWritingHelperDidFail:(id)arg0;
- (void)finishWritingHelperDidCancelFinishWriting:(id)arg0;

@end
