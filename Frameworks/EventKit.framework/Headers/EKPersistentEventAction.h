/* Runtime dump - EKPersistentEventAction
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentEventAction : EKPersistentObject

@property (copy, nonatomic) NSString * externalID;
@property (copy, nonatomic) NSString * externalModTag;
@property (copy, nonatomic) NSString * externalFolderID;
@property (copy, nonatomic) NSString * externalScheduleID;
@property (copy, nonatomic) NSData * externalData;
@property (retain, nonatomic) EKPersistentCalendarItem * owner;

+ (NSMutableDictionary *)relations;

- (void)setExternalID:(NSString *)arg0;
- (NSString *)externalID;
- (NSData *)externalData;
- (void)setExternalData:(NSData *)arg0;
- (NSString *)externalFolderID;
- (void)setExternalFolderID:(NSString *)arg0;
- (NSString *)externalScheduleID;
- (void)setExternalScheduleID:(NSString *)arg0;
- (NSString *)externalModTag;
- (void)setExternalModTag:(NSString *)arg0;
- (EKPersistentCalendarItem *)owner;
- (int)entityType;
- (void)setOwner:(EKPersistentCalendarItem *)arg0;

@end
