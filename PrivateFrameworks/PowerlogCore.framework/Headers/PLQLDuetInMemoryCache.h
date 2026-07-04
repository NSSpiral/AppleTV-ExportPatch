/* Runtime dump - PLQLDuetInMemoryCache
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLQLDuetInMemoryCache : NSObject
{
    NSDictionary * _startArgs;
    NSDictionary * _stopArgs;
    int _refCount;
    double _startTime;
    double _stopTime;
    double _cellIn;
    double _cellOut;
    double _wifiIn;
    double _wifiOut;
}

@property (retain) NSDictionary * startArgs;
@property (retain) NSDictionary * stopArgs;
@property double startTime;
@property double stopTime;
@property double cellIn;
@property double cellOut;
@property double wifiIn;
@property double wifiOut;
@property int refCount;

- (PLQLDuetInMemoryCache *)init;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)startTime;
- (int)refCount;
- (void)setRefCount:(int)arg0;
- (void)setStopTime:(double)arg0;
- (double)stopTime;
- (void)setStopArgs:(NSDictionary *)arg0;
- (void)setStartArgs:(NSDictionary *)arg0;
- (PLQLDuetInMemoryCache *)initWithStartTime:(double)arg0 withStartargs:(id)arg1;
- (void)addDataWithCellIn:(double)arg0 withCellOut:(double)arg1 withWifiIn:(double)arg2 withWifiOut:(double)arg3;
- (NSDictionary *)stopArgs;
- (char)isStartPresent;
- (void)addStartEvent:(double)arg0 withArgs:(struct OpaqueJSValue * *)arg1;
- (char)isStopPresent;
- (void)clearStop;
- (void)addStopEvent:(double)arg0 withArgs:(struct OpaqueJSValue * *)arg1;
- (void)updateDataStats:(id)arg0;
- (NSDictionary *)startArgs;
- (double)cellIn;
- (double)cellOut;
- (double)wifiIn;
- (double)wifiOut;
- (void)setWifiIn:(double)arg0;
- (void)setWifiOut:(double)arg0;
- (void)setCellIn:(double)arg0;
- (void)setCellOut:(double)arg0;

@end
