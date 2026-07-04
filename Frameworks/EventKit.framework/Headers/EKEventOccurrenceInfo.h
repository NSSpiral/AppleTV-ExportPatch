/* Runtime dump - EKEventOccurrenceInfo
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKEventOccurrenceInfo : NSObject
{
    struct ? _occurrenceInfo;
}

@property (nonatomic) struct ? occurrenceInfo;

- (EKEventOccurrenceInfo *)initWithOccurrenceInfo:(struct ?)arg0;
- (struct ?)occurrenceInfo;
- (void)setOccurrenceInfo:(struct ?)arg0;
- (NSString *)description;

@end
