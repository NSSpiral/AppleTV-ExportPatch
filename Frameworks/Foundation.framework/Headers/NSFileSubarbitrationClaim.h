/* Runtime dump - NSFileSubarbitrationClaim
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileSubarbitrationClaim : NSFileAccessClaim
{
    NSArray * _readingURLs;
    unsigned int _readingOptions;
    NSArray * _writingURLs;
    unsigned int _writingOptions;
    id _messageSender;
    NSArray * _readingLocations;
    NSArray * _writingLocations;
    NSFileAccessNode * _rootNode;
    NSMutableSet * _forwardedClaimIDs;
    NSMutableDictionary * _readRelinquishmentsByPresenterID;
    NSMutableDictionary * _writeRelinquishmentsByPresenterID;
}

- (char)evaluateSelfWithRootNode:(NSFileAccessNode *)arg0 checkSubarbitrability:(char)arg1;
- (void)forwardUsingMessageSender:(NSObject *)arg0 crashHandler:(/* block */ id)arg1;
- (void)revoked;
- (void)setMessageSender:(NSObject *)arg0;
- (void)itemAtLocation:(NSObject *)arg0 wasReplacedByItemAtLocation:(NSObject *)arg1;
- (NSObject *)messageSender;
- (NSFileSubarbitrationClaim *)initWithClient:(NSObject *)arg0 messageParameters:(NSDictionary *)arg1 replySender:(NSObject *)arg2;
- (void)forwardRelinquishmentMessageWithKind:(id)arg0 parameters:(NSDictionary *)arg1 toPresenter:(UIDocumentAlertPresenter *)arg2 usingReplySender:(NSObject *)arg3;
- (void)forwardReacquisitionMessageWithKind:(id)arg0 parameters:(NSDictionary *)arg1 toPresenterForID:(NSObject *)arg2 usingReplySender:(NSObject *)arg3;
- (void)granted;
- (void)invokeClaimer;
- (void)devalueSelf;
- (void)evaluateNewClaim:(id)arg0;
- (char)isBlockedByReadingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (char)isBlockedByWritingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (void)devalueOldClaim:(id)arg0;
- (NSFileSubarbitrationClaim *)initWithReadingURLs:(NSArray *)arg0 options:(unsigned int)arg1 writingURLs:(NSArray *)arg2 options:(unsigned int)arg3 claimer:(BRCDiskSpaceReclaimer *)arg4;
- (id)relinquishmentForMessageOfKind:(id)arg0 toPresenterForID:(NSObject *)arg1;
- (void)dealloc;

@end
