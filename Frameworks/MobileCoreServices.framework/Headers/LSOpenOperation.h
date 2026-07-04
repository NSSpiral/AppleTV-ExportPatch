/* Runtime dump - LSOpenOperation
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSOpenOperation : NSOperation
{
    char _executing;
    char _finished;
    char _sourceIsManaged;
    NSURL * _resourceURL;
    NSString * _applicationIdentifier;
    NSString * _documentIdentifier;
    id _userInfoPlist;
    NSDictionary * _options;
    id _delegate;
    int _result;
}

- (LSOpenOperation *)initForOpeningResource:(NSObject *)arg0 usingApplication:(id)arg1 uniqueDocumentIdentifier:(NSString *)arg2 sourceIsManaged:(char)arg3 userInfo:(NSDictionary *)arg4 options:(NSDictionary *)arg5 delegate:(NSObject *)arg6;
- (char)didSucceed;
- (void)completeOperation;
- (void)dealloc;
- (void)start;
- (void)main;
- (char)isFinished;
- (char)isExecuting;
- (char)isConcurrent;

@end
