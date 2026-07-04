/* Runtime dump - CKPlaceholderOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPlaceholderOperation : NSOperation
{
    NSObject<OS_dispatch_group> * _group;
    char _isFinished;
    char _isExecuting;
    NSString * _sectionID;
    id _context;
    NSDate * _startDate;
    NSString * _operationID;
    id _daemonInvokeBlock;
}

@property (retain, nonatomic) NSString * sectionID;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) NSString * operationID;
@property (readonly, nonatomic) id daemonInvokeBlock;
@property (nonatomic) char isExecuting;
@property (nonatomic) char isFinished;

- (CKPlaceholderOperation *)initWithOperation:(NSObject *)arg0 daemonInvocationBlock:(id /* block */)arg1;
- (void)setSectionID:(NSString *)arg0;
- (id /* block */)daemonInvokeBlock;
- (void)cancel;
- (NSString *)description;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (void)start;
- (void)main;
- (void).cxx_destruct;
- (char)isFinished;
- (char)isExecuting;
- (NSString *)operationID;
- (char)isConcurrent;
- (NSString *)sectionID;
- (NSString *)CKPropertiesDescription;
- (void)setIsFinished:(char)arg0;
- (void)setIsExecuting:(char)arg0;
- (void)setStartDate:(NSDate *)arg0;
- (NSDate *)startDate;

@end
