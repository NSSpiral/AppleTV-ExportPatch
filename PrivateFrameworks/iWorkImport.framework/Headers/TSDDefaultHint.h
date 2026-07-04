/* Runtime dump - TSDDefaultHint
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDefaultHint : NSObject <TSDHint>
{
    struct CGRect mBounds;
    unsigned int mEdges;
}

@property (readonly, nonatomic) struct CGRect bounds;
@property (readonly, nonatomic) unsigned int edges;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)archivedHintClass;

- (TSDDefaultHint *)initWithBounds:(struct CGRect)arg0 edges:(struct CGSize)arg1;
- (char)isLastPartitionHorizontally:(char)arg0;
- (char)overlapsWithSelection:(id)arg0;
- (void)offsetByDelta:(int)arg0;
- (<TSDHint> *)firstChildHint;
- (<TSDHint> *)lastChildHint;
- (id)copyForArchiving;
- (struct CGRect)bounds;
- (unsigned int)edges;

@end
