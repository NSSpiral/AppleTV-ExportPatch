/* Runtime dump - TSDPathCut
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPathCut : NSObject
{
    int mSegment;
    float mT;
    float mSkew;
}

@property (readonly, nonatomic) int segment;
@property (readonly, nonatomic) float t;
@property (readonly, nonatomic) float skew;

- (TSDPathCut *)initWithSegment:(int)arg0 atT:(float)arg1 withSkew:(float)arg2;
- (int)segment;
- (float)t;
- (float)skew;
- (NSString *)description;

@end
