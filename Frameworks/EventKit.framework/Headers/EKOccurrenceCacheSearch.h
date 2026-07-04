/* Runtime dump - EKOccurrenceCacheSearch
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKOccurrenceCacheSearch : NSObject <EKCancellableRemoteOperation>
{
    NSSet * _calendars;
    NSString * _searchTerm;
    EKEventStore * _store;
    id _callback;
    NSNumber * _replyID;
    char _canceled;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (EKOccurrenceCacheSearch *)searchWithCalendars:(NSSet *)arg0 searchTerm:(NSString *)arg1 store:(EKEventStore *)arg2 callback:(id /* block */)arg3;

- (NSString *)searchTerm;
- (void)receivedBatchResultsFromServer:(NSObject *)arg0 finished:(char)arg1;
- (int)performSearchOperation:(unsigned int)arg0 inCalendars:(id)arg1 withEventStore:(EKEventStore *)arg2 andSearchTerm:(id)arg3;
- (EKOccurrenceCacheSearch *)initWithCalendars:(NSSet *)arg0 searchTerm:(NSString *)arg1 store:(EKEventStore *)arg2 callback:(id /* block */)arg3;
- (void)cancel;
- (void)dealloc;
- (void)run;
- (void)disconnect;

@end
