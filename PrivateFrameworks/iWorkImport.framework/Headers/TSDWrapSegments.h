/* Runtime dump - TSDWrapSegments
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDWrapSegments : NSObject
{
    struct vector<TSDWrapSegment, std::__1::allocator<TSDWrapSegment> > mSegments;
    struct CGRect mBounds;
}

+ (NSString *)wrapSegmentsWithPath:(NSString *)arg0;

- (void)p_buildSegmentsForPath:(NSString *)arg0;
- (struct ? *)segments;
- (struct CGRect)bounds;
- (TSDWrapSegments *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (TSDWrapSegments *)initWithPath:(NSString *)arg0;
- (void).cxx_destruct;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg0;
- (int)segmentCount;

@end
