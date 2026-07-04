/* Runtime dump - DAECalendarAvailabilityContext
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAECalendarAvailabilityContext : NSObject
{
    id _resultsBlock;
    id _completionBlock;
}

- (void).cxx_destruct;
- (void)finishedWithError:(NSError *)arg0;
- (DAECalendarAvailabilityContext *)initWithResultsBlock:(id /* block */)arg0 completionBlock:(/* block */ id)arg1;
- (void)resultsReturned:(id)arg0;

@end
