/* Runtime dump - TSCH3DVAOResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DVAOResource : TSCH3DResource
{
    struct vector<TSCH3D::ResourceAttributeState, std::__1::allocator<TSCH3D::ResourceAttributeState> > mAttributes;
    TSCH3DResource * mIndices;
    NSIndexSet * mEnabledArrays;
    char mFailed;
}

@property (retain, nonatomic) NSIndexSet * enabledArrays;
@property (nonatomic) char failed;

+ (NSObject *)resourceWithObjectState:(struct ObjectState *)arg0 indices:(struct ObjectState)arg1;

- (TSCH3DVAOResource *)initWithObjectState:(struct ObjectState *)arg0 indices:(struct ObjectState)arg1;
- (NSIndexSet *)enabledArrays;
- (void)setEnabledArrays:(NSIndexSet *)arg0;
- (char)failed;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSObject *)get;
- (void)setFailed:(char)arg0;

@end
