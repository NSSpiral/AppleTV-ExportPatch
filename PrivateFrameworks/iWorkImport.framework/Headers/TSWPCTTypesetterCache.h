/* Runtime dump - TSWPCTTypesetterCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCTTypesetterCache : NSObject
{
    struct map<unsigned int, boost::shared_ptr<TSWPParagraphTypesetter>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, boost::shared_ptr<TSWPParagraphTypesetter> > > > _typesetters;
}

- (void)removeTypesetterForParagraphIndex:(unsigned int)arg0;
- (struct shared_ptr<TSWPParagraphTypesetter>)cachedTypesetterForParagraphIdentifier:(NSString *)arg0;
- (void)addTypesetterForParagraphIdentifier:(unsigned int)arg0 typesetter:(struct shared_ptr<TSWPParagraphTypesetter>)arg1;
- (void)p_limitCacheSize:(unsigned int)arg0;
- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)clearCache;

@end
