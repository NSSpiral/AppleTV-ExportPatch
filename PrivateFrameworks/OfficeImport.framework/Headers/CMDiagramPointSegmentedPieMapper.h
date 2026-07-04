/* Runtime dump - CMDiagramPointSegmentedPieMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper
{
    float mStartAngle;
    float mStopAngle;
    char mDrawArrows;
    unsigned int mSegmentIndex;
    unsigned int mSegmentCount;
}

- (void)setSegmentCount:(unsigned int)arg0;
- (void)setStartAngle:(float)arg0;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (void)setDrawArrows:(char)arg0;
- (NSString *)transformPresentationName;
- (void)setStopAngle:(float)arg0;
- (void)setSegmentIndex:(unsigned int)arg0;
- (NSObject *)_arrowFillWithState:(NSObject *)arg0;

@end
