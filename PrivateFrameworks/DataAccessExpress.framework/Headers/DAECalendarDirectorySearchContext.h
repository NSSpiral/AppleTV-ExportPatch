/* Runtime dump - DAECalendarDirectorySearchContext
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAECalendarDirectorySearchContext : NSObject
{
    id _resultsBlock;
    id _completionBlock;
}

- (void).cxx_destruct;
- (void)finishedWithError:(NSError *)arg0 exceededResultLimit:(char)arg1;
- (DAECalendarDirectorySearchContext *)initWithResultsBlock:(id /* block */)arg0 completionBlock:(/* block */ id)arg1;
- (void)resultsReturned:(id)arg0;

@end
