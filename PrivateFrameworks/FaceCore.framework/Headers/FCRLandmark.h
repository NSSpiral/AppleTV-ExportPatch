/* Runtime dump - FCRLandmark
 * Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@interface FCRLandmark : NSObject
{
    NSString * type;
    unsigned int pointCount;
    struct CGPoint * points;
}

@property (readonly) NSString * type;
@property (readonly) unsigned int pointCount;
@property (readonly) struct CGPoint * points;

+ (NSObject *)landmarkWithType:(NSString *)arg0 pointCount:(unsigned int)arg1 points:(struct CGPoint *)arg2;

- (void)dealloc;
- (NSString *)type;
- (FCRLandmark *)initWithType:(NSString *)arg0 pointCount:(unsigned int)arg1 points:(struct CGPoint *)arg2;
- (struct CGPoint *)points;
- (unsigned int)pointCount;

@end
