/* Runtime dump - MFDAMoveResponseConsumer
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer>
{
    NSSet * _messagesIDs;
    NSMutableDictionary * _newRemoteIDsByMessageID;
    NSMutableSet * _failures;
    MFError * _error;
}

@property (retain, nonatomic) MFError * error;

- (void)dealloc;
- (MFError *)error;
- (MFDAMoveResponseConsumer *)initWithMessageIDs:(id)arg0 newRemoteIDsByMessageID:(NSMutableDictionary *)arg1 failures:(NSMutableSet *)arg2;
- (void)taskFailed:(id)arg0 statusCode:(int)arg1 error:(MFError *)arg2;
- (void)resultsForMessageMove:(id)arg0;
- (void)setError:(MFError *)arg0;

@end
