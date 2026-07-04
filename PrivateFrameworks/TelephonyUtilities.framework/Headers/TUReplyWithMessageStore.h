/* Runtime dump - TUReplyWithMessageStore
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUReplyWithMessageStore : NSObject

- (void)dealloc;
- (int)count;
- (TUReplyWithMessageStore *)init;
- (id)_defaultRepliesForSending:(char)arg0;
- (id)customReplies;
- (id)_cannedRepliesForSending:(char)arg0;
- (id)cannedReplies;
- (id)defaultReplies;
- (NSDictionary *)cannedReplyActionSheetOptions;
- (id)cannedRepliesForSending;
- (void)setCustomReply:(id /* block */)arg0 atIndex:(unsigned int)arg1;
- (void)_handleMessagesStoreChanged;

@end
