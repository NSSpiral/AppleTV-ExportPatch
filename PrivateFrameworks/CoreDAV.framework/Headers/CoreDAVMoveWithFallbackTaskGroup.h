/* Runtime dump - CoreDAVMoveWithFallbackTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMoveWithFallbackTaskGroup : CoreDAVTaskGroup
{
    NSURL * _sourceURL;
    NSURL * _destinationURL;
    NSString * _previousETag;
    char _useFallback;
    int _overwrite;
    NSData * _dataPayload;
    NSString * _dataContentType;
    NSDictionary * _responseHeaders;
    NSString * _nextETag;
}

@property (readonly, nonatomic) NSURL * sourceURL;
@property (readonly, nonatomic) NSURL * destinationURL;
@property (nonatomic) int overwrite;
@property (nonatomic) char useFallback;
@property (retain, nonatomic) NSString * previousETag;
@property (retain, nonatomic) NSData * dataPayload;
@property (retain, nonatomic) NSString * dataContentType;
@property (readonly, nonatomic) NSDictionary * responseHeaders;
@property (readonly, nonatomic) NSString * nextETag;

- (NSURL *)destinationURL;
- (NSURL *)sourceURL;
- (void)dealloc;
- (NSString *)description;
- (NSDictionary *)responseHeaders;
- (void)startTaskGroup;
- (NSData *)dataPayload;
- (NSString *)dataContentType;
- (NSString *)previousETag;
- (void)setPreviousETag:(NSString *)arg0;
- (NSString *)nextETag;
- (int)overwrite;
- (void)setOverwrite:(int)arg0;
- (void)_completedMoveTask:(NSObject *)arg0;
- (void)_completedPutTask:(NSObject *)arg0;
- (CoreDAVMoveWithFallbackTaskGroup *)initWithSourceURL:(NSURL *)arg0 destinationURL:(NSURL *)arg1 AccountInfoProvider:(NSObject *)arg2 taskManager:(NSObject *)arg3;
- (char)useFallback;
- (void)setUseFallback:(char)arg0;
- (void)setDataPayload:(NSData *)arg0;
- (void)setDataContentType:(NSString *)arg0;

@end
