/* Runtime dump - MFCalendarComposeRecipient
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFCalendarComposeRecipient : MFComposeRecipient
{
    NSString * _calAttendeeName;
    id _participant;
}

@property (retain, nonatomic) id participant;

- (MFCalendarComposeRecipient *)initWithComposeRecipient:(_MFPlaceholderComposeRecipient *)arg0;
- (void)setCalAttendeeName:(NSString *)arg0;
- (void)setParticipant:(EKParticipant *)arg0;
- (EKParticipant *)participant;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)displayString;

@end
