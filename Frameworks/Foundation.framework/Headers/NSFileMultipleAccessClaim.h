/* Runtime dump - NSFileMultipleAccessClaim
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileMultipleAccessClaim : NSFileAccessClaim
{
    NSMutableArray * _readingURLs;
    unsigned int * _readingOptions;
    char * _readingURLsDidChange;
    NSMutableArray * _writingURLs;
    unsigned int * _writingOptions;
    char * _writingURLsDidChange;
    NSMutableArray * _readingLocations;
    NSMutableArray * _writingLocations;
    NSFileAccessNode * _rootNode;
    unsigned int _currentlyLinkResolvingURLIndex;
    int _readingLinkResolutionCount;
}

- (char)evaluateSelfWithRootNode:(NSFileAccessNode *)arg0 checkSubarbitrability:(char)arg1;
- (void)forwardUsingMessageSender:(NSObject *)arg0 crashHandler:(/* block */ id)arg1;
- (void)itemAtLocation:(NSObject *)arg0 wasReplacedByItemAtLocation:(NSObject *)arg1;
- (NSFileMultipleAccessClaim *)initWithClient:(NSObject *)arg0 messageParameters:(NSDictionary *)arg1 replySender:(NSObject *)arg2;
- (void)granted;
- (void)invokeClaimer;
- (char)blocksClaim:(id)arg0;
- (void)devalueSelf;
- (char)isBlockedByReadingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (char)isBlockedByWritingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (char)shouldBeRevokedPriorToInvokingAccessor;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(id)arg0;
- (NSFileMultipleAccessClaim *)initWithPurposeID:(NSObject *)arg0 intents:(id)arg1 claimer:(BRCDiskSpaceReclaimer *)arg2;
- (void)dealloc;
- (void)finalize;

@end
