/* Runtime dump - CalSearch
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface CalSearch : NSObject
{
    struct CalDatabase * _database;
    struct CalFilter * _filter;
    struct __CFString * _searchString;
    int _seed;
    <CalSearchDataSink> * _dataSink;
    BOOL _dateToStartShowingResultsSentToDataSink;
    BOOL _moreResultsAvailable;
    struct __CFArray * _partialResults;
    struct __CFArray * _partialCachedOccurrences;
    struct __CFArray * _partialCachedDays;
    struct __CFArray * _partialCachedDaysIndexes;
    struct __CFSet * _matchedEventsSet;
    struct __CFSet * _matchedParticipantsSet;
    struct __CFSet * _matchedLocationsSet;
    BOOL _stopLoadingResults;
    struct _opaque_pthread_mutex_t _dataSourceDeallocLock;
    BOOL _implementsCancellationCallback;
    char _searchParticipants;
    char _searchLocations;
    char _searchAttendees;
}

@property char searchParticipants;
@property char searchLocations;
@property char searchAttendees;

- (void)_startLoadingResults;
- (char)searchParticipants;
- (struct CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext *)arg0;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext *)arg0;
- (char)searchLocations;
- (struct CalLocationIdsSearchContext *)_createLocationIdsSearchContext;
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext *)arg0;
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext *)arg0;
- (struct CalEventIdsSearchContext *)_createEventIdsSearchContext;
- (char)searchAttendees;
- (void)_getAttendeesSearchResults:(struct CalEventIdsSearchContext *)arg0;
- (void)_getEventsSearchResults:(struct CalEventIdsSearchContext *)arg0;
- (void)_deleteEventIdsSearchContext:(struct CalEventIdsSearchContext *)arg0;
- (struct CalEventOccurrenceSearchContext *)_createSearchContext;
- (void)_getApplicationSearchResults:(struct CalEventOccurrenceSearchContext *)arg0;
- (void)_deleteSearchContext:(struct CalEventOccurrenceSearchContext *)arg0;
- (void)_addMatchedParticipantIds:(struct __CFArray *)arg0;
- (void)_addMatchedLocationIds:(struct __CFArray *)arg0;
- (void)_addMatchedEventIds:(struct __CFArray *)arg0;
- (CalSearch *)initWithDatabase:(struct CalDatabase *)arg0 filter:(int)arg1 dataSink:(struct CPRecordStore *)arg2;
- (void)startSearching;
- (void)stopSearching;
- (BOOL)moreResultsAvailable;
- (void)setSearchParticipants:(char)arg0;
- (void)setSearchLocations:(char)arg0;
- (void)setSearchAttendees:(char)arg0;
- (void)dealloc;
- (int)seed;

@end
