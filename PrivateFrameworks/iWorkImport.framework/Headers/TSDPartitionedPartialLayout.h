/* Runtime dump - TSDPartitionedPartialLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPartitionedPartialLayout : TSDLayout
{
    struct CGRect mBounds;
    TSDDefaultPartitioner * mPartitioner;
}

@property (readonly, nonatomic) TSDDefaultPartitioner * partitioner;
@property (readonly, nonatomic) struct CGRect bounds;

- (Class)repClassOverride;
- (NSObject *)computeLayoutGeometry;
- (TSDDefaultPartitioner *)partitioner;
- (TSDPartitionedPartialLayout *)initWithInfo:(NSDictionary *)arg0 bounds:(struct CGRect)arg1 partitioner:(struct CGSize)arg2;
- (struct CGRect)bounds;

@end
