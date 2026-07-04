/* Runtime dump - TSTTextEngineDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate>
{
    TSWPPadding * mPadding;
    int mVerticalAlignment;
    float mMaxWidthForChildren;
}

@property (nonatomic) float maxWidthForChildren;

- (TSTTextEngineDelegate *)initWithPadding:(struct UIEdgeInsets)arg0 verticalAlignment:(int)arg1;
- (void)setMaxWidthForChildren:(float)arg0;
- (float)maxWidthForChildren;
- (char)forceWesternLineBreaking;
- (void)dealloc;
- (struct UIEdgeInsets)padding;
- (int)verticalAlignment;

@end
