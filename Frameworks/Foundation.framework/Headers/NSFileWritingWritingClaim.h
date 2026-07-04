/* Runtime dump - NSFileWritingWritingClaim
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileWritingWritingClaim : NSFileAccessClaim
{
    NSURL * _url1;
    char _url1DidChange;
    unsigned int _options1;
    NSURL * _url2;
    char _url2DidChange;
    unsigned int _options2;
    NSFileAccessNode * _location1;
    NSFileAccessNode * _location2;
}

- (char)evaluateSelfWithRootNode:(NSFileAccessNode *)arg0 checkSubarbitrability:(char)arg1;
- (void)forwardUsingMessageSender:(NSObject *)arg0 crashHandler:(/* block */ id)arg1;
- (void)itemAtLocation:(NSObject *)arg0 wasReplacedByItemAtLocation:(NSObject *)arg1;
- (NSFileWritingWritingClaim *)initWithClient:(NSObject *)arg0 messageParameters:(NSDictionary *)arg1 replySender:(NSObject *)arg2;
- (void)granted;
- (void)invokeClaimer;
- (char)blocksClaim:(id)arg0;
- (void)devalueSelf;
- (char)isBlockedByReadingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (char)isBlockedByWritingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (void)resolveURLsThenContinueInvokingClaimer:(id)arg0;
- (NSFileWritingWritingClaim *)initWithPurposeID:(NSObject *)arg0 url:(NSURL *)arg1 options:(unsigned int)arg2 url:(NSURL *)arg3 options:(unsigned int)arg4 claimer:(BRCDiskSpaceReclaimer *)arg5;
- (void)dealloc;

@end
