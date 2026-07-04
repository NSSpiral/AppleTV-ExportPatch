/* Runtime dump - CalRoute
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalRoute : NSObject <NSSecureCoding>
{
    CalLocation * _start;
    CalLocation * _end;
    double _duration;
    NSString * _route;
}

@property (retain) CalLocation * start;
@property (retain) CalLocation * end;
@property double duration;
@property (copy) NSString * route;

+ (char)supportsSecureCoding;

- (CalRoute *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (CalLocation *)start;
- (CalLocation *)end;
- (void)setStart:(CalLocation *)arg0;
- (void)setEnd:(CalLocation *)arg0;
- (void).cxx_destruct;
- (void)setRoute:(NSString *)arg0;
- (NSString *)route;

@end
