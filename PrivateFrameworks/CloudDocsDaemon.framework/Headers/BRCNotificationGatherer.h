/* Runtime dump - BRCNotificationGatherer
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNotificationGatherer : NSObject
{
    BRCNotificationPipe * _pipe;
    id _gatherReply;
}

- (void)invalidate;
- (void)done;
- (void).cxx_destruct;
- (BRCNotificationGatherer *)initWithNotificationPipe:(BRCNotificationPipe *)arg0 reply:(id /* block */)arg1;
- (char)continueGatheringWithBatchSize:(int)arg0;

@end
