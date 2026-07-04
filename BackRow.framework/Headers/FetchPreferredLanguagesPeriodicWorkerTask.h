/* Runtime dump - FetchPreferredLanguagesPeriodicWorkerTask
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/PeriodicWorkerTask.h>
@interface FetchPreferredLanguagesPeriodicWorkerTask : PeriodicWorkerTask
{
    char reschedule_;
}

@property char reschedule;

- (void)setReschedule:(char)arg0;
- (void)completed;
- (char)reschedule;
- (void)main;

@end
