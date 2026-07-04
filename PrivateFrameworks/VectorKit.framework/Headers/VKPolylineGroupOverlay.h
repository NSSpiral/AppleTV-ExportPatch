/* Runtime dump - VKPolylineGroupOverlay
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineGroupOverlay : NSObject <VKOverlay>
{
    NSMutableSet * _polylines;
    GEOMapRegion * _boundingMapRegion;
    struct __CFSet * _observers;
    VKPolylineOverlay * _selectedPolyline;
}

@property (readonly, nonatomic) NSSet * polylines;
@property (retain, nonatomic) VKPolylineOverlay * selectedPolyline;
@property (readonly, nonatomic) GEOMapRegion * boundingMapRegion;
@property (readonly, nonatomic) struct ? coordinate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (NSSet *)polylines;
- (struct ?)coordinate;
- (GEOMapRegion *)boundingMapRegion;
- (void)_updateBoundingMapRegion;
- (void)addPolyline:(MKPolyline *)arg0;
- (void)removePolyline:(MKPolyline *)arg0;
- (void)setSelectedPolyline:(VKPolylineOverlay *)arg0;
- (VKPolylineOverlay *)selectedPolyline;

@end
