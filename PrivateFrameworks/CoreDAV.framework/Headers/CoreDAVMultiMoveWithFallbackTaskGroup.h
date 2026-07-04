/* Runtime dump - CoreDAVMultiMoveWithFallbackTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMultiMoveWithFallbackTaskGroup : CoreDAVTaskGroup
{
    NSSet * _sourceURLs;
    NSURL * _destinationURL;
    int _overwrite;
    char _useFallback;
    NSDictionary * _sourceEntityDataPayloads;
    NSDictionary * _sourceEntityDataContentTypes;
    NSDictionary * _sourceEntityETags;
    NSMutableSet * _destinationURLs;
    NSMutableDictionary * _destinationEntityETags;
    NSMutableArray * _outstandingSourceURLsToMove;
}

@property (readonly, nonatomic) NSSet * sourceURLs;
@property (readonly, nonatomic) NSURL * destinationURL;
@property (readonly, nonatomic) NSDictionary * sourceEntityETags;
@property (readonly, nonatomic) NSDictionary * sourceEntityDataPayloads;
@property (readonly, nonatomic) NSDictionary * sourceEntityDataContentTypes;
@property (readonly, nonatomic) char useFallback;
@property (readonly, nonatomic) int overwrite;
@property (readonly, nonatomic) NSMutableDictionary * destinationEntityETags;
@property (readonly, nonatomic) NSMutableSet * destinationURLs;
@property (retain, nonatomic) NSMutableArray * outstandingSourceURLsToMove;

- (NSURL *)destinationURL;
- (void)dealloc;
- (NSString *)description;
- (void)startTaskGroup;
- (int)overwrite;
- (char)useFallback;
- (NSSet *)sourceURLs;
- (NSURL *)filenameFromURL:(NSURL *)arg0;
- (void)processOutstandingTasks;
- (NSMutableArray *)outstandingSourceURLsToMove;
- (NSURL *)fullDestinationURLFromSourceURL:(NSURL *)arg0;
- (NSDictionary *)sourceEntityETags;
- (void)_completedMoveTask:(NSObject *)arg0 sourceURL:(NSURL *)arg1;
- (NSMutableDictionary *)destinationEntityETags;
- (NSDictionary *)_eTagFromTaskResponseHeaders:(NSDictionary *)arg0;
- (NSDictionary *)sourceEntityDataPayloads;
- (NSDictionary *)sourceEntityDataContentTypes;
- (void)_completedPutTask:(NSObject *)arg0 sourceURL:(NSURL *)arg1;
- (NSMutableSet *)destinationURLs;
- (void)_setTagsForDestinationEntityAtURL:(NSURL *)arg0 fromTaskResponseHeaders:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;
- (CoreDAVMultiMoveWithFallbackTaskGroup *)initWithSourceURLs:(NSSet *)arg0 destinationURL:(NSURL *)arg1 overwrite:(char)arg2 useFallback:(char)arg3 sourceEntityDataPayloads:(NSDictionary *)arg4 sourceEntityDataContentTypes:(NSDictionary *)arg5 sourceEntityETags:(NSDictionary *)arg6 accountInfoProvider:(NSObject *)arg7 taskManager:(NSObject *)arg8;
- (void)setOutstandingSourceURLsToMove:(NSMutableArray *)arg0;

@end
