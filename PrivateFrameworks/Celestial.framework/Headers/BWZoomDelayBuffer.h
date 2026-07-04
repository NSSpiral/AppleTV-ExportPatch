/* Runtime dump - BWZoomDelayBuffer
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWZoomDelayBuffer : NSObject
{
    struct ? * _zoomRequestBuffer;
    unsigned int _zoomRequestBufferIndex;
    unsigned int _maxZoomDelay;
    unsigned int _currentZoomDelay;
    int _currentZoomDirection;
    int _operatingMode;
}

@property (readonly, nonatomic) unsigned int zoomDelay;
@property (nonatomic) int operatingMode;

- (void)dealloc;
- (unsigned int)zoomDelay;
- (BWZoomDelayBuffer *)initWithMaxZoomDelay:(unsigned int)arg0;
- (void)updateZoomDelay:(unsigned int)arg0;
- (void)addZoomRequest:(struct ?)arg0;
- (struct ?)zoomRequestForISPAppliedZoomFactor:(float)arg0;
- (void)setOperatingMode:(int)arg0;
- (int)operatingMode;

@end
