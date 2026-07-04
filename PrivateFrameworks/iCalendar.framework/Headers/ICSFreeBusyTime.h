/* Runtime dump - ICSFreeBusyTime
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSFreeBusyTime : ICSProperty

@property (nonatomic) int fbtype;

- (ICSFreeBusyTime *)initWithPeriod:(NSString *)arg0;
- (int)fbtype;
- (void)setFbtype:(int)arg0;

@end
