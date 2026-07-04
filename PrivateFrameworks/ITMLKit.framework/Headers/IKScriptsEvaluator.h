/* Runtime dump - IKScriptsEvaluator
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKScriptsEvaluator : NSObject <ISURLOperationDelegate>
{
    char _isJingleRequest;
    char _success;
    NSArray * _scripts;
    IKAppContext * _appContext;
    JSManagedValue * _callback;
    NSMutableArray * _records;
}

@property (nonatomic) char isJingleRequest;
@property (retain, nonatomic) NSArray * scripts;
@property (weak, nonatomic) IKAppContext * appContext;
@property (retain, nonatomic) JSManagedValue * callback;
@property (retain, nonatomic) NSMutableArray * records;
@property (nonatomic) char success;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)operation:(ISURLOperation *)arg0 failedWithError:(NSError *)arg1;
- (char)success;
- (NSMutableArray *)records;
- (void).cxx_destruct;
- (void)evaluate;
- (void)_operation:(NSObject *)arg0 finishedWithResult:(int)arg1 error:(NSError *)arg2;
- (void)operation:(ISURLOperation *)arg0 didReceiveResponse:(char)arg1;
- (void)operation:(ISURLOperation *)arg0 finishedWithOutput:(AVPlayerLayer *)arg1;
- (void)operation:(ISURLOperation *)arg0 willSendRequest:(NSURLRequest *)arg1;
- (void)setSuccess:(char)arg0;
- (void)setRecords:(NSMutableArray *)arg0;
- (JSManagedValue *)callback;
- (IKAppContext *)appContext;
- (IKScriptsEvaluator *)initWithScripts:(NSArray *)arg0 withContext:(NSObject *)arg1 callback:(JSManagedValue *)arg2 jingleRequest:(char)arg3;
- (void)_sendCallback:(id /* block */)arg0 inContext:(NSObject *)arg1 success:(char)arg2;
- (char)isJingleRequest;
- (void)setIsJingleRequest:(char)arg0;
- (void)setScripts:(NSArray *)arg0;
- (void)setAppContext:(IKAppContext *)arg0;
- (NSArray *)scripts;
- (void)setCallback:(JSManagedValue *)arg0;

@end
