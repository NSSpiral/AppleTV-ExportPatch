/* Runtime dump - VKGuidanceStepInfo
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGuidanceStepInfo : NSObject
{
    NSString * _roadName;
    int _routePoint;
}

@property (readonly, retain, nonatomic) NSString * roadName;
@property (readonly, nonatomic) int routePoint;

- (void)dealloc;
- (VKGuidanceStepInfo *)initWithRoadName:(NSString *)arg0 point:(int)arg1;
- (int)routePoint;
- (NSString *)roadName;

@end
