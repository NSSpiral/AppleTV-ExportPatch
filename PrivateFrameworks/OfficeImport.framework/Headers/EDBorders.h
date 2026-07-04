/* Runtime dump - EDBorders
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDBorders : NSObject <NSCopying>
{
    EDResources * mResources;
    unsigned int mLeftBorderIndex;
    unsigned int mRightBorderIndex;
    unsigned int mTopBorderIndex;
    unsigned int mBottomBorderIndex;
    unsigned int mDiagonalBorderIndex;
    unsigned int mVerticalBorderIndex;
    unsigned int mHorizontalBorderIndex;
}

+ (EDBorders *)bordersWithLeft:(id)arg0 right:(_UIViewServiceXPCMachSendRight *)arg1 top:(id *)arg2 bottom:(id *)arg3 diagonal:(id)arg4 resources:(NSArray *)arg5;
+ (NSArray *)bordersWithResources:(NSArray *)arg0;
+ (EDBorders *)bordersWithLeft:(id)arg0 right:(_UIViewServiceXPCMachSendRight *)arg1 top:(id *)arg2 bottom:(id *)arg3 diagonal:(id)arg4 vertical:(char)arg5 horizontal:(char)arg6 resources:(NSArray *)arg7;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (EDBorders *)copyWithZone:(struct _NSZone *)arg0;
- (id)bottomBorder;
- (UIView *)topBorder;
- (id)leftBorder;
- (id)rightBorder;
- (EDBorders *)initWithResources:(NSArray *)arg0;
- (void)setLeftBorder:(id)arg0;
- (void)setRightBorder:(id)arg0;
- (void)setTopBorder:(UIView *)arg0;
- (void)setBottomBorder:(id)arg0;
- (void)setDiagonalBorder:(id)arg0;
- (void)setVerticalBorder:(id)arg0;
- (void)setHorizontalBorder:(id)arg0;
- (char)isEqualToBorders:(id)arg0;
- (id)diagonalBorder;
- (id)verticalBorder;
- (id)horizontalBorder;

@end
