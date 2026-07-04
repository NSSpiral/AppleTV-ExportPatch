/* Runtime dump - TSDBrushPathManipulation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBrushPathManipulation : TSDPathManipulation
{
    struct CGPath * mBrushStroke;
    float mRepeatLength;
    NSMutableDictionary * mSections;
    NSMutableArray * mMiddleSections;
    NSMutableArray * mSmallSections;
    float mSmallLimitWidth;
    char mSplitAtSharpAngles;
}

@end
