/* Runtime dump - ODIBending
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIBending : NSObject
{
    float mSpaceWidth;
    float mSpaceHeight;
    char mWithArrows;
    float mRectHeight;
    unsigned int mMaxNodeCount;
    unsigned int mMaxColumnCount;
}

+ (unsigned int)mapLogicalBoundsWithShapeSize:(struct CGSize)arg0 spaceSize:(struct CGSize)arg1 maxNodeCount:(unsigned int)arg2 maxColumnCount:(unsigned int)arg3 state:(NSObject *)arg4;
+ (char)mapIdentifier:(NSString *)arg0 state:(NSObject *)arg1;

- (void)mapWithState:(NSObject *)arg0;
- (ODIBending *)initWithArrows:(char)arg0;
- (void)setRectHeight:(float)arg0;
- (void)setMaxNodeCount:(unsigned int)arg0;
- (void)setMaxColumnCount:(unsigned int)arg0;

@end
