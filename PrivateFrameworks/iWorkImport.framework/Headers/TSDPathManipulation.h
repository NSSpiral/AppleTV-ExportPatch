/* Runtime dump - TSDPathManipulation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPathManipulation : NSObject
{
    TSDPathManipulation * mPrecedingManipulation;
}

- (struct CGPath *)manipulatePath:(struct CGPath *)arg0 withLineWidth:(float)arg1;
- (char)canDecomposeRectIntoParts;
- (TSDPathManipulation *)initWithProperties:(NSDictionary *)arg0 bundle:(NSObject *)arg1 dataManager:(void *)arg2 precedingManipulation:(id)arg3;
- (void)dealloc;

@end
