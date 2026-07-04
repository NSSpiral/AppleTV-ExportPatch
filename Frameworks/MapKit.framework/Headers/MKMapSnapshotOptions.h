/* Runtime dump - MKMapSnapshotOptions
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshotOptions : NSObject <NSCopying>
{
    MKMapCamera * _camera;
    struct ? _mapRect;
    struct ? _region;
    unsigned int _mapType;
    int _mode;
    char _showsPointsOfInterest;
    char _showsBuildings;
    char _rendersInBackground;
    struct CGSize _size;
    float _scale;
    char _usingRect;
}

@property (copy, nonatomic) MKMapCamera * camera;
@property (nonatomic) struct ? mapRect;
@property (nonatomic) struct ? region;
@property (nonatomic) unsigned int mapType;
@property (nonatomic) char showsPointsOfInterest;
@property (nonatomic) char showsBuildings;
@property (nonatomic) struct CGSize size;
@property (nonatomic) float scale;
@property (nonatomic) char rendersInBackground;
@property (readonly, nonatomic) char usingRect;

- (struct ?)mapRect;
- (char)usingRect;
- (char)_rendersInBackground;
- (void)_setRendersInBackground:(char)arg0;
- (struct CGSize)size;
- (MKMapSnapshotOptions *)init;
- (float)scale;
- (MKMapSnapshotOptions *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSize:(struct CGSize)arg0;
- (void)setScale:(float)arg0;
- (void).cxx_destruct;
- (void)setRegion:(struct ?)arg0;
- (struct ?)region;
- (void)setMapRect:(struct ?)arg0;
- (unsigned int)mapType;
- (void)setMapType:(unsigned int)arg0;
- (char)showsPointsOfInterest;
- (void)setShowsPointsOfInterest:(char)arg0;
- (char)showsBuildings;
- (void)setShowsBuildings:(char)arg0;
- (MKMapCamera *)camera;
- (void)setCamera:(MKMapCamera *)arg0;

@end
