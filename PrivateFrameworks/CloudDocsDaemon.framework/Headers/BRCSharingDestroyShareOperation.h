/* Runtime dump - BRCSharingDestroyShareOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingDestroyShareOperation : BRCSharingModifyShareOperation

- (void)main;
- (CKShareID *)shareID;
- (BRCSharingDestroyShareOperation *)initWithShare:(CKShare *)arg0 zone:(NSObject *)arg1;

@end
