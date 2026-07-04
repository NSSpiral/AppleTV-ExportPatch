/* Runtime dump - NSFileWritingClaim
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileWritingClaim : NSFileAccessClaim
{
    NSURL * _url;
    char _urlDidChange;
    unsigned int _options;
    NSFileAccessNode * _location;
}

- (char)evaluateSelfWithRootNode:(NSFileAccessNode *)arg0 checkSubarbitrability:(char)arg1;
- (void)forwardUsingMessageSender:(NSObject *)arg0 crashHandler:(/* block */ id)arg1;
- (void)itemAtLocation:(NSObject *)arg0 wasReplacedByItemAtLocation:(NSObject *)arg1;
- (NSFileWritingClaim *)initWithClient:(NSObject *)arg0 messageParameters:(NSDictionary *)arg1 replySender:(NSObject *)arg2;
- (void)granted;
- (void)invokeClaimer;
- (char)blocksClaim:(id)arg0;
- (void)devalueSelf;
- (char)isBlockedByReadingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (char)isBlockedByWritingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (NSFileWritingClaim *)initWithPurposeID:(NSObject *)arg0 url:(NSURL *)arg1 options:(unsigned int)arg2 claimer:(BRCDiskSpaceReclaimer *)arg3;
- (void)resolveURLsThenContinueInvokingClaimer:(id)arg0;
- (void)dealloc;

@end
