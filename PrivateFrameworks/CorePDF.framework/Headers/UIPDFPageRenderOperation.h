/* Runtime dump - UIPDFPageRenderOperation
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageRenderOperation : NSOperation
{
    UIPDFPageRenderJob * _job;
    char executing;
    char finished;
}

@property (retain) UIPDFPageRenderJob * job;

- (void)completeOperation;
- (void)dealloc;
- (void)start;
- (void)main;
- (UIPDFPageRenderOperation *)initWithJob:(UIPDFPageRenderJob *)arg0;
- (char)isFinished;
- (char)isExecuting;
- (char)isConcurrent;
- (UIPDFPageRenderJob *)job;
- (void)setJob:(UIPDFPageRenderJob *)arg0;

@end
