/* Runtime dump - GEODirectionsFeedbackCollector
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsFeedbackCollector : NSObject
{
    GEODirectionsFeedback * _currentDirectionsFeedback;
    GEODirectionsFeedbackCollection * _currentFeedbackCollection;
    NSMutableSet * _routeIDs;
}

@property (retain, nonatomic) GEODirectionsFeedbackCollection * currentFeedbackCollection;
@property (retain, nonatomic) GEODirectionsFeedback * currentDirectionsFeedback;
@property (retain, nonatomic) NSMutableSet * routeIDs;

- (void)dealloc;
- (void)reset;
- (GEODirectionsFeedbackCollection *)currentFeedbackCollection;
- (void)setCurrentFeedbackCollection:(GEODirectionsFeedbackCollection *)arg0;
- (void)setCurrentDirectionsFeedback:(GEODirectionsFeedback *)arg0;
- (void)setRouteIDs:(NSMutableSet *)arg0;
- (void)_updateFeedbackSessionWithResponseID:(NSObject *)arg0;
- (void)startFeedbackSession;
- (void)addTrafficRerouteFeedback:(GEOTrafficRerouteFeedback *)arg0;
- (void)startFeedbackSessionForResponseID:(NSObject *)arg0;
- (void)setupFeedbackSessionWithResponseID:(NSObject *)arg0;
- (void)addRouteID:(NSObject *)arg0 stepID:(unsigned int)arg1 completeStep:(char)arg2;
- (void)setFinalLocation:(GEOLocation *)arg0 asArrival:(char)arg1;
- (void)setAudioFeedback:(struct ? *)arg0;
- (void)endFeedbackSession;
- (GEODirectionsFeedback *)currentDirectionsFeedback;
- (NSMutableSet *)routeIDs;

@end
