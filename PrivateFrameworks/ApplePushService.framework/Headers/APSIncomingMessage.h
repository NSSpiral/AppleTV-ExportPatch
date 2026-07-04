/* Runtime dump - APSIncomingMessage
 * Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSIncomingMessage : APSMessage

@property (copy, nonatomic) NSDate * timestamp;
@property (copy, nonatomic) NSData * token;
@property (nonatomic) char fromStorage;
@property (nonatomic) char lastMessageFromStorage;
@property (nonatomic) int priority;

- (NSDate *)timestamp;
- (void)setTimestamp:(NSDate *)arg0;
- (void)setPriority:(int)arg0;
- (int)priority;
- (NSData *)token;
- (void)setToken:(NSData *)arg0;
- (void)setFromStorage:(char)arg0;
- (char)wasLastMessageFromStorage;
- (void)setLastMessageFromStorage:(char)arg0;
- (char)wasFromStorage;

@end
