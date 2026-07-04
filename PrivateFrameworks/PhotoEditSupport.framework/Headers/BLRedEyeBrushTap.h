/* Runtime dump - BLRedEyeBrushTap
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRedEyeBrushTap : AutoEncodeDecodeObject
{
    int _destinationWidth;
    NSDictionary * _eyeRepairData;
    double _timestamp;
    struct CGPoint _point;
}

@property (nonatomic) double timestamp;
@property (nonatomic) int destinationWidth;
@property (nonatomic) struct CGPoint point;
@property (retain, nonatomic) NSDictionary * eyeRepairData;

- (void)dealloc;
- (BLRedEyeBrushTap *)init;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (struct CGPoint)point;
- (void)setPoint:(struct CGPoint)arg0;
- (NSArray *)keysToEncode;
- (int)destinationWidth;
- (void)setDestinationWidth:(int)arg0;
- (NSDictionary *)eyeRepairData;
- (void)setEyeRepairData:(NSDictionary *)arg0;

@end
