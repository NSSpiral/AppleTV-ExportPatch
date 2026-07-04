/* Runtime dump - GEOComposedRouteLeg
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteLeg : NSObject
{
    GEOComposedRoute * _composedRoute;
    int _type;
    struct _NSRange _pointRange;
    struct _NSRange _stepRange;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) struct _NSRange pointRange;
@property (readonly, nonatomic) struct _NSRange stepRange;
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) unsigned int startStepIndex;
@property (readonly, nonatomic) unsigned int endStepIndex;
@property (readonly, nonatomic) unsigned int stepCount;
@property (readonly, nonatomic) NSArray * steps;
@property (nonatomic) GEOComposedRoute * composedRoute;

- (NSString *)description;
- (int)type;
- (void)setComposedRoute:(GEOComposedRoute *)arg0;
- (struct _NSRange)stepRange;
- (struct _NSRange)pointRange;
- (double)remainingTimeAlongLegFromStepIndex:(unsigned int)arg0 currentStepRemainingDistance:(double)arg1;
- (unsigned int)endStepIndex;
- (double)remainingDistanceAlongLegFromStepIndex:(unsigned int)arg0 currentStepRemainingDistance:(double)arg1;
- (GEOComposedRouteLeg *)initWithComposedRoute:(GEOComposedRoute *)arg0 routeLegType:(int)arg1 stepRange:(struct _NSRange)arg2 pointRange:(struct _NSRange)arg3;
- (unsigned int)startStepIndex;
- (unsigned int)stepCount;
- (unsigned int)startPointIndex;
- (unsigned int)pointCount;
- (GEOComposedRoute *)composedRoute;
- (unsigned int)endPointIndex;
- (int)transportType;
- (NSArray *)steps;

@end
