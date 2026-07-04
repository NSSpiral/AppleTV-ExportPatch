/* Runtime dump - GEOUsageCollectionRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUsageCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray * _abExperimentAssignments;
    NSMutableArray * _directionsFeedbackCollections;
    NSMutableArray * _leaveNowFeedbackCollections;
    NSMutableArray * _mapsLaunchFeedbackCollections;
    NSMutableArray * _mapsUsageFeedbackCollections;
    NSMutableArray * _placeDataCacheFeedbackCollections;
    NSMutableArray * _stateTimingFeedbackCollections;
    NSMutableArray * _suggestionsFeedbackCollections;
    NSMutableArray * _tileSetStateFeedbackCollections;
    NSMutableArray * _transitAppLaunchFeedbackCollections;
    NSMutableArray * _usageCollections;
}

@property (retain, nonatomic) NSMutableArray * usageCollections;
@property (retain, nonatomic) NSMutableArray * directionsFeedbackCollections;
@property (retain, nonatomic) NSMutableArray * transitAppLaunchFeedbackCollections;
@property (retain, nonatomic) NSMutableArray * mapsUsageFeedbackCollections;
@property (retain, nonatomic) NSMutableArray * suggestionsFeedbackCollections;
@property (retain, nonatomic) NSMutableArray * stateTimingFeedbackCollections;
@property (retain, nonatomic) NSMutableArray * leaveNowFeedbackCollections;
@property (retain, nonatomic) NSMutableArray * mapsLaunchFeedbackCollections;
@property (retain, nonatomic) NSMutableArray * placeDataCacheFeedbackCollections;
@property (retain, nonatomic) NSMutableArray * tileSetStateFeedbackCollections;
@property (retain, nonatomic) NSMutableArray * abExperimentAssignments;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOUsageCollectionRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addUsageCollection:(GEOUsageCollection *)arg0;
- (void)addPlaceDataCacheFeedbackCollection:(id)arg0;
- (void)addDirectionsFeedbackCollection:(GEODirectionsFeedbackCollection *)arg0;
- (void)addSuggestionsFeedbackCollection:(GEOSuggestionsFeedbackCollection *)arg0;
- (void)addMapsLaunchFeedbackCollection:(GEOMapsLaunchFeedbackCollection *)arg0;
- (void)addTransitAppLaunchFeedbackCollection:(GEOTransitAppLaunchFeedbackCollection *)arg0;
- (void)addMapsUsageFeedbackCollection:(GEOMapsUsageFeedbackCollection *)arg0;
- (void)addStateTimingFeedbackCollection:(GEOStateTimingFeedbackCollection *)arg0;
- (void)addLeaveNowFeedbackCollection:(GEOLeaveNowFeedbackCollection *)arg0;
- (void)addTileSetStateFeedbackCollection:(id)arg0;
- (void)setUsageCollections:(NSMutableArray *)arg0;
- (void)setDirectionsFeedbackCollections:(NSMutableArray *)arg0;
- (void)setTransitAppLaunchFeedbackCollections:(NSMutableArray *)arg0;
- (void)setMapsUsageFeedbackCollections:(NSMutableArray *)arg0;
- (void)setSuggestionsFeedbackCollections:(NSMutableArray *)arg0;
- (void)setStateTimingFeedbackCollections:(NSMutableArray *)arg0;
- (void)setLeaveNowFeedbackCollections:(NSMutableArray *)arg0;
- (void)setMapsLaunchFeedbackCollections:(NSMutableArray *)arg0;
- (void)setPlaceDataCacheFeedbackCollections:(NSMutableArray *)arg0;
- (void)setTileSetStateFeedbackCollections:(NSMutableArray *)arg0;
- (void)setAbExperimentAssignments:(NSMutableArray *)arg0;
- (void)addAbExperimentAssignment:(GEOABExperimentAssignment *)arg0;
- (unsigned int)usageCollectionsCount;
- (void)clearUsageCollections;
- (NSObject *)usageCollectionAtIndex:(unsigned int)arg0;
- (unsigned int)directionsFeedbackCollectionsCount;
- (void)clearDirectionsFeedbackCollections;
- (NSObject *)directionsFeedbackCollectionAtIndex:(unsigned int)arg0;
- (unsigned int)transitAppLaunchFeedbackCollectionsCount;
- (void)clearTransitAppLaunchFeedbackCollections;
- (NSObject *)transitAppLaunchFeedbackCollectionAtIndex:(unsigned int)arg0;
- (unsigned int)mapsUsageFeedbackCollectionsCount;
- (void)clearMapsUsageFeedbackCollections;
- (NSObject *)mapsUsageFeedbackCollectionAtIndex:(unsigned int)arg0;
- (unsigned int)suggestionsFeedbackCollectionsCount;
- (void)clearSuggestionsFeedbackCollections;
- (NSObject *)suggestionsFeedbackCollectionAtIndex:(unsigned int)arg0;
- (unsigned int)stateTimingFeedbackCollectionsCount;
- (void)clearStateTimingFeedbackCollections;
- (NSObject *)stateTimingFeedbackCollectionAtIndex:(unsigned int)arg0;
- (unsigned int)leaveNowFeedbackCollectionsCount;
- (void)clearLeaveNowFeedbackCollections;
- (NSObject *)leaveNowFeedbackCollectionAtIndex:(unsigned int)arg0;
- (unsigned int)mapsLaunchFeedbackCollectionsCount;
- (void)clearMapsLaunchFeedbackCollections;
- (NSObject *)mapsLaunchFeedbackCollectionAtIndex:(unsigned int)arg0;
- (unsigned int)placeDataCacheFeedbackCollectionsCount;
- (void)clearPlaceDataCacheFeedbackCollections;
- (NSObject *)placeDataCacheFeedbackCollectionAtIndex:(unsigned int)arg0;
- (unsigned int)tileSetStateFeedbackCollectionsCount;
- (void)clearTileSetStateFeedbackCollections;
- (NSObject *)tileSetStateFeedbackCollectionAtIndex:(unsigned int)arg0;
- (unsigned int)abExperimentAssignmentsCount;
- (void)clearAbExperimentAssignments;
- (NSObject *)abExperimentAssignmentAtIndex:(unsigned int)arg0;
- (NSMutableArray *)usageCollections;
- (NSMutableArray *)directionsFeedbackCollections;
- (NSMutableArray *)transitAppLaunchFeedbackCollections;
- (NSMutableArray *)mapsUsageFeedbackCollections;
- (NSMutableArray *)suggestionsFeedbackCollections;
- (NSMutableArray *)stateTimingFeedbackCollections;
- (NSMutableArray *)leaveNowFeedbackCollections;
- (NSMutableArray *)mapsLaunchFeedbackCollections;
- (NSMutableArray *)placeDataCacheFeedbackCollections;
- (NSMutableArray *)tileSetStateFeedbackCollections;
- (NSMutableArray *)abExperimentAssignments;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
