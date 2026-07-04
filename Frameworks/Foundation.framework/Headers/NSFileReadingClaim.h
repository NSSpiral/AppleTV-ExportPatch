/* Runtime dump - NSFileReadingClaim
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileReadingClaim : NSFileAccessClaim
{
    NSURL * _url;
    char _urlDidChange;
    unsigned int _options;
    NSFileAccessNode * _location;
    NSFileAccessNode * _rootNode;
    int _linkResolutionCount;
}

- (char)evaluateSelfWithRootNode:(NSFileAccessNode *)arg0 checkSubarbitrability:(char)arg1;
- (void)forwardUsingMessageSender:(NSObject *)arg0 crashHandler:(/* block */ id)arg1;
- (void)itemAtLocation:(NSObject *)arg0 wasReplacedByItemAtLocation:(NSObject *)arg1;
- (NSFileReadingClaim *)initWithClient:(NSObject *)arg0 messageParameters:(NSDictionary *)arg1 replySender:(NSObject *)arg2;
- (void)granted;
- (void)invokeClaimer;
- (char)blocksClaim:(id)arg0;
- (void)devalueSelf;
- (char)isBlockedByReadingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (char)isBlockedByWritingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (char)shouldBeRevokedPriorToInvokingAccessor;
- (void)resolveURLThenMaybeContinueInvokingClaimer:(id)arg0;
- (NSFileReadingClaim *)initWithPurposeID:(NSObject *)arg0 url:(NSURL *)arg1 options:(unsigned int)arg2 claimer:(BRCDiskSpaceReclaimer *)arg3;
- (void)dealloc;

@end
