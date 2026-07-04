/* Runtime dump - CKDPlaceholderOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPlaceholderOperation : NSOperation
{
    NSObject<OS_dispatch_group> * _group;
    char _isFinished;
    char _isExecuting;
    NSDate * _startDate;
    CKDOperation * _realOperation;
    NSOperationQueue * _targetOperationQueue;
}

@property (readonly, nonatomic) NSString * operationID;
@property (readonly, weak, nonatomic) CKDClientProxy * proxy;
@property (readonly, nonatomic) CKDClientContext * context;
@property (readonly, nonatomic) NSString * sectionID;
@property (retain, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) CKDOperation * realOperation;
@property (readonly, nonatomic) NSOperationQueue * targetOperationQueue;
@property (nonatomic) char isExecuting;
@property (nonatomic) char isFinished;

- (void)cancel;
- (NSString *)description;
- (CKDClientContext *)context;
- (void)start;
- (void)main;
- (void).cxx_destruct;
- (CKDClientProxy *)proxy;
- (char)isFinished;
- (char)isExecuting;
- (NSString *)operationID;
- (char)isConcurrent;
- (NSString *)sectionID;
- (CKDPlaceholderOperation *)initWithOperation:(NSObject *)arg0 targetOperationQueue:(NSOperationQueue *)arg1;
- (NSString *)CKPropertiesDescription;
- (void)setIsFinished:(char)arg0;
- (NSString *)ckShortDescription;
- (CKDOperation *)realOperation;
- (NSOperationQueue *)targetOperationQueue;
- (void)setIsExecuting:(char)arg0;
- (void)setStartDate:(NSDate *)arg0;
- (NSDate *)startDate;

@end
