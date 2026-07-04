/* Runtime dump - IMFileCopier
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMFileCopier : NSObject
{
    char _shouldCancel;
    char _didErrorOccur;
    char _inProgress;
    <IMFileCopierDelegate> * _delegate;
    NSURL * _inputURL;
    NSURL * _outputURL;
    id _identifier;
    unsigned int _operation;
    void * _BOMCopier;
    NSObject<OS_dispatch_queue> * _queue;
    id _callback;
}

@property <IMFileCopierDelegate> * delegate;
@property (readonly) NSURL * inputURL;
@property (readonly) NSURL * outputURL;
@property (readonly) id identifier;
@property (readonly, nonatomic) char wasCancelled;
@property (readonly, nonatomic) char didErrorOccur;
@property void * _BOMCopier;
@property char inProgress;
@property unsigned int operation;
@property id _callback;
@property NSObject<OS_dispatch_queue> * _queue;

- (NSURL *)outputURL;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<IMFileCopierDelegate> *)arg0;
- (<IMFileCopierDelegate> *)delegate;
- (unsigned int)operation;
- (void)setOperation:(unsigned int)arg0;
- (NSString *)identifier;
- (void)start;
- (NSObject<OS_dispatch_queue> *)_queue;
- (void)cleanup;
- (void)_fillOutputURLFromInputURL;
- (NSURL *)inputURL;
- (NSString *)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)_main_copierFinishedWithResult:(NSObject *)arg0;
- (IMFileCopier *)initWithInputURL:(NSURL *)arg0 outputURL:(NSURL *)arg1 identifier:(NSString *)arg2 operation:(unsigned int)arg3 delegate:(<IMFileCopierDelegate> *)arg4;
- (IMFileCopier *)initWithInputURL:(NSURL *)arg0 outputURL:(NSURL *)arg1 identifier:(NSString *)arg2 operation:(unsigned int)arg3 completionBlock:(id /* block */)arg4 queue:(/* block */ id)arg5;
- (char)wasCancelled;
- (char)didErrorOccur;
- (char)inProgress;
- (void)setInProgress:(char)arg0;
- (void *)_BOMCopier;
- (void)set_BOMCopier:(void *)arg0;
- (void)set_queue:(NSObject<OS_dispatch_queue> *)arg0;
- (id /* block */)_callback;
- (void)set_callback:(id /* block */)arg0;

@end
