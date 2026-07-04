/* Runtime dump - CADEventEntityWrapper
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface CADEventEntityWrapper : CADEntityWrapper
{
    double _occurrenceDate;
}

+ (char)supportsSecureCoding;

- (CADEventEntityWrapper *)initWithCalEntity:(void *)arg0 propertiesToLoad:(id)arg1 occurrenceDate:(double)arg2;
- (double)occurrenceDate;
- (CADEventEntityWrapper *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;

@end
