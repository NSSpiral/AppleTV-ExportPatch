/* Runtime dump - CUTFileCopier
 * Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTFileCopier : NSObject
{
    char _shouldCancel;
    char _didErrorOccur;
    char _inProgress;
    <CUTFileCopierDelegate> * _delegate;
    NSURL * _inputURL;
    NSURL * _outputURL;
    id _identifier;
    unsigned int _operation;
    void * _BOMCopier;
}

@property <CUTFileCopierDelegate> * delegate;
@property (readonly) NSURL * inputURL;
@property (readonly) NSURL * outputURL;
@property (readonly) id identifier;
@property (readonly, nonatomic) char wasCancelled;
@property (readonly, nonatomic) char didErrorOccur;
@property void * _BOMCopier;
@property char inProgress;
@property unsigned int operation;

- (NSURL *)outputURL;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<CUTFileCopierDelegate> *)arg0;
- (<CUTFileCopierDelegate> *)delegate;
- (unsigned int)operation;
- (void)setOperation:(unsigned int)arg0;
- (NSString *)identifier;
- (void)start;
- (void)cleanup;
- (void)_fillOutputURLFromInputURL;
- (NSURL *)inputURL;
- (NSString *)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)_main_copierFinishedWithResult:(NSObject *)arg0;
- (CUTFileCopier *)initWithInputURL:(NSURL *)arg0 outputURL:(NSURL *)arg1 identifier:(NSString *)arg2 operation:(unsigned int)arg3 delegate:(<CUTFileCopierDelegate> *)arg4;
- (char)wasCancelled;
- (char)didErrorOccur;
- (char)inProgress;
- (void)setInProgress:(char)arg0;
- (void *)_BOMCopier;
- (void)set_BOMCopier:(void *)arg0;

@end
