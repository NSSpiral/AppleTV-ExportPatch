/* Runtime dump - EventsFolderItemsSyncContext
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface EventsFolderItemsSyncContext : NSObject
{
    int _calEventChangeId;
    int _calRecurrenceChangeId;
    int _calAlarmChangeId;
    int _calAttendeeChangeId;
    int _highestSequenceNumber;
}

@property (nonatomic) int calEventChangeId;
@property (nonatomic) int calRecurrenceChangeId;
@property (nonatomic) int calAlarmChangeId;
@property (nonatomic) int calAttendeeChangeId;
@property (nonatomic) int highestSequenceNumber;

- (int)calEventChangeId;
- (void)setCalEventChangeId:(int)arg0;
- (int)calRecurrenceChangeId;
- (void)setCalRecurrenceChangeId:(int)arg0;
- (int)calAlarmChangeId;
- (void)setCalAlarmChangeId:(int)arg0;
- (int)calAttendeeChangeId;
- (void)setCalAttendeeChangeId:(int)arg0;
- (int)highestSequenceNumber;
- (void)setHighestSequenceNumber:(int)arg0;

@end
