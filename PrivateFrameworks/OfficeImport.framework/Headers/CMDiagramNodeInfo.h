/* Runtime dump - CMDiagramNodeInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramNodeInfo : NSObject
{
    int mTreeDepth;
    int mRow;
    struct ODIHRange mXRange;
    char mConnectToVerticalSide;
    int mExtraRowsBetweenParentAndSelf;
    float mXOffsetRelativeToParent;
    struct ODIHRangeVector * mXRanges;
}

- (void)dealloc;
- (CMDiagramNodeInfo *)init;
- (int)row;
- (void).cxx_construct;
- (struct ODIHRange)xRange;
- (void)setXRange:(struct ODIHRange)arg0;
- (int)treeDepth;
- (void)setTreeDepth:(int)arg0;
- (void)setRow:(int)arg0;
- (char)connectToVerticalSide;
- (void)setConnectToVerticalSide:(char)arg0;
- (int)extraRowsBetweenParentAndSelf;
- (void)setExtraRowsBetweenParentAndSelf:(int)arg0;
- (float)xOffsetRelativeToParent;
- (void)setXOffsetRelativeToParent:(float)arg0;
- (void)addToXOffsetRelativeToParent:(float)arg0;
- (struct ODIHRangeVector *)xRanges;

@end
