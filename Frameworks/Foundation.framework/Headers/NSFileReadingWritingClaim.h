/* Runtime dump - NSFileReadingWritingClaim
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileReadingWritingClaim : NSFileAccessClaim
{
    NSURL * _readingURL;
    char _readingURLDidChange;
    unsigned int _readingOptions;
    NSURL * _writingURL;
    char _writingURLDidChange;
    unsigned int _writingOptions;
    NSFileAccessNode * _readingLocation;
    NSFileAccessNode * _writingLocation;
    NSFileAccessNode * _rootNode;
    int _readingLinkResolutionCount;
}

- (char)evaluateSelfWithRootNode:(NSFileAccessNode *)arg0 checkSubarbitrability:(char)arg1;
- (void)forwardUsingMessageSender:(NSObject *)arg0 crashHandler:(/* block */ id)arg1;
- (void)itemAtLocation:(NSObject *)arg0 wasReplacedByItemAtLocation:(NSObject *)arg1;
- (NSFileReadingWritingClaim *)initWithClient:(NSObject *)arg0 messageParameters:(NSDictionary *)arg1 replySender:(NSObject *)arg2;
- (void)granted;
- (void)invokeClaimer;
- (char)blocksClaim:(id)arg0;
- (void)devalueSelf;
- (char)isBlockedByReadingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (char)isBlockedByWritingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(id)arg0;
- (NSFileReadingWritingClaim *)initWithPurposeID:(NSObject *)arg0 readingURL:(NSURL *)arg1 options:(unsigned int)arg2 writingURL:(NSURL *)arg3 options:(unsigned int)arg4 claimer:(BRCDiskSpaceReclaimer *)arg5;
- (void)dealloc;

@end
