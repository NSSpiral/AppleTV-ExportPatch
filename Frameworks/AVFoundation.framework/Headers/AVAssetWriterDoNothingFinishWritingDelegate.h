/* Runtime dump - AVAssetWriterDoNothingFinishWritingDelegate
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterDoNothingFinishWritingDelegate : NSObject <AVAssetWriterFinishWritingHelperDelegate>
{
    id _handler;
    int _handlerCalled;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)shouldHelperPrepareInputs;
- (void)finishWritingHelper:(NSObject *)arg0 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;
- (void)finishWritingHelperDidFail:(id)arg0;
- (void)finishWritingHelperDidCancelFinishWriting:(id)arg0;
- (void)_callHandlerIfNotCalled;
- (void)dealloc;
- (AVAssetWriterDoNothingFinishWritingDelegate *)initWithHandler:(id /* block */)arg0;

@end
