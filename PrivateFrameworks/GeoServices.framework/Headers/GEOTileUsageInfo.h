/* Runtime dump - GEOTileUsageInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileUsageInfo : NSObject
{
    double _startTime;
    double _endTime;
    NSMapTable * _tileStyleToCount;
    unsigned int _dataLength;
}

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (readonly, nonatomic) NSMapTable * tileStyleToCount;
@property (readonly, nonatomic) unsigned int dataLength;

- (void)setEndTime:(double)arg0;
- (void)dealloc;
- (void)setStartTime:(double)arg0;
- (double)startTime;
- (void)addTileKey:(struct _GEOTileKey *)arg0 dataLength:(struct _GEOTileKey)arg1;
- (NSMapTable *)tileStyleToCount;
- (double)endTime;
- (unsigned int)dataLength;

@end
