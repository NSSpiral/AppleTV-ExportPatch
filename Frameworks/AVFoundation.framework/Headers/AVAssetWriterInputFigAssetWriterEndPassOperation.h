/* Runtime dump - AVAssetWriterInputFigAssetWriterEndPassOperation
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputFigAssetWriterEndPassOperation : NSObject
{
    struct OpaqueFigAssetWriter * _figAssetWriter;
    int _trackID;
    id _completionBlock;
    char _succeeded;
    NSError * _error;
    AVAssetWriterInputPassDescription * _nextPassDescription;
}

@property (copy, nonatomic) id completionBlock;
@property (readonly, nonatomic) char succeeded;
@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) AVAssetWriterInputPassDescription * descriptionForNextPass;

- (AVAssetWriterInputFigAssetWriterEndPassOperation *)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 trackID:(int)arg1;
- (char)succeeded;
- (AVAssetWriterInputPassDescription *)descriptionForNextPass;
- (void)_markOperationAsCompletedWithSuccess:(char)arg0 error:(NSError *)arg1;
- (void)_notifyWhetherMorePassesAreNeeded:(char)arg0 timeRanges:(NSArray *)arg1 forTrackWithID:(int)arg2;
- (void)dealloc;
- (AVAssetWriterInputFigAssetWriterEndPassOperation *)init;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)start;
- (NSError *)error;
- (void)finalize;

@end
