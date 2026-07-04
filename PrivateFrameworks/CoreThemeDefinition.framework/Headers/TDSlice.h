/* Runtime dump - TDSlice
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDSlice : NSManagedObject
{
    struct CGRect _sliceRect;
}

@property (nonatomic) struct CGRect sliceRect;
@property (nonatomic) struct CGRect primitiveSliceRect;
@property (retain, nonatomic) NSString * sliceRectString;

- (struct CGRect)primitiveSliceRect;
- (void)setPrimitiveSliceRect:(struct CGRect)arg0;
- (void)setSliceRect:(struct CGRect)arg0;
- (struct CGRect)sliceRect;
- (void)awakeFromFetch;

@end
