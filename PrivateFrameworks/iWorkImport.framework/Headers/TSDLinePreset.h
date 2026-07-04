/* Runtime dump - TSDLinePreset
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDLinePreset : NSObject
{
    TSDLineEnd * mHeadLineEnd;
    TSDLineEnd * mTailLineEnd;
    TSDStroke * mStroke;
}

@property (readonly, copy, nonatomic) TSDLineEnd * headLineEnd;
@property (readonly, copy, nonatomic) TSDLineEnd * tailLineEnd;
@property (readonly, copy, nonatomic) TSDStroke * stroke;

+ (TSDLinePreset *)lineWithStroke:(TSDStroke *)arg0 headLineEnd:(TSDLineEnd *)arg1 tailLineEnd:(TSDLineEnd *)arg2;

- (TSDLinePreset *)initWithStroke:(TSDStroke *)arg0 headLineEnd:(TSDLineEnd *)arg1 tailLineEnd:(TSDLineEnd *)arg2;
- (TSDLineEnd *)headLineEnd;
- (TSDLineEnd *)tailLineEnd;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (TSDStroke *)stroke;

@end
