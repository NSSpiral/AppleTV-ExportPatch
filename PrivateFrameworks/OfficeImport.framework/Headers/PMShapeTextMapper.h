/* Runtime dump - PMShapeTextMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMShapeTextMapper : CMMapper
{
    OADTextBody * mTextBody;
    OADOrientedBounds * mBounds;
    CMStyle * mStyle;
    char mRectangular;
}

- (void)dealloc;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (PMShapeTextMapper *)initWithOadTextBody:(NSObject *)arg0 bounds:(struct CGRect)arg1 parent:(NSObject *)arg2;
- (int)textAnchor;
- (void)setRectangular:(char)arg0;
- (char)isTableCellContent;

@end
