/* Runtime dump - TSUChunkedString
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUChunkedString : NSMutableString
{
    unsigned int _length;
    struct vector<boost::shared_ptr<TSUStringChunk>, std::__1::allocator<boost::shared_ptr<TSUStringChunk> > > _chunks;
    unsigned int _chunkLength;
}

- (void)dealloc;
- (TSUChunkedString *)init;
- (unsigned int)length;
- (void)appendString:(NSString *)arg0;
- (void)deleteCharactersInRange:(struct _NSRange)arg0;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withString:(NSString *)arg1;
- (void).cxx_construct;
- (void)getCharacters:(unsigned short *)arg0 range:(struct _NSRange)arg1;
- (void).cxx_destruct;
- (void)insertString:(NSString *)arg0 atIndex:(unsigned int)arg1;
- (TSUChunkedString *)initWithChunkLength:(unsigned int)arg0;
- (void)p_appendRange:(struct _NSRange)arg0 fromString:(NSString *)arg1;
- (void)p_insertCharactersInRange:(struct _NSRange)arg0 fromString:(NSString *)arg1 atIndex:(unsigned int)arg2 chunkIndex:(unsigned int)arg3;
- (void)p_deleteCharactersInRange:(struct _NSRange)arg0 chunkIndex:(unsigned int)arg1;
- (void)p_compactChunksInRange:(struct _NSRange)arg0;
- (void)compact;

@end
