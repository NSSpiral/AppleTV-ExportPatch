/* Runtime dump - EKAvailabilityCachedSpan
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAvailabilityCachedSpan : NSObject
{
    NSDate * _creationDate;
    EKAvailabilitySpan * _span;
}

@property (retain, nonatomic) NSDate * creationDate;
@property (retain, nonatomic) EKAvailabilitySpan * span;

- (void)dealloc;
- (NSString *)description;
- (NSDate *)creationDate;
- (void)setCreationDate:(NSDate *)arg0;
- (EKAvailabilitySpan *)span;
- (void)setSpan:(EKAvailabilitySpan *)arg0;

@end
