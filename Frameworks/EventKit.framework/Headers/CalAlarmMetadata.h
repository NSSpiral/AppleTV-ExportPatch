/* Runtime dump - CalAlarmMetadata
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface CalAlarmMetadata : NSObject <NSCoding>
{
    NSArray * _attach;
    NSArray * _attendee;
    NSString * _description;
    NSString * _summary;
}

@property (retain) NSArray * attach;
@property (retain) NSArray * attendee;
@property (retain) NSString * description;
@property (retain) NSString * summary;

+ (NSData *)metadataWithData:(NSData *)arg0;

- (NSArray *)attendee;
- (void)setAttendee:(NSArray *)arg0;
- (void)setDescription:(NSString *)arg0;
- (void)setAttach:(NSArray *)arg0;
- (CalAlarmMetadata *)initWithICSAlarm:(ICSAlarm *)arg0;
- (void)applyToAlarm:(id)arg0;
- (void)dealloc;
- (CalAlarmMetadata *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSArray *)attach;
- (NSString *)summary;
- (void)setSummary:(NSString *)arg0;
- (NSData *)dataRepresentation;

@end
