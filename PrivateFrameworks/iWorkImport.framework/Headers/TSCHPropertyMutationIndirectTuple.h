/* Runtime dump - TSCHPropertyMutationIndirectTuple
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPropertyMutationIndirectTuple : TSCHPropertyMutationTuple
{
    int mStyleOwnerType;
    unsigned int mStyleOwnerIndex;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned int index;

- (TSCHPropertyMutationIndirectTuple *)initWithStyleOwner:(<TSCHStyleOwning> *)arg0 mutations:(NSDictionary *)arg1;
- (<TSCHStyleOwning> *)styleOwner;
- (id)styleOwnerRef;
- (TSCHPropertyMutationIndirectTuple *)initWithStyleOwnerType:(int)arg0 index:(unsigned int)arg1 inChart:(GQHChart *)arg2 mutations:(NSDictionary *)arg3;
- (id)indirectTuple;
- (int)type;
- (unsigned int)index;

@end
