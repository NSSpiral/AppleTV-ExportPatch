/* Runtime dump - TSCHPropertyMutationTuple
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPropertyMutationTuple : NSObject
{
    <TSCHStyleOwning> * mStyleOwner;
    NSDictionary * mMutations;
}

@property (readonly) <TSCHStyleOwning> * styleOwner;
@property (readonly) NSDictionary * mutations;

- (TSCHPropertyMutationTuple *)initWithStyleOwner:(<TSCHStyleOwning> *)arg0 mutations:(NSDictionary *)arg1;
- (<TSCHStyleOwning> *)styleOwner;
- (TSCHPropertyMutationTuple *)initWithStyleOwner:(<TSCHStyleOwning> *)arg0 mutationMap:(NSObject *)arg1;
- (id)styleOwnerRef;
- (id)indirectTuple;
- (NSDictionary *)mutations;
- (void)dealloc;
- (NSString *)description;

@end
