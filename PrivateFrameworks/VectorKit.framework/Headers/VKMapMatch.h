/* Runtime dump - VKMapMatch
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapMatch : NSObject
{
    struct ? * roadFeature;
    NSString * featureName;
    struct ? coordinateOnFeature;
    double courseOnFeature;
    float distanceFromJunction;
    float junctionRadius;
    float roadWidth;
}

@property (readonly, nonatomic) struct ? * roadFeature;
@property (readonly, nonatomic) NSString * featureName;
@property (readonly, nonatomic) struct ? coordinateOnFeature;
@property (readonly, nonatomic) double courseOnFeature;
@property (readonly, nonatomic) float distanceFromJunction;
@property (readonly, nonatomic) float junctionRadius;
@property (readonly, nonatomic) float roadWidth;

- (void)dealloc;
- (NSString *)description;
- (void).cxx_construct;
- (VKMapMatch *)initWithGEORoadFeature:(struct ? *)arg0 pointOnFeature:(unsigned int)arg1 courseOnFeature:(unsigned int)arg2 distanceFromJunction:(int)arg3 junctionRadius:(int)arg4 roadWidth:(int)arg5;
- (struct ? *)roadFeature;
- (NSString *)featureName;
- (struct ?)coordinateOnFeature;
- (double)courseOnFeature;
- (float)distanceFromJunction;
- (float)junctionRadius;
- (float)roadWidth;

@end
