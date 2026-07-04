/* Runtime dump - MPStoreLookupBatcher
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLookupBatcher : NSObject
{
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _completeResponseDictionary;
    NSMutableDictionary * _completeResponseResultsDictionary;
    id _completionHandler;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _serialQueue;
    SSLookupRequest * _lookupRequest;
    unsigned int _batchSize;
}

@property (readonly, nonatomic) SSLookupRequest * lookupRequest;
@property (nonatomic) unsigned int batchSize;

+ (NSURLRequest *)_copyLookupRequest:(NSURLRequest *)arg0;
+ (NSObject *)_incompleteChildrenIDsForStoreResult:(NSObject *)arg0;

- (MPStoreLookupBatcher *)initWithLookupRequest:(SSLookupRequest *)arg0;
- (void)performBatchedRequestWithCompletion:(id /* block */)arg0;
- (void)_batchOperationDidComplete:(id)arg0;
- (void)_onSerialQueue_mergeResponseDictionaryIntoCompleteResponseDictionary:(NSDictionary *)arg0;
- (void)_callCompletionHandlerIfNecessary;
- (SSLookupRequest *)lookupRequest;
- (void).cxx_destruct;
- (unsigned int)batchSize;
- (void)setBatchSize:(unsigned int)arg0;

@end
