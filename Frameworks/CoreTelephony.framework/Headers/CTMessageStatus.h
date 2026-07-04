/* Runtime dump - CTMessageStatus
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTMessageStatus : NSObject
{
    unsigned int _messageId;
    int _messageType;
    int _result;
}

@property (readonly) unsigned int messageId;
@property (readonly) int messageType;
@property (readonly) int result;

- (unsigned int)messageId;
- (int)messageType;
- (CTMessageStatus *)initWithMessageId:(unsigned int)arg0 messageType:(int)arg1 result:(int)arg2;
- (int)result;

@end
