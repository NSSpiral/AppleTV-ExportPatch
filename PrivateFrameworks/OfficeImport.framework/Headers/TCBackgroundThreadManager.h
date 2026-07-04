/* Runtime dump - TCBackgroundThreadManager
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCBackgroundThreadManager : NSObject
{
    <TCCancelDelegate> * mCancelDelegate;
    char mIsWaiting;
    unsigned int mBlockCount;
    NSObject<OS_dispatch_queue> * mQueue;
    NSObject<OS_dispatch_group> * mGroup;
    NSObject<OS_dispatch_queue> * mProgressReportingQueue;
    TCMessageContext * mMessageContext;
    TCProgressContext * mProgressContext;
}

@property (readonly) char isCancelled;
@property (retain) TCMessageContext * messageContext;
@property (retain) TCProgressContext * progressContext;

- (void)dealloc;
- (char)isCancelled;
- (void)setMessageContext:(TCMessageContext *)arg0;
- (void)setProgressContext:(TCProgressContext *)arg0;
- (TCBackgroundThreadManager *)initWithCancelDelegate:(<TCCancelDelegate> *)arg0;
- (void)addASyncBlock:(id /* block */)arg0;
- (void)waitUntilComplete;
- (void)reportWarning:(struct TCTaggedMessageStructure *)arg0;
- (TCMessageContext *)messageContext;
- (TCProgressContext *)progressContext;

@end
