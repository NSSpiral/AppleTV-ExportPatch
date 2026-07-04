/* Runtime dump - UIAcceleration
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAcceleration : NSObject
{
    double timestamp;
    double x;
    double y;
    double z;
}

@property (nonatomic) double timestamp;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

- (NSString *)description;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (double)x;
- (void)setX:(double)arg0;
- (double)y;
- (void)setY:(double)arg0;
- (double)z;
- (void)setZ:(double)arg0;

@end
