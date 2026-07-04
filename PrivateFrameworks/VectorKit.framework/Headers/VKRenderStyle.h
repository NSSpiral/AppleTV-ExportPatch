/* Runtime dump - VKRenderStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRenderStyle : NSObject
{
    struct RenderStyle _internal;
    void * _query;
}

@property (nonatomic) void * query;
@property (readonly, nonatomic) NSString * sourceName;
@property (readonly, nonatomic) NSString * targetName;
@property (readonly, nonatomic) char hasTargetStyle;
@property (readonly, nonatomic) float blendFactor;

- (void *)query;
- (void)setQuery:(void *)arg0;
- (void).cxx_construct;
- (NSString *)sourceName;
- (char)hasTargetStyle;
- (VKRenderStyle *)initWithQuery:(void *)arg0 data:(struct StyleData *)arg1 variantData:(struct map<gss::PropertyID, signed char, std::__1::less<gss::PropertyID>, std::__1::allocator<std::__1::pair<const gss::PropertyID, signed char> > >)arg2 blendingFactor:(struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<gss::PropertyID, signed char>, void *> > >)arg3;
- (void)setSourceStyleData:(struct StyleData *)arg0;
- (void)setTargetStyleData:(struct StyleData *)arg0 animationFactor:(struct map<gss::PropertyID, signed char, std::__1::less<gss::PropertyID>, std::__1::allocator<std::__1::pair<const gss::PropertyID, signed char> > >)arg1;
- (float)blendFactor;
- (NSString *)targetName;

@end
