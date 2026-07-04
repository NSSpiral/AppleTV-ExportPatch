/* Runtime dump - TIHandwritingStrokes
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding>
{
    struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > _strokes;
    char _continuePreviousStroke;
}

+ (char)supportsSecureCoding;

- (TIHandwritingStrokes *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (TIHandwritingStrokes *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)numberOfStrokes;
- (void)addPoint:(struct CGPoint)arg0;
- (unsigned int)numberOfPointsInStrokeAtIndex:(unsigned int)arg0;
- (struct CGPoint)pointAtIndex:(unsigned int)arg0 inStrokeAtIndex:(unsigned int)arg1;
- (void).cxx_construct;
- (void)removeStrokeAtIndex:(unsigned int)arg0;
- (void).cxx_destruct;
- (void)endStroke;
- (void)removeAllStrokes;
- (unsigned int)totalNumberOfPoints;

@end
