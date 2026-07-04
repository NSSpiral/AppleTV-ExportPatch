/* Runtime dump - CalSpotlightSearch
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface CalSpotlightSearch : NSObject
{
    struct CalDatabase * _database;
    NSString * _titleString;
    NSString * _locationString;
    NSString * _descriptionString;
    NSString * _participantString;
    <CalSearchDataSink> * _dataSink;
    BOOL _moreResultsAvailable;
    BOOL _onlySearchEvents;
    struct __CFArray * _partialResults;
    struct __CFSet * _matchedEventsSet;
    struct __CFSet * _matchedParticipantsSet;
    struct __CFSet * _matchedLocationsSet;
    BOOL _implementsCancellationCallback;
    struct __CFDictionary * _closestEventOccurrences;
    BOOL _cancelled;
}

+ (struct __CFDictionary *)newQueryCache;

- (struct CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext *)arg0;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext *)arg0;
- (struct CalLocationIdsSearchContext *)_createLocationIdsSearchContext;
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext *)arg0;
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext *)arg0;
- (void)_addMatchedParticipantIds:(struct __CFArray *)arg0;
- (void)_addMatchedLocationIds:(struct __CFArray *)arg0;
- (void)startSearching;
- (void)stopSearching;
- (CalSpotlightSearch *)initWithDatabase:(struct CalDatabase *)arg0 titleString:(NSString *)arg1 locationString:(NSString *)arg2 descriptionString:(NSString *)arg3 participantString:(NSString *)arg4 dataSink:(<CalSearchDataSink> *)arg5 queryCache:(struct __CFDictionary *)arg6;
- (void)_startLoadingResults:(NSArray *)arg0;
- (struct CalEventSpotlightContext *)_createSpotlightEventsContext;
- (void)_getSpotlightEvents:(struct CalEventSpotlightContext *)arg0 callback:(struct __CFSet *)arg1;
- (void)_deleteSpotlightEventsContext:(struct CalEventSpotlightContext *)arg0;
- (void)calculateSearchWindow:(struct CalEventSpotlightContext *)arg0;
- (CalSpotlightSearch *)initWithDatabase:(struct CalDatabase *)arg0 searchString:(struct __CFString *)arg1 dataSink:(<CalSearchDataSink> *)arg2 queryCache:(struct __CFDictionary *)arg3;
- (CalSpotlightSearch *)initWithDatabase:(struct CalDatabase *)arg0 titleString:(NSString *)arg1 locationString:(NSString *)arg2 descriptionString:(NSString *)arg3 participantString:(NSString *)arg4 queryCache:(struct __CFDictionary *)arg5;
- (void)performWithBlock:(id /* block */)arg0;
- (void)dealloc;

@end
